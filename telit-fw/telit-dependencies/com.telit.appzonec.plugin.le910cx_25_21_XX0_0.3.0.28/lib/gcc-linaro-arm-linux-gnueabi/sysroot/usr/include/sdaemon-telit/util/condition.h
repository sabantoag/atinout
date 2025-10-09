#ifndef _PBP_UTIL_CONDITION_H_
#define _PBP_UTIL_CONDITION_H_

#include <iostream>
#include <sys/time.h>
#include "mutex.h"
#include "common/common_header.h"

namespace pbp {
namespace util {

class Condition {
public:
  enum class ConditionType{
    PRIVATE = 0,
    SHARED = 1
  };

  enum class WakeUpType {
    WAKE_UP_ONE = 0,
    WAKE_UP_ALL = 1
  };

  Condition();
  Condition(ConditionType type);
  ~Condition();
  // Wait on the condition variable.  Lock the mutex before calling.
  Result Wait(Mutex& mutex);
  // same with relative timeout
  Result WaitUntil(Mutex& mutex, int64_t time_us);
  // Signal the condition variable, allowing one thread to continue.
  void Signal();
  // Signal the condition variable, allowing one or all threads to continue.
  void Signal(WakeUpType type) 
  {
    if (type == WakeUpType::WAKE_UP_ONE) 
    {
      Signal();
    } 
    else 
    {
      Broadcast();
    }
  }
  // Signal the condition variable, allowing all threads to continue.
  void Broadcast();

  void SetName(string name){name_ = name;}

private:
  pthread_cond_t cond_;
  string name_;

};

// ---------------------------------------------------------------------------

inline Condition::Condition() 
{
  pthread_condattr_t attr;
  pthread_condattr_init(&attr);  
  pthread_condattr_setclock(&attr, CLOCK_MONOTONIC);    
  pthread_cond_init(&cond_, &attr);
  pthread_condattr_destroy(&attr);      
}

inline Condition::Condition(ConditionType type) 
{
  if (type == ConditionType::SHARED) 
  {
    pthread_condattr_t attr;
    pthread_condattr_init(&attr);
    pthread_condattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
    pthread_condattr_setclock(&attr, CLOCK_MONOTONIC);
    pthread_cond_init(&cond_, &attr);
    pthread_condattr_destroy(&attr);
  } 
  else 
  {
    pthread_condattr_t attr;
    pthread_condattr_init(&attr);  
    pthread_condattr_setclock(&attr, CLOCK_MONOTONIC);    
    pthread_cond_init(&cond_, &attr);
    pthread_condattr_destroy(&attr);    
  }
}

inline Condition::~Condition() {
  pthread_cond_destroy(&cond_);
}

inline Result Condition::Wait(Mutex& mutex) 
{
  pthread_cond_wait(&cond_, &mutex.mutex());
  return Result::SUCCESS;
}

inline Result Condition::WaitUntil(Mutex& mutex, int64_t time_us) 
{
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);

  if (!name_.empty())
  {
    kimsg("name %s",name_.c_str());
  }

  ts.tv_sec += time_us / 1000000;
  ts.tv_nsec += (time_us % 1000000) * 1000;
  if (ts.tv_nsec >= 1000000000) {
    ts.tv_nsec -= 1000000000;
    ts.tv_sec  += 1;
  }

  int status = pthread_cond_timedwait(&cond_, &mutex.mutex(), &ts);
  if (status == ETIMEDOUT) return Result::TIME_OUT;

  return Result::SUCCESS;
}

inline void Condition::Signal() 
{
  pthread_cond_signal(&cond_);
}

inline void Condition::Broadcast() 
{
  pthread_cond_broadcast(&cond_);
}

}}

#endif /*_PBP_UTIL_CONDITION_H_*/
