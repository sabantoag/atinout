#ifndef _PBP_WWAN_HPSSERVICE_H_
#define _PBP_WWAN_HPSSERVICE_H_

#include "common/common_header.h"
#include "util/queue.h"
#include "util/thread.h"
#include "util/event_dic.h"
#include "wwan/sms_manager.h"
#include "util/timer_manager.h"
#include "util/mutex.h"

extern "C" {
#include "vendor/skt/hps_client.h"
#include "vendor/qcom/qmi/wms.h"
}

#define HPS_SI_CFG_ENABLE_TAG "SIENABLE"
#define HPS_SI_CFG_DURATION_TAG "SIDURATION"
#define HPS_SI_CFG_ENABLE_DEFAULT 0
#define HPS_SI_CFG_DURATION_DEFAULT 10

using pbp::Result; //Bug 48123

using pbp::util::Thread;
using pbp::util::Queue;
using pbp::util::EventDic;
using pbp::wwan::SmsManager;
using pbp::util::TimerManager;
using pbp::util::Mutex;

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

class HpsManager;

class HpsService
{  

private:
  enum class HpsServiceType
  {
    NONE,
    NI,
    SI,
  };
  
  struct WapPushEventInfo
  {
    uint8_t buf[213];
    size_t buf_len;
    HpsServiceType service_type;

    WapPushEventInfo(HpsServiceType type)
    {
      this->service_type = type;
    }
  };
  
  HpsService();
  ~HpsService();

  static HpsService* s_ins_;
  static HpsService*  GetInstance();

  bool loop_;
  bool Start();
  bool Stop();
  void ThreadLoop();

  bool HpsTimerHandler(int id, void *arg);

  void EventCb(EventDic& event_dic);
  Queue<WapPushEventInfo> event_queue_;
  SmsManager sms_manager_;
  int timer_id_;  
  bool si_service_on_;
  uint32_t si_serivce_duration_;
  int64_t diff;
  TimerManager timer_manager_;
 
  void HpsGetBasicInfo (hps_basic_type& hps_basic);
  int32_t HpsGetCellInfo(hps_basic_type hps_basic, uint8_t* output);
  bool HpsHttpGet(hps_result_type parse_result);
  bool HpsHttpPost(hps_result_type parse_result);
  void HpsSiTimer();
  void ChangeSiCfg(bool enable, uint32_t duration);
  bool GetSiServiceOn();
  uint32_t GetSiServiceDuration();
  void HpsSiStart();
  void HpsSiStop();

  Thread thread_;
  Mutex mutex_hps;
  
  friend class HpsManager;
  
#ifdef CONFIG_SUPPORT_QMI_GMS //Bug 48123 
  pbp::vendor::qcom::qmi::GmsQmiClient *gms_qmi_;
#endif  
#ifdef CONFIG_SUPPORT_QCOM_QMI
  pbp::vendor::qcom::qmi::DmsQmiClient *dms_qmi_;
#endif

};


}};

#endif /*_PBP_WWAN_HPSSERVICE_H_*/
