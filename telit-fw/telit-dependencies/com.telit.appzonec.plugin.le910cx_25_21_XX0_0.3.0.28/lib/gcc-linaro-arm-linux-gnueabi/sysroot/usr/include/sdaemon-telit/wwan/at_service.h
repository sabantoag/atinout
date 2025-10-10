#ifndef _PBP_WWAN_ATSERVICE_H_
#define _PBP_WWAN_ATSERVICE_H_

#include <set>
#include "util/thread.h"
#include "util/mutex.h"
#include "util/condition.h"
#include "util/event_dic.h"
#include "util/queue.h"
#include "util/timer_manager.h"
#include "at_manager.h"

using pbp::util::Thread;
using pbp::util::Mutex;
using pbp::util::Condition;
using pbp::util::EventDic;
using pbp::util::Queue;
using pbp::util::TimerManager;
using namespace std::placeholders;

namespace pbp {

#ifdef CONFIG_SUPPORT_QCOM_QMI
namespace vendor{ namespace qcom { namespace qmi {
class AtsQmiClient;
}}}
using vendor::qcom::qmi::AtsQmiClient;
#endif

namespace wwan {

class AtService
{
public:
  
  enum class QueueMessageType
  {
    NONE,
    STOP, ///< To stop at service 
    AT_ACTION, ///< To invoke registered AT forwarding callback
    AT_REG, ///< To reigster AT forwarding command on modem side and store paired callback.
  };
  
  struct QueueMessage
  {
    QueueMessageType msg_type;
    AtManager::Command at_cmd; ///< Only when QueueMessageType type is AT_ACTION, this field is valid

    QueueMessage(QueueMessageType type)
    {
      this->msg_type = type;
    }
  };
  
  Queue<QueueMessage> queue_;
  static AtService* s_ins_; ///< SingleTon instance

private:

  struct CmdSetInfo
  {
    AtManager::CmdResponseCb cmd_cb; ///< When command is executed on modem side, then this callback will be called.
    AtManager::RegistrationCb reg_cb; ///< If registration succeed, then this callback will be fired.
    bool registered; ///< To indicate whether a command is registered.
    int num_tries; ///< To check how many times AtService has tried to register.

    CmdSetInfo()
    {
      cmd_cb = NULL;
      reg_cb = NULL;
      registered = false;
      num_tries = 0;
    }

    CmdSetInfo(AtManager::CmdResponseCb cmd_cb, AtManager::RegistrationCb reg_cb)
    {
      this->cmd_cb = cmd_cb;
      this->reg_cb = reg_cb;
      registered = false;
      num_tries = 0;
    }
  };

  static AtService* GetInstance();
  static AtService* DestroyInstance();
  AtService();
  ~AtService();


  int ReleaseInstance();

  /*!
   *  @brief Start At Forwarding service
   */
  Result Start();

  /*!
   *  @brief Stop At Forwarding service
   */
  Result Stop();

  /*!
   *  @brief Callback function to get ATS(Access Terminal Service) QMI indication
   */
  void EventCb(EventDic& event_dic);

  /*!
   *  @brief Main service loop to handle Queue events from \link queue_ \endlink
   *  @sa QueueMessage QueueMessageType
   */
  void ThreadLoop();


  Thread thread_;
  bool looping_;
  Mutex mutex_;
  AtManager::CmdResponse HandleAtCommand(AtManager::Command& cmd);
  Result RegisterCallback(string cmd, AtManager::CmdResponseCb cmd_cb, AtManager::RegistrationCb reg_cb = NULL);

#ifdef CONFIG_SUPPORT_ATFWD_ATCTRL  
  Result SendResponse(AtManager::Command& cmd, bool success, string msg);
  Result SendUrc(string noti);
#endif 

  Result ReleaseCommands();

  Result SendResponse(AtManager::Command& cmd, AtManager::CmdResponse& cmd_res);

  bool TimerHandler(int id, void *arg);

  static int ref_cnt;
  const int k_registration_interval_us = 2000000;
  const int k_max_registration_try_cnt = 5;
  const int k_max_registration_cmd_cnt = 20;
  Mutex service_mutex_;
  Mutex cb_map_mutex_;
  std::map<string, CmdSetInfo> cmd_set_m_; ///< To register and send registation callback and execution callback
  bool server_on_; ///< If registration succeed, then this flag will set to true, this flag is used to check modem side is prepared or not.
  bool confirmation_;
  std::set<string> error_cmd_s_;
  int timer_id_;
  TimerManager timer_manager_; ///< To use timer function
  struct timespec reg_try_time_; ///< we need to try to register command even if it failed on the first try in case modem side is not prepared.

#ifdef CONFIG_SUPPORT_ATFWD_ATCTRL  
#elif CONFIG_SUPPORT_QCOM_QMI  
  AtsQmiClient *ats_qmi_; 
#endif  

  friend class AtManager;
};


}}

#endif /*_PBP_WWAN_ATSERVICE_H_*/
