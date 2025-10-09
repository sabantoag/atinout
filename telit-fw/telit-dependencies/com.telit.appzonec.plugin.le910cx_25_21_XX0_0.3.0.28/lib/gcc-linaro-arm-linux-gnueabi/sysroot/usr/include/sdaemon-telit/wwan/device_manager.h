#ifndef _PBP_WWAN_DEVICE_DEVICEMANAGER_H_
#define _PBP_WWAN_DEVICE_DEVICEMANAGER_H_

#include "common/common_header.h"

using pbp::Result;

#ifdef CONFIG_SUPPORT_QCOM_QMI
namespace pbp { namespace vendor { namespace qcom { namespace qmi {
class DmsQmiClient;

#ifdef CONFIG_SUPPORT_QMI_GMS
class GmsQmiClient;
#endif

}}}}
#endif


namespace pbp {
namespace wwan {

class DeviceManager
{  

public:
  DeviceManager();
  ~DeviceManager();

  Result GetModelId(string &out);
  Result SetPinLock(int id, bool lock, string value);
  Result GetPinStatus();
  Result ChangePinLockPwd(int id, string old_pin, string new_pin);
  Result GetTmcfgPkgVer(string &out);

private:

#ifdef CONFIG_SUPPORT_QCOM_QMI
  pbp::vendor::qcom::qmi::DmsQmiClient *dms_qmi_;
#ifdef CONFIG_SUPPORT_QMI_GMS
  pbp::vendor::qcom::qmi::GmsQmiClient *gms_qmi_;  
#endif  
#endif
};


}};

#endif /*_PBP_WWAN_DEVICE_DEVICEMANAGER_H_*/
