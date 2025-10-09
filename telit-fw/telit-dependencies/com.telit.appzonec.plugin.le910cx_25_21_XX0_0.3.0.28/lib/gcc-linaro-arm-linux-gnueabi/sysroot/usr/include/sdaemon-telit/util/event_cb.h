#ifndef _PBP_UTIL_EVENTCB_H_
#define _PBP_UTIL_EVENTCB_H_

#include <functional>
#include <map>
#include "mutex.h"
#include "event_dic.h"
#include "common/common_header.h"

namespace pbp {
namespace util {

class EventCb
{  
public:
	void AddEventCb(void* from, EventDic::Callback cb)
  {
    Mutex::AutoLock lock(mutex_);
    if(event_cb_m_.find(from) == event_cb_m_.end())
    {
      event_cb_m_.insert(std::pair<void*, EventDic::Callback>(from, cb));
      return;
    }
    event_cb_m_[from] = cb;
  }

	void RemoveEventCb(void *from)
  {
    Mutex::AutoLock lock(mutex_);
    if(event_cb_m_.find(from) != event_cb_m_.end())
    {
      event_cb_m_.erase(from);
    }
  }

  void SendEvent(EventDic& event_dic)
  {
    if (event_dic.event() == EventDic::Event::NONE) return;

    Mutex::AutoLock lock(mutex_);
    for (auto &a: event_cb_m_)
    {
      if (a.second == NULL) continue;
      a.second(event_dic);
    }
  }

private:
  std::map<void*, EventDic::Callback> event_cb_m_;
  Mutex mutex_;
};

}}
#endif /*_PBP_UTIL_EVENTCB_H_*/
