#ifndef _PBP_UTIL_QUEUE_H_
#define _PBP_UTIL_QUEUE_H_

#include <list>
#include "util/mutex.h"
#include "util/condition.h"
#include <syslog.h>

namespace pbp {
namespace util {

template <typename T>
class Queue
{
public:
  Queue(){}

  void Enqueue(const T& t)
  {
    Mutex::AutoLock lock(mutex_);
    list_l_.push_back(t);
    if(list_l_.size() == 1) cond_.Signal();
  }

  T Dequeue()
  {
    Mutex::AutoLock lock(mutex_);
    if(list_l_.empty()) cond_.Wait(mutex_);
    T t = list_l_.front();
    list_l_.pop_front();
    return t;
  }

  void Clear()
  {
    Mutex::AutoLock lock(mutex_);
    list_l_.clear();
  }

  bool DequeueTimedWait(T &t, int timeout_us)
  {
    Mutex::AutoLock lock(mutex_);
    if(list_l_.empty()) 
    {
      if (cond_.WaitUntil(mutex_, timeout_us) == Result::TIME_OUT)
      {
        return false;
      }
    }

    t = list_l_.front();
    list_l_.pop_front();
    return true;
  }

  size_t size() 
  {
    Mutex::AutoLock lock(mutex_);
    return list_l_.size();
  }

private:		
  std::list<T> list_l_;
  Mutex mutex_;
  Condition cond_;
};

}}

#endif /*_PBP_UTIL_QUEUE_H_*/
