#ifndef _PBP_UTIL_DHCPSERVER_H_
#define _PBP_UTIL_DHCPSERVER_H_

#include <vector>
#include "common/common_header.h"

namespace pbp {
namespace util {

class DhcpServer
{
public:
	struct LeaseInfo 
	{
		int64_t expire_time; //epoch time
		string mac;
		string ip;
		string name;
		string id;
	};

  struct Setting
  {
    bool enabled;
    string start_ip;
    string end_ip;
    int lease_time;
  };

	DhcpServer(){}
	~DhcpServer(){}

	LeaseInfo GetLeaseInfo(string mac);
	std::vector<LeaseInfo> GetAllLeaseInfo();

private:	
};

}}

#endif /*_PBP_UTIL_DHCPSERVER_H_*/
