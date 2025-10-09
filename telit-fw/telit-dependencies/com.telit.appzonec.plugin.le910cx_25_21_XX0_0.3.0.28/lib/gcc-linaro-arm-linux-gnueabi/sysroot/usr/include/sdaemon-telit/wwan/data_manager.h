#ifndef _PBP_WWAN_DATA_DATAMANAGER_H_
#define _PBP_WWAN_DATA_DATAMANAGER_H_

#include <memory>
#include <list>
#include <vector>
#include "common/common_header.h"
#include "util/mutex.h"
#include "util/ip_family.h"
#include "wwan/tech.h"
#include "util/event_dic.h"
#include "util/queue.h"

#define DEFAULT_DATA_IFC_NAME "rmnet_data0"

using pbp::Result;
using pbp::util::EventDic;
using pbp::util::IPFamily;
using pbp::util::Mutex;
using pbp::util::Queue;
using pbp::wwan::Tech;

#ifdef CONFIG_SUPPORT_QCOM_QMI
namespace pbp { namespace vendor { namespace qcom { namespace qmi {
class WdsQmiClient;
class DfsQmiClient;
class DpmQmiClient;
}}}}
#endif

#ifdef CONFIG_SUPPORT_QCOM_QCMAP
namespace pbp { namespace vendor { namespace qcom { namespace qcmap {
class QcmapWrapper;
}}}}
#endif


namespace pbp {
namespace wwan {

class DataManager
{  
public:
  enum class ProfileType
  {
    NONE,
    _3GPP,
    _3GPP2,
    EPC,
    LAST,
  };

  enum class PdpType //Packet Data Protocol
  {
    NONE,
    IPV4,
    IPV6,
    IPV4V6,
    PPP,
    NONE_IP,
  };

  enum class ConnectStatus
  {
    NONE,
    CONNECTING,
    CONNECTED,
    DISCONNECTING,
    DISCONNECTED,
    LAST,
  };

  struct NetworkConfig
  {
    IPFamily ip_family;
    string ip;
    string dns_primary;
    string dns_secondary;
  };

  struct WwanPolicy
  {
    int v4_cid;
    int v6_cid;
    Tech tech;
    IPFamily ip_family;
    int profile_handle;
  };


  struct WwanStatus
  {
    ConnectStatus v4_connect_status;
    ConnectStatus v6_connect_status;
    WwanPolicy policy;
  };

  struct ProfileInfo
  {
    ProfileType profile_type;
    int profile_index;
    string profile_name;
  };

  struct ProfileSetting
  {
    ProfileInfo info;
    PdpType pdp_type; //if pdp_type is not None then apn_name must exist
    string apn_name;
    int apn_class; //TODO : check what is this?  -1 means not valid
    int apn_disabled; 
    string user_name;
    string password;
  };

  DataManager();
  ~DataManager();

  void SetEventCb(EventDic::Callback cb); 
  void UnsetEventCb(); 

  bool SetPolicy(uint32_t index, Tech tech, IPFamily ip_family, int profile_1, int profile_2 = -1);
  Result Connect(uint32_t index, IPFamily ip_family, bool sync = false);
  Result ConnectWithCid(int cid, IPFamily ip_family, bool sync = false);
  Result Disconnect(uint32_t index, IPFamily ip_family, bool sync = false);
  bool SetRoaming(uint32_t index, bool enable);
  bool GetRoaming(uint32_t index, bool &enabled);
  bool SetAutoConnect(uint32_t index, bool enable);
  bool GetAutoConnect(uint32_t index, bool &enabled);
  bool GetConnectStatus(uint32_t index, ConnectStatus& ipv4, ConnectStatus& ipv6);
  bool SetIpAddress(string ip);
  bool GetIpAddress(string& out_ip);
  bool SetSubnetMask(string netmask);
  bool GetSubnetMask(string& out_subnet_mask);
  bool SetIpv4Enabled(uint32_t index, bool enable, IPFamily ip_family);
  bool GetIpvEnabled(uint32_t index, bool& ipv4_enabled, bool& ipv6_enabled);
  Result GetProfileList(std::list<ProfileInfo>& info_l);
  Result CreateProfile(ProfileType profile_type, int profile_index);
  Result GetProfileSetting(ProfileType profile_type, int profile_index, ProfileSetting& setting);
  Result ModifyProfileSetting(ProfileSetting& setting);

  Result GetNetworkConfig(uint32_t index, IPFamily ip_family, NetworkConfig& config);
  Result GetNetworkConfigWithCid(int cid, IPFamily ip_family, NetworkConfig& config);
  bool GetIfaceNameWithCid(int cid, string &iface_name);
  bool GetWwanStatus(uint32_t index, WwanStatus& wwan_status);


  bool CreatePdn(Tech tech, IPFamily ip_family, uint8_t v4_profile, uint8_t v6_profile);
  bool DeletePdn(uint8_t index);
  bool GetWwanStatuses(std::vector<DataManager::WwanStatus>& wwan_status_v);
  bool GetWwanPolicies(std::vector<DataManager::WwanPolicy>& wwan_policy_v);
  bool GetWwanStatusWithCid(int cid, ConnectStatus &v4_status, ConnectStatus &v6_status);

private:
  int internal_ins_no;
  void EventCb(EventDic &event_dic);
  Result WaitEvent(uint32_t index, IPFamily ip_family, bool connect);

#ifdef CONFIG_SUPPORT_QCOM_QCMAP
  pbp::vendor::qcom::qcmap::QcmapWrapper *qcmap_wrapper_;
#endif

#ifdef CONFIG_SUPPORT_QCOM_QMI
  pbp::vendor::qcom::qmi::WdsQmiClient* wds_qmi_;
  pbp::vendor::qcom::qmi::DfsQmiClient* dfs_qmi_;
  pbp::vendor::qcom::qmi::DpmQmiClient* dpm_qmi_;
#endif

  Queue<EventDic> event_queue_;

  static int s_ins_cnt_;

};


}};

#endif /*_PBP_WWAN_DATA_DATAMANAGER_H_*/
