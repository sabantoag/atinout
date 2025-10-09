#ifndef _PBP_UTIL_MUTEX_H_
#define _PBP_UTIL_MUTEX_H_

#include "common/common_header.h"
#include <pthread.h>
#include <iostream>

namespace pbp {
namespace util {

class Mutex {
public:
  class AutoLock 
  {
  public:
    AutoLock(Mutex& mutex) : mutex_(mutex)
    {
      mutex_.Acquire();
    }

    ~AutoLock()
    {
      mutex_.Release();
    }
  private:
    Mutex& mutex_;
  };

  Mutex();
  ~Mutex();
  void Acquire();
  void Release();
  pthread_mutex_t& mutex() {return mutex_;}
private:
	pthread_mutex_t mutex_;	
};


inline Mutex::Mutex() 
{
  pthread_mutex_init(&mutex_ , NULL);
}

inline Mutex::~Mutex()
{
  pthread_mutex_destroy(&mutex_);
}

inline void Mutex::Acquire()
{
  pthread_mutex_lock(&mutex_);
}

inline void Mutex::Release()
{
  pthread_mutex_unlock(&mutex_);
}

}}

#endif /*_PBP_UTIL_MUTEX_H_*/
