#ifndef _PBP_COMMON_HEADER_H_
#define _PBP_COMMON_HEADER_H_

#ifdef ANDROID
#define LOG_TAG "PBP"
#include <log/log.h>
#endif

#include <string>
#include <memory>
#include "common/build_config.h"
#include "common/compiler_specific.h"

/*TODO : include different setting file*/
#include "common/common_settings.h"


using std::string;

namespace pbp {

enum class Result 
{
  SUCCESS,
  ERROR,
  MEMORY_SHORTAGE,
  TIME_OUT,
  FD_EOF,
  WPA_SUPPLICANT_NOT_OK,
  NOT_SUPPORTED_VERSION,
  WPA_SERVER_NOT_ACTIVATED,
  WPA_UNKNOWN_ERROR,
  NOT_SUPPORTED_FEATURE,
  MISMATCHED_CONDITION,
  INVALID_ARGUMENT,
  NOT_INITED,
  QMI_ERROR,
  QMI_ERROR_INVALID_ARGUMENT,
  QMI_ERROR_REQUESTED_NUM_UNSUPPORTED,
  NOT_IMPLEMENTED,
  NOT_ENOUGH_HEAP_MEMORY,
  RUN_ALREADY,
  DONT_NEED_TO,
  SOCKET_SENT_FAILED,
  NO_NETWORK_FOUND,
  NOT_ONWED_BY_MYSELF,
  MULTIPLE_DATA_CONNECTION,
};

enum class LogLevel
{
  NONE,
  CRITICAL,
  ERROR,
  WARN,
  INFO,
  DEBUG,
  TRACE,
};

}


#ifdef CONFIG_SUPPORT_SYSLOG
#include <syslog.h>

#define tmsg(fmt, ...)  
#define dmsg(fmt, args...) syslog(LOG_DEBUG, fmt, ##args)
#define imsg(fmt, args...) syslog(LOG_INFO, fmt, ##args)
#define wmsg(fmt, args...) syslog(LOG_WARNING, fmt, ##args)
#define emsg(fmt, args...) syslog(LOG_ERR, fmt, ##args)
#define kmsg(fmt, args...) \
do \
{ \
  char buf[4096] = {0,}; \
  snprintf(buf, sizeof(buf), "echo \"" fmt "\" > /dev/kmsg", ##args); \
  system(buf); \
}while(0);


#else /*CONFIG_SUPPORT_SYSLOG*/

#ifdef ANDROID
#define tmsg(fmt, ...)  
#define dmsg(fmt, ...) ALOGD(fmt, ##__VA_ARGS__)
#define imsg(fmt, ...) ALOGI(fmt, ##__VA_ARGS__)
#define wmsg(fmt, ...) ALOGW(fmt, ##__VA_ARGS__)
#define emsg(fmt, ...) ALOGE(fmt, ##__VA_ARGS__)

#else /*ANDROID*/

#define tmsg(fmt, ...)  \
do { \
  if (g_log_level >= pbp::LogLevel::TRACE) { \
      printf("[T] " fmt , ##args); \
  } \
} while(0)

#define dmsg(fmt, args...)  \
do { \
  if (g_log_level >= pbp::LogLevel::DEBUG) { \
      printf("[D] " fmt, ##args); \
  } \
} while(0); \


#define imsg(fmt, args...)  \
do { \
  if (g_log_level >= pbp::LogLevel::INFO) { \
      printf("[I] " fmt, ##args); \
  } \
} while(0)


#define wmsg(fmt, args...)  \
do { \
  if (g_log_level >= pbp::LogLevel::WARN) { \
      printf("[W] " fmt, ##args); \
  } \
} while(0)

#define emsg(fmt, args...)  \
do { \
  if (g_log_level >= pbp::LogLevel::ERROR) { \
      printf("[E] " fmt, ##args); \
  } \
} while(0)

#define kmsg(fmt, args...) 


#endif /*ANDROID*/
#endif /*CONFIG_SUPPORT_SYSLOG*/

#define dimsg(fmt, args...)  \
  dmsg("%s %d: " fmt , __PRETTY_FUNCTION__ , __LINE__ , ##args);

#define iimsg(fmt, args...)  \
  imsg("%s %d: " fmt , __PRETTY_FUNCTION__ , __LINE__ , ##args);
  
#define wimsg(fmt, args...)  \
  wmsg("%s %d: " fmt , __PRETTY_FUNCTION__ , __LINE__ , ##args);

#define eimsg(fmt, args...)  \
  emsg("%s %d: " fmt , __PRETTY_FUNCTION__ , __LINE__ , ##args);

#define kimsg(fmt, args...) \
  kmsg("%s %d: " fmt , __PRETTY_FUNCTION__ , __LINE__ , ##args);



template <typename T>
class sp : public std::shared_ptr<T>
{
public:
  sp() : std::shared_ptr<T>(){}
  sp(T *ap){this->reset(ap);}
  void operator=(T *ap){
    this->reset(ap);
  }
};

template <typename T>
class up : public std::unique_ptr<T>
{
public:
  up() : std::unique_ptr<T>(){}
  up(T *ap){this->reset(ap);}
  void operator=(T *ap){
    this->reset(ap);
  }
};

template<typename T, typename... Ts>
up<T> make_unique(Ts&&... params)
{
  return up<T>(new T(std::forward<Ts>(params)...));
}


#endif  /*_PBP_COMMON_HEADER_H_*/
