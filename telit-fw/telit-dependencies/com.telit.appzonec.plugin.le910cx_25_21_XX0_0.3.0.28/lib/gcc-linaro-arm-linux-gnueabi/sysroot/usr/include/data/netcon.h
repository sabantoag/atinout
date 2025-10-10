/*!
  @file
  netcon.h

  @brief
  This file declares the configuration parser common definitions.

*/
/*===========================================================================

  Copyright (c) 2011, 2013 Qualcomm Technologies, Inc. All Rights Reserved
  Qualcomm Technologies Proprietary and Confidential
===========================================================================*/

/*===========================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header:  $

when       who     what, where, why
--------   ---     ----------------------------------------------------------
01/07/11   sg      initial version

===========================================================================*/

#ifndef _NETCON_H
#define _NETCON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "qualcomm_mobile_access_point_msgr_v01.h"
#include <syslog.h>

/* RESULT TYPE*/
#define ERROR -1
#define OK 1

#define TIMEOUT 60

/* THECHNOLOGY TYPE*/
#define ANY_TECH 0
#define UMTS     1  
#define CDMA     2

/* FUNCTIONS */
int qcmap_stop_connection(int call_type , int delay);
int qcmap_start_connection(int ip_family ,int tech_pref , int profile_num ,unsigned int  retry);
int checkForConnection(int ip_family);
void releaseQcmapClient(void);



#define NETCON_LOG_DBUG(message)                          syslog(LOG_NOTICE,"DBUG:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)
#define NETCON_LOG_DBUG_1(message, arg1)                  syslog(LOG_NOTICE,"DBUG:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)
#define NETCON_LOG_DBUG_2(message, arg1, arg2)            syslog(LOG_NOTICE,"DBUG:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)
#define NETCON_LOG_DBUG_3(message, arg1, arg2, arg3)      syslog(LOG_NOTICE,"DBUG:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#define NETCON_LOG_INFO(message)                          syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)
#define NETCON_LOG_INFO_1(message, arg1)                  syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)
#define NETCON_LOG_INFO_2(message, arg1, arg2)            syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)
#define NETCON_LOG_INFO_3(message, arg1, arg2, arg3)      syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#define NETCON_LOG_WARNING(message)                       syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)                  
#define NETCON_LOG_WARNING_1(message, arg1)               syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)            
#define NETCON_LOG_WARNING_2(message, arg1, arg2)         syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)      
#define NETCON_LOG_WARNING_3(message, arg1, arg2, arg3)   syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#define NETCON_LOG_ERROR(message)                         syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)                  
#define NETCON_LOG_ERROR_1(message, arg1)                 syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)            
#define NETCON_LOG_ERROR_2(message, arg1, arg2)           syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)      
#define NETCON_LOG_ERROR_3(message, arg1, arg2, arg3)     syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#ifdef __cplusplus
}
#endif

#endif /* _NETCON_H */

