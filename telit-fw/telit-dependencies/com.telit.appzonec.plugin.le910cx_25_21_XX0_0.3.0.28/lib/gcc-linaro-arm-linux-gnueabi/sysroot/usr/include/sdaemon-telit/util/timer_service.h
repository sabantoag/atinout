#ifndef _PBP_UTIL_TIMER_SERVICE_H_
#define _PBP_UTIL_TIMER_SERVICE_H_

#include <vector>
#include <list>
#include "common/common_header.h"
#include "timer_manager.h"
#include "thread.h"
#include "mutex.h"
#include "condition.h"

namespace pbp {
namespace util {

class TimerService
{
private:
  struct CbInfo
  {
    int id;
    int call_count;
    int64_t timeout_us;
    int64_t start_clocktime_us;
    TimerManager::TimerCb cb;
    void* arg;

    /*!
     *  @brief To use std::list::remove method more easily
     *  Do NOT use this constructor except comparing
     */
    CbInfo(int id)
    {
      this->id = id;
    }

    CbInfo(int id, int64_t timeout_us, int64_t start_clocktime_us, TimerManager::TimerCb cb, void *arg)
    {
      this->id = id;
      this->timeout_us = timeout_us;
      this->start_clocktime_us = start_clocktime_us;
      this->cb = cb;
      this->arg = arg;
    }

    /*!
     *  To use std::list::remove method, (==) operator should be overrided.
     */
    bool operator == (const CbInfo &r) const
    {
      return id == r.id;
    }
  };

  struct ThreadInfo
  {
    Thread *thread;
    bool keep_thread;
    std::list<CbInfo> cb_info_l;
    Mutex mutex;
    Condition cond;

    ThreadInfo(Thread *thread, bool keep_thread)
    {
      this->thread = thread;
      this->keep_thread = keep_thread;
    }
  };

  static TimerService* GetInstance();
  TimerService();
  ~TimerService();

  /*!
   *  @brief Add timer task into service
   */
  int AddTask(int64_t timeout_us, TimerManager::TimerCb cb, void *arg = NULL);
  bool RemoveTask(int id);
  void ThreadLoop(ThreadInfo *thread_info);

  std::vector<ThreadInfo*> thread_info_l_;
  std::vector<bool> id_slot_v_; ///< To limit number of tasks, secure slot in constructor in advance
  Mutex slot_mutex_; ///<To keep thread safe

  static TimerService* s_ins_;

  friend class TimerManager;
};

}}

#endif /*_PBP_UTIL_TIMER_SERVICE_H_*/
