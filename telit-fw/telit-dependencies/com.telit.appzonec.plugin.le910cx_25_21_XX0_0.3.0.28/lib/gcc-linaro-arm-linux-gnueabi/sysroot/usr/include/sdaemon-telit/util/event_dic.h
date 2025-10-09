#ifndef _PBP_UTIL_EVENTDIC_H_
#define _PBP_UTIL_EVENTDIC_H_

#include <functional>
#include <map>
#include "common/common_header.h"

namespace pbp {
namespace util {

class EventDic
{
public:
  typedef std::function<void(EventDic &event_dic)> Callback;

  enum class Event : uint32_t
  {
    NONE,
    WIFI_P2P_DEVICE_FOUND,
    WIFI_P2P_DEVICE_LOST,
    WIFI_P2P_PROV_DISC_PBC_REQ,
    WIFI_P2P_GO_NEG_REQUEST,
    WIFI_P2P_GO_NEG_FAILURE,
    WIFI_P2P_GROUP_STARTED,
    WIFI_P2P_GROUP_REMOVED,
    WIFI_P2P_GROUP_FORMATION_FAILURE,
    WIFI_P2P_FAILED_TO_ADD_GROUP,
    WIFI_P2P_FIND_STOPPED,
    WIFI_SCAN_STARTED,
    WIFI_SCAN_RESULTS,
    WIFI_CONNECTED,
    WIFI_DISCONNECTED,
    WIFI_BSS_REMOVED,
    WIFI_AP_ENABLED,
    WIFI_AP_DISABLED,
    WIFI_AP_STA_CONNECTED,
    WIFI_AP_STA_DISCONNECTED,
    WIFI_BSS_ADDED,
    WIFI_TRY_TO_ASSOCIATE,
    WIFI_ASSOCIATED_WITH,
    WIFI_P2P_INVITATION_RESULT,
    WIFI_SSID_TEMP_DISABLED,
    WIFI_NETWORK_NOT_FOUND,
    WIFI_WPS_TIMEOUT, //Thu Sep  1 13:15:20 KST 2016 jhpark (P2P_CONNECTING state has been added)
    WIFI_WPS_PSK_KEY, // get wps passphrase

    NETWORK_NEW_LINK = 0x100, 
    NETWORK_DEL_LINK,
    NETWORK_GET_LINK,
    NETWORK_NEW_ADDR, 
    NETWORK_DEL_ADDR, 
    NETWORK_GET_ADDR,
    NETWORK_NEW_ROUTE, 
    NETWORK_DEL_ROUTE,
    NETWORK_GET_ROUTE,
    NETWORK_NEW_NEIGH, 
    NETWORK_DEL_NEIGH, 
    NETWORK_GET_NEIGH,
    NETWORK_NEW_RULE, 
    NETWORK_DEL_RULE,
    NETWORK_GET_RULE,
    NETWORK_NEW_QDISC, 
    NETWORK_DEL_QDISC, 
    NETWORK_GET_QDISC,
    NETWORK_NEW_TCLASS, 
    NETWORK_DEL_TCLASS,
    NETWORK_GET_TCLASS,
    NETWORK_NEW_TFILTER, 
    NETWORK_DEL_TFILTER,
    NETWORK_GET_TFILTER,

    WWAN_BRING_UP_SUCCESS = 0x200,
    WWAN_BRING_UP_FAILED,
    WWAN_TEAR_DOWN_SUCCESS,
    WWAN_TEAR_DOWN_FAILED,
    WWAN_INDICATION_CONNECTED,
    WWAN_INDICATION_DISCONNECTED,

    APP_CMD_CONNECT_TO_WIFI = 0x300,
    AT_GET_MSG_FROM_MODEM,
    WMS_FOR_HPS, //Bug 48123

    DNS_SERVER_INFO_RENEWED,

  };

  enum class Param : uint32_t
  {
    NONE,
    WIFI_IFNAME,
    WIFI_DEV_MAC,
    WIFI_P2P_DEV_MAC,
    WIFI_SSID,
    WIFI_BSSID,
    WIFI_DEV_NAME,
    WIFI_P2P_GROUP_MODE,

    NETWORK_L2_ADDRESS,
    NETWORK_L2_BRCAST_ADDRESS,
    NETWORK_IFNAME,
    NETWORK_OPER_STATE,
    NETWORK_IP_VERSION,

    WWAN_PROFILE_HANDLE,
  };

  EventDic() 
  {
    event_ = Event::NONE;
    extra_param_ = NULL;
  }
  EventDic(Event event)
  {
    event_ = event;
    extra_param_ = NULL;
  }

  Event event() const {return event_;}
  void SetEvent(Event event){event_ = event;}
  void AddParam(Param param, string value);
  string GetParam(Param param);
  void *GetExtraParam() { return extra_param_;}
  void SetExtraParam(void *extra_param) {extra_param_ = extra_param;}

private:
  Event event_;
  std::map<Param, string> param_m_;
  void *extra_param_;
};


}}

#endif /*_PBP_UTIL_EVENTDIC_H_*/
