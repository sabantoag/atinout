#ifndef _UTIL_NETWOR_MONITOR_H_
#define _UTIL_NETWOR_MONITOR_H_

#include <functional>
#include <memory>

#include "common/common_header.h"
#include "util/fd_monitor.h"
#include "util/network_event.h"
#include "util/socket.h"
#include "util/event_dic.h"
#include "util/event_cb.h"

namespace pbp {
namespace util { 

class NetworkMonitor : public EventCb
{
public:

	static NetworkMonitor* GetInstance();

	string GetIpAddress();

private:
	static NetworkMonitor* s_ins_;
	std::unique_ptr<Socket> socket_;
	FdMonitor* fd_monitor_;

	NetworkMonitor();
	~NetworkMonitor();
	void FdCallback(int fd, FdType type);

	friend class NetworkManager;
};

}}

#endif /*_UTIL_NETWOR_MONITOR_H_*/
