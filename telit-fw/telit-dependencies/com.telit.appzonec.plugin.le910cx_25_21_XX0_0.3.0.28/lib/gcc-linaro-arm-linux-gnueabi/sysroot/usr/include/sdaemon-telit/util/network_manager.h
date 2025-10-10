#ifndef _PBP_UTIL_NETWORK_MANAGER_H_
#define _PBP_UTIL_NETWORK_MANAGER_H_

#include "common/common_header.h"
#include "network_monitor.h"
#include "util/event_dic.h"
#include <netinet/ether.h>
#include <list>
#include <vector>
#include <functional>

namespace pbp {
namespace util {

class NetworkManager{

#ifdef ifr_flags
#define USER_IFR_FLAGS ifr_flags
#else
#define USER_IFR_FLAGS ifr_flagshigh
#endif


public:
  struct HostInfo
  {
    string name;
    string ip;
  };

   

  NetworkManager(); 
  ~NetworkManager(){}

  string GetMacAddress(string ifname);
  string GetGatewayAddress(string ifname);

  static string GetHostNameByIp(string ip);
  static bool SetIpAddress(string ifname, string ip_address);
  static bool GetIpAddress(string ifname, string &out_ip_address, bool ipv6 = false);
  static bool SetSubnetMask(string ifname, string subnet_mask);
  static bool GetSubnetMask(string ifname, string& out_netmask);
  static Result ResolveHostName(string host_name, std::vector<string> &ipv4_v, std::vector<string> &ipv6_v);
  static bool CheckIpv4DhcpRangeValidation(string gw_ip, string netmask, string dhcp_start, string dhcp_end);
  static bool IsValidAddress(string ip, bool is_ipv6 = false);
  static bool CheckIpv4SubnetMaskValidation(string netmask);
  static bool GetIpv4DhcpRange(string gw_ip, string netmask, string& out_dhcp_start, string& out_dhcp_end);
  static bool CheckIpv4MacValidation(string mac);

  bool IsArpSupportedDevice(string ifname);

  /**
    @brief find out given interface is wireless or not
    @bug if /sys/class/net is not mounted , always returns false  , if /sys/class/net/$ifname/wireless is not created by system , always returns false
    @return whether or not interface is wireless device
  */
  bool IsWirelessDevice(string ifname);
  bool IsLoopBackDevice(string ifname);

  /**
    @brief find out given interface is ethernet device 
    @bug standard of determining is that the device is not loopback and support arp and not wireless , but I'm not sure it's enough to find out ethernet device
  */
  bool IsEthernetDevice(string ifname); 
  static bool IsUpState(string ifname);

  static std::vector<string> GetIfNames();

  void SetEventCb(EventDic::Callback cb);
  void UnsetEventCb();
private:  

  static bool CallGeneral(string ifnamem , int ioctl_no, struct ifreq& ifr);
  static bool WakeUpIfNeeded(string ifname, struct ifreq& ifr);
  NetworkMonitor *network_monitor_;
};

}}


#endif /*_PBP_UTIL_NETWORK_MANAGER_H_*/
