#ifndef _PBP_WWAN_MOBILEAPMANAGER_H_
#define _PBP_WWAN_MOBILEAPMANAGER_H_

#ifdef CONFIG_SUPPORT_QCOM_QCMAP
namespace pbp { namespace vendor { namespace qcom { namespace qcmap {
class QcmapWrapper;
}}}}
#endif


#include "common/common_header.h"
#include "util/dhcp_server.h"
using pbp::util::DhcpServer;

#define DEFAULT_DATA_IFC_NAME "rmnet_data0"

namespace pbp {
namespace wwan {

class MobileapManager
{  

public:

  enum class TetheringMode
  {
    NONE,
    RNDIS,
    ECM,
    ETH,
  };

  enum class HostDeviceType
  {
    NONE,
    USB,
  };

  struct LanConfig
  {
    bool is_valid;
    string gw_ip;
    string netmask;
    DhcpServer::Setting dhcp_server_setting;

    LanConfig() {is_valid = false;}
  };

  struct VlanConfig
  {
    TetheringMode tethering_mode;
    int id;
    int mapped_pdn_index;

    VlanConfig()
    {
      tethering_mode = TetheringMode::NONE;
      id = 0;
      mapped_pdn_index = -1;
    }
  };

  struct VlanMapping
  {
    int id;
    int mapped_pdn_index;

    VlanMapping()
    {
      id = 0;
      mapped_pdn_index = -1;
    }
  };


  struct IpPassthroughConfig
  {
    HostDeviceType host_device_type;
    string host_device_info;
    bool activated;
  };

  MobileapManager();
  ~MobileapManager();

  LanConfig GetLanConfig();
  bool SetLanConfig(string gw_ip, string netmask, bool enable_dhcp, string dhcp_start_ip, string dhcp_end_ip, uint32_t dhcp_lease_time, bool dynamic = true);
  bool SetLanConfig(LanConfig& conf, bool dynamic = true);


  bool ActivateLan();
  bool SetVlanConfig(bool add, VlanConfig &config);
  bool GetVlanConfigs(std::vector<VlanConfig> &config_v);

  bool SetPdnToVlanMapping(bool add, VlanConfig &config);
  
  bool SetIpPassthrough(bool enable, IpPassthroughConfig &config);
  bool GetIpPassthrough(bool& enabled, IpPassthroughConfig &config);
  bool SetDhcpServerConfig(bool enable, string start_ip = "", string end_ip = "", int lease_time = 0);
  bool SetDhcpServerEnable(bool enable);
  bool SetDhcpServerStartIp(string ip);
  bool SetDhcpServerEndIp(string ip);
  bool SetDhcpServerIpRange(string start_ip, string end_ip);
  bool SetDhcpServerLeaseTime(int time);
  bool SetGatewayIp(string ip);

private:

  DhcpServer::Setting dhcp_server_setting_;

#ifdef CONFIG_SUPPORT_QCOM_QCMAP
  pbp::vendor::qcom::qcmap::QcmapWrapper* qcmap_wrapper_;
#endif  
};


}};

#endif /*_PBP_WWAN_MOBILEAPMANAGER_H_*/
