/* Copyright (c) 2011-2014 The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 /*=============================================================================
Telit Wireless Revision History:

             Modification   Tracking
 Author      Date           Number      Description of Changes
----------  -----------    ----------   -------------------------------------
RazBe       09-Jul-2018	    Bug39777    Addin Loc QXDM log.

=============================================================================*/

#ifndef __PLATFORM_LIB_LOG_UTIL_H__
#define __PLATFORM_LIB_LOG_UTIL_H__

#include "platform_lib_macros.h"

#ifndef USE_GLIB
#include <log_util.h>
#else

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#ifndef LOG_TAG
#define LOG_TAG "GPS_UTILS"
#endif /* LOG_TAG */

#ifdef __cplusplus
extern "C"
{
#endif
/*=============================================================================
 *
 *                         LOC LOGGER TYPE DECLARATION
 *
 *============================================================================*/
/* LOC LOGGER */
typedef struct loc_logger_s
{
  unsigned long  DEBUG_LEVEL;
  unsigned long  TIMESTAMP;
} loc_logger_s_type;

/*=============================================================================
 *
 *                               EXTERNAL DATA
 *
 *============================================================================*/
extern loc_logger_s_type loc_logger;

// Logging Improvements
extern const char *loc_logger_boolStr[];

extern const char *boolStr[];
extern const char VOID_RET[];
extern const char FROM_AFW[];
extern const char TO_MODEM[];
extern const char FROM_MODEM[];
extern const char TO_AFW[];
extern const char EXIT_TAG[];
extern const char ENTRY_TAG[];
extern const char EXIT_ERROR_TAG[];

/*=============================================================================
 *
 *                        MODULE EXPORTED FUNCTIONS
 *
 *============================================================================*/
void loc_logger_init(unsigned long debug, unsigned long timestamp);
char* get_timestamp(char* str, unsigned long buf_size);

#ifdef MCM_TELIT
#include <../../../../../../../diag/include/log.h>
#include <../../../../../../../diag/include/msgcfg.h>
#include <stdarg.h>
// common for QNX and Griffon

#define RIL_MAX_LOG_MSG_SIZE 512

#define UTIL_LOG_MSG RIL_LOG_DEBUG
#define UTIL_LOG_INFO RIL_LOG_INFO
#define UTIL_LOG_WARN RIL_LOG_WARN
#define UTIL_LOG_ERROR RIL_LOG_ERROR

static void ril_format_log_msg_mcmloc ( char *buf_ptr,
                         int buf_size,
                         char *fmt,
                         ...)
{
    va_list ap;
    va_start( ap, fmt );

    if ( NULL != buf_ptr && buf_size > 0 )
    {
        vsnprintf( buf_ptr, buf_size, fmt, ap );
    }

    va_end( ap );
}

#define RIL_LOG_MSG( lvl, fmt, ... )                                           \
{                                                                          \
	char log_buf[ RIL_MAX_LOG_MSG_SIZE ];                                  \
	ril_format_log_msg_mcmloc( log_buf,RIL_MAX_LOG_MSG_SIZE,__VA_ARGS__ );  \
	MSG_SPRINTF_1( MSG_SSID_ANDROID_QCRIL, lvl, "LOC %s", log_buf );           \
}

#define RIL_LOG_WARN( ... )   RIL_LOG_MSG( MSG_LEGACY_HIGH, __VA_ARGS__ )

/* Log error level message */
#define RIL_LOG_ERROR( ... )   RIL_LOG_MSG( MSG_LEGACY_ERROR, __VA_ARGS__ )

/* Log fatal level message */
#define RIL_LOG_FATAL( ... )   RIL_LOG_MSG( MSG_LEGACY_FATAL, __VA_ARGS__ )

/* Log debug level message */
#define RIL_LOG_DEBUG( ... )   RIL_LOG_MSG( MSG_LEGACY_HIGH, __VA_ARGS__ ) 

/* Log info level message */
#define RIL_LOG_INFO( ...  )   RIL_LOG_MSG( MSG_LEGACY_MED, __VA_ARGS__ )

//error logs
#define LOC_LOGE(...) UTIL_LOG_ERROR(LOG_ERR, __VA_ARGS__)
//warning logs
#define LOC_LOGW(...) UTIL_LOG_WARN(LOG_INFO, __VA_ARGS__)
// debug logs
#define LOC_LOGD(...) UTIL_LOG_MSG(LOG_NOTICE, __VA_ARGS__)
//info logs
#define LOC_LOGI(...) UTIL_LOG_INFO(LOG_INFO, __VA_ARGS__)
//verbose logs
#define LOC_LOGV(...) UTIL_LOG_MSG(LOG_NOTICE, __VA_ARGS__)    
#else // MCM_TELIT

#ifndef DEBUG_DMN_LOC_API

/* LOGGING MACROS */
/*loc_logger.DEBUG_LEVEL is initialized to 0xff in loc_cfg.cpp
  if that value remains unchanged, it means gps.conf did not
  provide a value and we default to the initial value to use
  Android's logging levels*/
#define IF_LOC_LOGE if((loc_logger.DEBUG_LEVEL >= 1) && (loc_logger.DEBUG_LEVEL <= 5))
#define IF_LOC_LOGW if((loc_logger.DEBUG_LEVEL >= 2) && (loc_logger.DEBUG_LEVEL <= 5))
#define IF_LOC_LOGI if((loc_logger.DEBUG_LEVEL >= 3) && (loc_logger.DEBUG_LEVEL <= 5))
#define IF_LOC_LOGD if((loc_logger.DEBUG_LEVEL >= 4) && (loc_logger.DEBUG_LEVEL <= 5))
#define IF_LOC_LOGV if((loc_logger.DEBUG_LEVEL >= 5) && (loc_logger.DEBUG_LEVEL <= 5))

#define LOC_LOGE(...) IF_LOC_LOGE { ALOGE(__VA_ARGS__); }
#define LOC_LOGW(...) IF_LOC_LOGW { ALOGW(__VA_ARGS__); }
#define LOC_LOGI(...) IF_LOC_LOGI { ALOGI(__VA_ARGS__); }
#define LOC_LOGD(...) IF_LOC_LOGD { ALOGD(__VA_ARGS__); }
#define LOC_LOGV(...) IF_LOC_LOGV { ALOGV(__VA_ARGS__); }

#else /* DEBUG_DMN_LOC_API */

#define LOC_LOGE(...) ALOGE(__VA_ARGS__)
#define LOC_LOGW(...) ALOGW(__VA_ARGS__)
#define LOC_LOGI(...) ALOGI(__VA_ARGS__)
#define LOC_LOGD(...) ALOGD(__VA_ARGS__)
#define LOC_LOGV(...) ALOGV(__VA_ARGS__)

#endif /* DEBUG_DMN_LOC_API */
#endif // MCM_TELIT

/*=============================================================================
 *
 *                          LOGGING IMPROVEMENT MACROS
 *
 *============================================================================*/
#define LOG_(LOC_LOG, ID, WHAT, SPEC, VAL)                                    \
    do {                                                                      \
        if (loc_logger.TIMESTAMP) {                                           \
            char ts[32];                                                      \
            LOC_LOG("[%s] %s %s line %d " #SPEC,                              \
                     get_timestamp(ts, sizeof(ts)), ID, WHAT, __LINE__, VAL); \
        } else {                                                              \
            LOC_LOG("%s %s line %d " #SPEC,                                   \
                     ID, WHAT, __LINE__, VAL);                                \
        }                                                                     \
    } while(0)

#define LOC_LOG_HEAD(fmt) "%s:%d] " fmt
#define LOC_LOGv(fmt,...) LOC_LOGV(LOC_LOG_HEAD(fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define LOC_LOGw(fmt,...) LOC_LOGW(LOC_LOG_HEAD(fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define LOC_LOGd(fmt,...) LOC_LOGD(LOC_LOG_HEAD(fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define LOC_LOGe(fmt,...) LOC_LOGE(LOC_LOG_HEAD(fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)

#define LOG_I(ID, WHAT, SPEC, VAL) LOG_(LOC_LOGI, ID, WHAT, SPEC, VAL)
#define LOG_V(ID, WHAT, SPEC, VAL) LOG_(LOC_LOGV, ID, WHAT, SPEC, VAL)
#define LOG_E(ID, WHAT, SPEC, VAL) LOG_(LOC_LOGE, ID, WHAT, SPEC, VAL)

#define ENTRY_LOG() LOG_V(ENTRY_TAG, __FUNCTION__, %s, "")
#define EXIT_LOG(SPEC, VAL) LOG_V(EXIT_TAG, __FUNCTION__, SPEC, VAL)
#define EXIT_LOG_WITH_ERROR(SPEC, VAL)                       \
    if (VAL != 0) {                                          \
        LOG_E(EXIT_ERROR_TAG, __FUNCTION__, SPEC, VAL);          \
    } else {                                                 \
        LOG_V(EXIT_TAG, __FUNCTION__, SPEC, VAL);                \
    }


// Used for logging callflow from Android Framework
#define ENTRY_LOG_CALLFLOW() LOG_I(FROM_AFW, __FUNCTION__, %s, "")
// Used for logging callflow to Modem
#define EXIT_LOG_CALLFLOW(SPEC, VAL) LOG_I(TO_MODEM, __FUNCTION__, SPEC, VAL)
// Used for logging callflow from Modem(TO_MODEM, __FUNCTION__, %s, "")
#define MODEM_LOG_CALLFLOW(SPEC, VAL) LOG_I(FROM_MODEM, __FUNCTION__, SPEC, VAL)
// Used for logging callflow to Android Framework
#define CALLBACK_LOG_CALLFLOW(CB, SPEC, VAL) LOG_I(TO_AFW, CB, SPEC, VAL)

#ifdef __cplusplus
}
#endif

#endif /* USE_GLIB */

#endif /* __PLATFORM_LIB_LOG_UTIL_H__ */
