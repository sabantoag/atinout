/*!
 * @file at_manager.h
 * @date 2019/10/30
 * @author ilhyeokpa
 * @brief Access terminal managerment header for API user
 */


#ifndef _PBP_WWAN_ATMANAGER_H_
#define _PBP_WWAN_ATMANAGER_H_


#include <functional>
#include <list>
#include <vector>
#include "common/common_header.h"

#ifdef CONFIG_SUPPORT_QCOM_QMI
namespace pbp { namespace vendor { namespace qcom { namespace qmi {
class AtsQmiClient;
class M2mQmiClient;
}}}}
#endif

namespace pbp {
namespace wwan {

class AtService;

/*!
  @class AtManager
  @brief Access terminal management class for API users
  @note All functional implementaion resides on at_service.cpp
  @sa at_service.cpp
  @sa AtService
 */
class AtManager
{  

public:
  enum class OpCode
  {
    NONE,
    EXE, ///< AT+CMD, same as (NA)
    GET, ///< AT+CMD? same as (NA | QU)
    SET, ///< AT+CMD= same as (NA | EQ | AR)
    HOW, ///< AT+CMD=? same as (NA | EQ | QU)
  };

  /*please refet to datamodem/interface/atcop/inc/dsat_v.h for more detail*/
  enum class CmeeErrorCode
  {
    NONE = -1,
    PHONE_FAILURE = 0,
    NO_CONNECTION_TO_PHONE = 1,
    PHONE_ADAPTER_LINK_RESERVED = 2,
    OPERATION_NOT_ALLOWED = 3,
    OPERATION_NOT_SUPPORTED = 4,
    INVALID_INDEX = 21,
    NO_NETWORK_SERVICE = 30,
    CALL_INDEX_ERROR      = 320,
    CALL_STATE_ERROR      = 321,
   
  };

  /*!
   *  @brief AT command info from modem side
   *  @todo add cmee field to send error reasone 
   */
  struct Command
  {
    uint32_t handle;
    string cmd_name;
    std::vector<string> arg_v;
    OpCode op_code;
    int s3; ///< Specifies the ASCII value of the carriage return (CR) character. The carriage return terminates command lines and result codes.
    int s4; ///< Specifies the ASCII value for the line feed (LF) character. The line feed character follows a carriage return at the end of long-form result codes. Short-form result codes are sent without line feeds.
    int v;
    int q;
    int cmee; ///

    Command()
    {
      this->op_code = OpCode::NONE;
      cmee = -1;
    }

    Command(string cmd_name, OpCode op_code)
    {
      this->cmd_name = cmd_name;
      this->op_code = op_code;
      this->cmee = -1;
    }
  };

  typedef std::function<void(void *arg)> CmdResponsePostCb;

  /*!
   *  @brief To send AT command response.
   */
  struct CmdResponse
  {
    bool success; ///< "OK" result in case of true, "ERROR" result in case of false
    string msg; 
    CmeeErrorCode cmee_error_code;
    CmdResponsePostCb post_cb; ///< Set Postpone callback. This is used When you need to do something after sending response such as reboot.
    void *post_cb_arg;

    /*!
     *  @note default success value is false
     */
    CmdResponse()
    {
      this->success = false;
      post_cb = NULL;
      post_cb_arg = NULL;
      cmee_error_code = CmeeErrorCode::NONE;
    }

    CmdResponse(bool success, string msg, CmdResponsePostCb cb = NULL)
    {
      this->success = success;
      this->msg = msg;
      post_cb = cb;
      post_cb_arg = NULL;
      cmee_error_code = CmeeErrorCode::NONE;
    }

    CmdResponse(bool success)
    {
      this->success = success;
      post_cb = NULL;
      post_cb_arg = NULL;
      cmee_error_code = CmeeErrorCode::NONE;
    }
  };

  typedef std::function<CmdResponse(Command&)> CmdResponseCb;
  typedef std::function<void(string, bool)> RegistrationCb;

  /*!
   *  @details Instance of AtService will be loaded on constructor
   */
  AtManager();
  ~AtManager();

  /*!
   *  @brief Set callback for each AT forward command
   *  @details Actual operation resides on AtSerivce::RegisterCallback
   *  @sa AtService::RegisterCallback
   */
  Result RegisterCallback(string cmd, CmdResponseCb cmd_cb, RegistrationCb reg_cb);

  /*!
   *  @brief Send notification to AT 
   *  @details This is same as URC term, msg will be displayed on AT side directly.
   */
  Result SendNotification(string msg);

  Result NotifyRegistrationDone();

  /*!
   *  @brief Start AT forwarding service
   *  @sa AtService::Start
   */
  Result StartService();

  /*!
   *  @brief Stop AT forwarding service
   *  @sa AtService::Stop
   */
  Result StopService();

  Result ReleaseCommands();

  static string GetCmeeErrorString(CmeeErrorCode cmee_error_code);

private:
  AtService *at_service_;

#ifdef CONFIG_SUPPORT_QCOM_QMI
  pbp::vendor::qcom::qmi::AtsQmiClient *ats_qmi_;
  pbp::vendor::qcom::qmi::M2mQmiClient *m2m_qmi_;
#endif 

};


}};

#endif /*_PBP_WWAN_ATMANAGER_H_*/
