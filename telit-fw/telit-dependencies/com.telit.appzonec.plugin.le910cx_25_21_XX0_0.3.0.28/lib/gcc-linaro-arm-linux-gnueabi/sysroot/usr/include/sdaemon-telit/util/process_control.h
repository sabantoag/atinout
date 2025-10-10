#ifndef _PBP_UTIL_PROCESSCONTROL_H_
#define _PBP_UTIL_PROCESSCONTROL_H_

#include <sys/types.h>
#include <signal.h>
#include <list>

#include "common/common_header.h"

namespace pbp {
namespace util {

class ProcessControl
{
private:

public:
	static pid_t GetPidByProcessName(string process_name, int skip_pid = 200);
};

}}

#endif /*_PBP_UTIL_PROCESSCONTROL_H_*/
