#include <dbus/dbus.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <syslog.h>

#define STR_LEN 256
#define MAX_MSG_PARAM 21

/*===========================================================================

                      EDIT HISTORY FOR FILE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.




Telit Wireless Revision History:

             Modification   Tracking
Author		   Date          Number     Description of Changes
----------  -----------    ----------   -------------------------------------------
LidorBo       18-Oct-2017    Bug32587    Fix CodeSonar warnings.

*/

enum error_type{
     NO_ERR,
     GENERAL_ERROR,
     CONNECTION_NAME_IN_USE,
};
typedef union dbusA_paramType_t
{
    dbus_uint32_t uinteger64;
    dbus_uint32_t uinteger;
    dbus_int32_t integer;
    dbus_bool_t boolean;
    char string[STR_LEN+1];
} dbusA_paramType_t;

typedef union dbusA_paramType_extended
{
    dbus_uint32_t uinteger64;
    dbus_uint32_t uinteger;
    dbus_int32_t integer;
    dbus_bool_t boolean;
    char * dString;
} dbusA_paramType_e;

typedef struct dbusA_Param_e
{
    int  nbParam;
    int paramType[MAX_MSG_PARAM];
    dbusA_paramType_e param[MAX_MSG_PARAM];
} dbusA_Param_e;

typedef struct dbusA_Param_t
{
    int  nbParam;
    int paramType[MAX_MSG_PARAM];
    dbusA_paramType_t param[MAX_MSG_PARAM];
} dbusA_Param_t;

typedef struct dbusA_FilterFunctionArg_e {
	char interfaceName[STR_LEN];
	char messageName[STR_LEN];
	void (*client_cb_function)(dbusA_Param_e sigParam);
} dbusA_FilterFunctionArg_e;

int dbusA_getConnection(char* name,DBusConnection** conn, int type);
int dbusA_getConnectionByAddress(DBusConnection** conn , char* dbus_session_bus_address,char* dbus_connection_name);
int dbusA_closeConnection(DBusConnection** conn);

int dbusA_addFilter(DBusConnection *conn, dbusA_FilterFunctionArg_e *dbusA_filterFunctionArg);
int dbusA_registerSignalListen(DBusConnection* conn , char * interface);
int dbusA_sendsignal(DBusConnection* conn,char* objectName,char* interfaceName,char* signalName,dbusA_Param_t *sigParam);
int dbusA_waitSignalMessage(DBusConnection* conn, char* interfaceName,char* signalName, int timeout,dbusA_Param_t* ret);
void dbusA_async_waitSignalMessage(DBusConnection* conn, int timeout);

int dbusA_waitMethodCall(DBusConnection* conn, char* interfaceName,char* methodName, int timeout, DBusMessage** reply,dbusA_Param_t * ret);
void dbusA_replyMethodCall(DBusConnection* conn, DBusMessage* reply,dbusA_Param_t *sigParam);
int dbusA_callMethod(DBusConnection* conn, char* targetName,char* objectName, char* interfaceName,char* methodName,dbusA_Param_t *methParam,dbusA_Param_t *ret);
void copy_dbusA_Param_e(dbusA_Param_e *src,dbusA_Param_e *dst);
void free_dbusA_Param_e(dbusA_Param_e *param);
int  dbusA_sendsignalList(DBusConnection* conn,char* objectName,char* interfaceName,char* signalName,dbusA_Param_e *sigParam);




#define DBUSABS_LOG_INFO(message)                          syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)
#define DBUSABS_LOG_INFO_1(message, arg1)                  syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)
#define DBUSABS_LOG_INFO_2(message, arg1, arg2)            syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)
#define DBUSABS_LOG_INFO_3(message, arg1, arg2, arg3)      syslog(LOG_NOTICE,"INFO:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#define DBUSABS_LOG_WARNING(message)                       syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)                  
#define DBUSABS_LOG_WARNING_1(message, arg1)               syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)            
#define DBUSABS_LOG_WARNING_2(message, arg1, arg2)         syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)      
#define DBUSABS_LOG_WARNING_3(message, arg1, arg2, arg3)   syslog(LOG_WARNING,"WARN:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)

#define DBUSABS_LOG_ERROR(message)                         syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__)                  
#define DBUSABS_LOG_ERROR_1(message, arg1)                 syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1)            
#define DBUSABS_LOG_ERROR_2(message, arg1, arg2)           syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2)      
#define DBUSABS_LOG_ERROR_3(message, arg1, arg2, arg3)     syslog(LOG_ERR,"ERR:[%s][%s][%d] "message, __FILE__, __func__, __LINE__, arg1, arg2, arg3)





