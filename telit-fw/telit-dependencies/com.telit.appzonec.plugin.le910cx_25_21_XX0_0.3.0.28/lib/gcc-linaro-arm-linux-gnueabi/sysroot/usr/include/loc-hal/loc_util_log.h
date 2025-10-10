/* Copyright (c) 2011-2012, 2014, The Linux Foundation. All rights reserved.
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
 *     * Neither the name of The Linux Foundation, nor the names of its
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
/*_____________________________________________________________________________

  Telit Wireless Revision History:


             Modification   Tracking


Author	       Date          Number     Description of Changes

----------  -----------    ----------   -------------------------------------
RazBe       05-Jun-2018     Bug39270    Fix QXDM log printing. 
NizarKa     08-Mar-2017     Bug33501    LE920A4 - mcmlocserver debug prints not filtered
EranSh      19-Dec-2017     Bug32748    Add Telit define.
NizarKa     02-Jan-2017     Bug32662    recurrent GNSS traces are flooding the linux standard output
________________________________________________________________________________*/

#ifndef LOC_UTIL_LOG_H
#define LOC_UTIL_LOG_H

#include <platform_lib_log_util.h>

#if defined(_ANDROID_)
#include "loc_api_v02_log.h"

#else // no _ANDROID_

#ifdef TELIT_DEF
#include <diag/log.h>
#include <diag/msgcfg.h>
#include <stdarg.h>
// common for QNX and Griffon

#define RIL_MAX_LOG_MSG_SIZE 512

#define UTIL_LOG_MSG RIL_LOG_DEBUG
#define UTIL_LOG_INFO RIL_LOG_INFO
#define UTIL_LOG_WARN RIL_LOG_WARN
#define UTIL_LOG_ERROR RIL_LOG_ERROR

extern void ril_format_log_msg_mcmloc ( char *buf_ptr,
                         int buf_size,
                         char *fmt,
                         ...);

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
#else // TELIT_DEF
#if defined(__LOC_API_V02_LOG_SILENT__)
#define MSG_LOG
#define LOC_LOGE(...) MSG_LOG(__VA_ARGS__);
#define LOC_LOGW(...) MSG_LOG(__VA_ARGS__);
#define LOC_LOGD(...) MSG_LOG(__VA_ARGS__);
#define LOC_LOGI(...) MSG_LOG(__VA_ARGS__);
#define LOC_LOGV(...) MSG_LOG(__VA_ARGS__);
#elif !defined(USE_GLIB)

// common for QNX and Griffon

//error logs
#define LOC_LOGE(...) printf(__VA_ARGS__)
//warning logs
#define LOC_LOGW(...) printf(__VA_ARGS__)
// debug logs
#define LOC_LOGD(...) printf(__VA_ARGS__)
//info logs
#define LOC_LOGI(...) printf(__VA_ARGS__)
//verbose logs
#define LOC_LOGV(...) printf(__VA_ARGS__)
#endif //__LOC_API_V02_LOG_SILENT__
#endif //TELIT_DEF
#define MODEM_LOG_CALLFLOW(SPEC, VAL)
#define EXIT_LOG_CALLFLOW(SPEC, VAL)

#define loc_get_v02_event_name(X) #X
#define loc_get_v02_client_status_name(X) #X

#define loc_get_v02_qmi_status_name(X)  #X

//specific to OFF TARGET
#ifdef LOC_UTIL_TARGET_OFF_TARGET

# include <stdio.h>
# include <asm/errno.h>
# include <sys/time.h>

// get around strl*: not found in glibc
// TBD:look for presence of eglibc other libraries
// with strlcpy supported.
#define strlcpy(X,Y,Z) strcpy(X,Y)
#define strlcat(X,Y,Z) strcat(X,Y)

#endif //LOC_UTIL_TARGET_OFF_TARGET

#endif //_ANDROID_

#endif //LOC_UTIL_LOG_H
