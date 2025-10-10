#ifndef _UTIL_FD_MONITOR_H_
#define _UTIL_FD_MONITOR_H_

#include <map>
#include <list>
#include <vector>
#include "common/common_header.h"
#include "util/mutex.h"
#include "util/thread.h"

namespace pbp {
namespace util {

enum class FdType : uint8_t
{
	READ,
	WRITE,
	EXCEPT,
};


class FdMonitor 
{
public:

	typedef std::function<void(int, FdType)> CallbackFunc;
	typedef std::map<int, CallbackFunc> FdCbMap;

	FdMonitor();
	~FdMonitor();

	Result Add(int fd, FdType type , CallbackFunc func = NULL);
	Result Remove(int fd, FdType type);

  static FdMonitor* Create();
  static bool Delete(size_t index);
  static FdMonitor* Get(size_t index);
  static size_t Count();

private:
	const string kEventExit = "evt_exit";
	const string kEventModified = "evt_modi";
  static const size_t k_max_monitor_count = 5;
  static std::vector<FdMonitor *> s_monitor_v_;
  static Mutex s_monitor_vector_mutex_;

	Mutex mutex_;
	Thread thread_;
	int event_fd_;
	bool looping_;

	FdCbMap read_m_;
	FdCbMap write_m_;
	FdCbMap except_m_;

	void ThreadLoop();

};

}}

#endif /*_UTIL_FD_MONITOR_H_*/
