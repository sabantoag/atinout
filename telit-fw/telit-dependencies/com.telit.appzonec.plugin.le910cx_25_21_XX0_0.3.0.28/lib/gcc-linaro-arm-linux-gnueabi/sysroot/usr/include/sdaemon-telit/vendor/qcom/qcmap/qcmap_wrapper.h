#ifndef _PBP_VENDOR_QCOM_QCMAP_QCMAPWRAPPER_H_
#define _PBP_VENDOR_QCOM_QCMAP_QCMAPWRAPPER_H_

extern "C" {
#include "qmi_client.h"
}

#include <list>
#include <vector>
#include <map>
#include "common/common_header.h"
#include "wwan/tech.h"
#include "wwan/data_manager.h"
#include "wwan/mobileap_manager.h"
#include "util/mutex.h"
#include "util/ip_family.h"
#include "util/event_dic.h"
#include "util/dhcp_server.h"
#include "util/event_cb.h"
#include "util/queue.h"
#include "util/misc.h"
#include "util/condition.h"
#include "QCMAP_Client.h"

using pbp::util::Queue;
using pbp::util::Condition;
using pbp::util::EventDic;
using pbp::util::IPFamily;
using pbp::util::Mutex;
using pbp::util::DhcpServer;
using pbp::util::Misc;
using pbp::util::EventCb;
using pbp::wwan::Tech;
using pbp::wwan::DataManager;
using pbp::wwan::MobileapManager;


namespace pbp {
namespace vendor {
namespace qcom {
namespace qcmap {

class QcmapWrapper : public EventCb
{ 

public:
  struct WWANStatics
  {  
    uint64_t bytes_rx;
    /**<   Bytes received on WWAN. */    
    uint64_t bytes_tx;
    /**<   Bytes transmitted on WWAN. */    
    uint32_t pkts_rx;
    /**<   Packets received on WWAN. */    
    uint32_t pkts_tx;
    /**<   Packets transmitted on WWAN. */
  };

  static QcmapWrapper *s_ins_;
  static QcmapWrapper * GetInstance();

  static Tech ConvertToTech(qcmap_msgr_tech_pref_mask_v01 from);
  static IPFamily ConvertToIPFamily(qcmap_msgr_ip_family_enum_v01 from);

  bool GetWwanPolicies(std::vector<DataManager::WwanPolicy>& wwan_policy_v);
  bool SetWwanPolicy(uint32_t index, Tech tech, IPFamily ip_family, int profile_1, int profile_2 = -1);
  Result ConnectBackhaul(uint32_t index, IPFamily ip_family);
  Result DisconnectBackhaul(uint32_t index, IPFamily ip_family);
  bool SetRoaming(uint32_t index, bool enable);
  bool GetRoaming(uint32_t index, bool &enabled);
  bool SetAutoConnect(uint32_t index, bool enable);
  bool GetAutoConnect(uint32_t index, bool &enabled);
  bool GetWwanConnectStatus(uint32_t index, DataManager::ConnectStatus &ipv4, DataManager::ConnectStatus& ipv6);
  Result GetWWANStatistics(uint32_t index, IPFamily ip_family, WWANStatics& statics);
  Result ResetWWANStatistics(uint32_t index, IPFamily ip_family);
  bool SetVlanConfig(MobileapManager::VlanConfig &config);
  bool DeleteVlanConfig(MobileapManager::VlanConfig &config);
  bool GetVlanConfigs(std::vector<MobileapManager::VlanConfig> &config_v);

  bool SetLanConfig(string gw_ip, string netmask, bool enable_dhcp, string dhcp_start_ip, string dhcp_end_ip, uint32_t dhcp_lease_time);
  bool EnableIpv4(uint32_t index);
  bool DisableIpv4(uint32_t index);
  bool EnableIpv6(uint32_t index);
  bool DisableIpv6(uint32_t index);
  bool GetIpv4State(uint32_t index, bool& enabled);
  bool GetIpv6State(uint32_t index, bool& enabled);
  bool ActivateLan();
  bool SetIpPassthrough(bool enable, MobileapManager::IpPassthroughConfig& config);
  bool GetIpPassthrough(bool& enabled, MobileapManager::IpPassthroughConfig &config);

  bool CreateWwanPolicy(Tech tech, IPFamily ip_family, uint8_t v4_profile, uint8_t v6_profile);
  bool DeleteWwanPolicy(uint8_t index);

  Result GetNetworkConfig(uint32_t index, IPFamily ip_family, DataManager::NetworkConfig& config);
  bool GetWwanPolicy(uint32_t index, DataManager::WwanPolicy& policy);
  bool GetLanConfig(string& gw_ip, string &netmask, bool& dhcp_enabled, string& dhcp_start_ip, string& dhcp_end_ip, int& dhcp_lease_time);

  bool GetPdnToVlanMapping(std::vector<MobileapManager::VlanMapping>& vlan_mapping_v);
  bool SetPdnToVlanMapping(MobileapManager::VlanConfig &vlan_config);
  bool DeletePdnToVlanMapping(MobileapManager::VlanConfig& vlan_config);


private:

  QcmapWrapper();
  ~QcmapWrapper();

  bool IsQcmapAlive();
  bool ConnectToQcmapIfNeeded();
  bool ChangeWwanProfile(uint32_t index);
  bool GetProfileHandle(uint32_t index, profile_handle_type_v01& profile_handle);

	static void EvtCb(qmi_client_type h, uint32_t msg_id, void *buf, uint32_t len, void *data);
	friend void EvtCb(qmi_client_type h, uint32_t msg_id, void *buf, uint32_t len, void *data);

  inline qcmap_msgr_ip_family_enum_v01 ConvertFromIPFamily(IPFamily from);
  inline qcmap_msgr_tech_pref_mask_v01 ConvertFromTech(Tech from);
  inline DataManager::ConnectStatus ConvertToWwanStatus(qcmap_msgr_wwan_status_enum_v01 from);

  bool connected_;
  Mutex cmd_mutex_;
  Mutex wait_mutex_;
  Mutex dns_wait_mutex_;
  Condition dns_wait_cond_;
	QCMAP_Client* client_;
  uint32_t current_wwan_index_;
  Queue<EventDic> event_queue_;
};


}}}};

#endif /*_PBP_VENDOR_QCOM_QCMAP_QCMAPWRAPPER_H_*/
