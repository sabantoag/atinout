#ifndef _PBP_WWAN_DNS_CTRL_MANAGER_H_
#define _PBP_WWAN_DNS_CTRL_MANAGER_H_

#include "dns_ctrl_service.h"

namespace pbp {
namespace wwan {

class DnsCtrlManager
{
public:
  DnsCtrlManager();
  ~DnsCtrlManager();

  bool StartService();
  bool StopService();
  void SetEventCb(EventDic::Callback cb); 
  void UnsetEventCb(); 

private:
  static DnsCtrlService *s_dns_ctrl_service_;
  static int s_ref_cnt_;
};

}}

#endif /*_PBP_WWAN_DNS_CTRL_MANAGER_H_*/
