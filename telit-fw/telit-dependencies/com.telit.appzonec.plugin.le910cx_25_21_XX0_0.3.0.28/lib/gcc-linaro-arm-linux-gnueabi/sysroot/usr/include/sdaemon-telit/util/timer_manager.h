#ifndef _PBP_UTIL_TIMER_MANAGER_H_
#define _PBP_UTIL_TIMER_MANAGER_H_

#include <functional>

namespace pbp {
namespace util {

class TimerService;

class TimerManager
{
public:
  typedef std::function<bool(int, void*)> TimerCb;

  TimerManager();

  int AddTask(int64_t timeout_us, TimerCb cb, void *arg = NULL);
  bool RemoveTask(int id);
private:
  TimerService *ins_;
};

}}

#endif /*_PBP_UTIL_TIMER_MANAGER_H_*/
