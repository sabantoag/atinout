#ifndef _PBP_WWAN_DNS_CTRL_SERVICE_H_
#define _PBP_WWAN_DNS_CTRL_SERVICE_H_

#include <memory>
#include "util/fd_monitor.h"
#include "util/network_manager.h"
#include "util/event_cb.h"
#include "util/event_dic.h"
#include "util/mutex.h"
#include "util/condition.h"



namespace pbp {
namespace wwan {
class DataManager;

using util::FdMonitor;
using util::FdType;
using util::EventDic;
using util::Mutex;
using util::Condition;
using util::EventCb;


class DnsCtrlService : public EventCb
{
private:
  enum class DnsSettingType
  {
    NONE,
    RESOLV_CONF_CHANGE,
    USER_DEFINED_CONF_CHANGE,
    NETWORK_INTERFACE_BRING_UP,
    LAST
  };

  DnsCtrlService();
  ~DnsCtrlService();

  int AddFileWatcher(int fd, const char* path, bool always_exists);
  bool Start();
  bool Stop();

  bool SetResolvConf();
  bool SetDnsmasqResolvConf(bool from_bringup);
  bool IsResolvConfValid(char *buf);
  bool IsDnsmasqAlive();
  bool StartDnsmasq();
  bool ChangeDnsSetting(DnsSettingType setting_type);
  void EventCb(EventDic& event_dic);
  void FdCb(int fd, FdType fd_type);

  FdMonitor* fd_monitor_;
  pbp::util::NetworkManager network_manager_;
  Mutex mutex_;
  Condition cond_;

  int notify_fd_;
  int notify_resolv_conf_wd_;
  int notify_user_defined_wd_;
  std::unique_ptr<DataManager> data_manager_;

  friend class DnsCtrlManager;
};

}}

#endif /*_PBP_WWAN_DNS_CTRL_SERVICE_H_*/
