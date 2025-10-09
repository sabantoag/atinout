#ifndef _PBP_WWAN_HPSMANAGER_H_
#define _PBP_WWAN_HPSMANAGER_H_

#include "common/common_header.h"
#include "wwan/hps_service.h"
#include "wwan/at_manager.h"
#include "util/persistent_config.h"

using pbp::wwan::AtManager;
using pbp::util::PersistentConfig;
using pbp::Result;

namespace pbp {
namespace wwan {

class HpsManager
{  

public:
  HpsManager();
  ~HpsManager();

  bool StartService();
  bool StopService();
  bool SetSiCfg(bool enable, uint32_t duration);
  bool GetSiCfg(bool &enabled, uint32_t &duration_prev);

private:
  HpsService *hps_service_;
};


}};

#endif /*_PBP_WWAN_HPSMANAGER_H_*/
