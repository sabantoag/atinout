#ifndef _PBP_PSM_PSMMANAGER_H_
#define _PBP_PSM_PSMMANAGER_H_

extern "C" {
#include <psm_client.h>
}

#include <list>
#include "common/common_header.h"
#include "util/mutex.h"

namespace pbp {
namespace psm {

using util::Mutex;

class PsmManager 
{
public:
  static bool WakeLock(string module_id);
  static bool WakeUnlock(string module_id);
  static bool Register();

private:	
  static int s_client_id_;
  static Mutex s_mutex_;
  static std::list<string> s_module_id_l_;
  static void ClientCb(psm_status_msg_type *msg);
};

}}

#endif /*_PBP_PSM_PSMMANAGER_H_*/
