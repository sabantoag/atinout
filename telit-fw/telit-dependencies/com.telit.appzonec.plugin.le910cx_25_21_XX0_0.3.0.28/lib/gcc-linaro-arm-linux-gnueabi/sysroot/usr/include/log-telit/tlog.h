#ifndef   __TLOG_H__
#define   __TLOG_H__

/*====================================================================================
                      EDIT HISTORY FOR FILE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

Telit Wireless Revision History:

                  Modification     Tracking
Author                Date          Number         Description of Changes
----------        -----------     ----------  ----------------------------------------
JH Choi           06/Feb/2016        	      Created
YN Lee            04/May/2018                 Delete logcat, Add syslog-ng
JH Choi           23/May/2018                 Delete tag name and change return-value of tlog_open
====================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

// Logger Type Enumeration
typedef enum {
  TLOG_NONE  = 0 , /* No Logger. No trace out */
  TLOG_SYSLOG    , /* SYSLOG-NG. Trace out to syslog-ng daemon */
  TLOG_DIAG      , /* DIAG. Trace out to diag daemon  */
  TLOG_LFS       , /* LFS(Local File System). Trace out to local file system */
  TLOG_LOGGER_MAX
}tlog_logger_t;



typedef enum {
  TLOG_DEBUG   = 0,  /* Degugging Level   */
  TLOG_INFO    = 1,  /* Information Level */
  TLOG_NOTICE  = 2,  /* Notice Level      */
  TLOG_WARNING = 3,  /* Warning Level     */
  TLOG_ERROR   = 4,  /* Error Level       */
  TLOG_FATAL   = 5   /* Fatal Level       */
}tlog_lvl_t;



// Telit Log Macro
#define TLOGD(...)  tlog_output(TLOG_DEBUG  , __FILE__, __LINE__, __VA_ARGS__)
#define TLOGI(...)  tlog_output(TLOG_INFO   , __FILE__, __LINE__, __VA_ARGS__)
#define TLOGN(...)  tlog_output(TLOG_NOTICE , __FILE__, __LINE__, __VA_ARGS__)
#define TLOGW(...)  tlog_output(TLOG_WARNING, __FILE__, __LINE__, __VA_ARGS__)
#define TLOGE(...)  tlog_output(TLOG_ERROR  , __FILE__, __LINE__, __VA_ARGS__)
#define TLOGF(...)  tlog_output(TLOG_FATAL  , __FILE__, __LINE__, __VA_ARGS__)



/*-----------------------------------------------------------------------------------------------*/
/*!
  @brief
    open telit logger for trace message service.

  @details
    configure logger and logger level as default configuration if there is no configuration file
    default logger - TLOG_SYSLOG
    default level  - TLOG_INFO
    Once this function return zero,log behavior will work depend on configuration files stored in
    /var/logs/<application name>
    
  @return
    On success, zero is returned. On error, -1 is returned

  @note
    <Notes>

  @b
    Example
  @code
    
  @endcode
*/
/*-----------------------------------------------------------------------------------------------*/
int tlog_open(void);

/*-----------------------------------------------------------------------------------------------*/
/*!
  @brief
    open telit logger with the specifed configuration for trace message service.

  @details
    configre the specified logger and level. and it ignore the configuration file stored in
    /var/logs/<application name>
    Log behavior will work with the specifed logger and level.

  @param[in] logger
    specifies the logger used for trace message service
  @param[in] lvl
    specifies the level of trace message service

  @return
    On success, zero is returned. On error, -1 is returned

  @note
    <Notes>

  @b
    Example
  @code
    
  @endcode
*/
/*-----------------------------------------------------------------------------------------------*/
int tlog_open_with_option(tlog_logger_t logger, tlog_lvl_t lvl);



/*-----------------------------------------------------------------------------------------------*/
/*!
  @brief
    trace out the passed log message by application

  @details
    filter the log message with the specifed log level and it routes to the specified logger
    Don't call this functionl, directlry, Instead, use this function with Telit Log Macro, below 
  
    #define TLOGD(...)	tlog_output(TLOG_DEBUG	, __FILE__, __LINE__, __VA_ARGS__)
    #define TLOGI(...)	tlog_output(TLOG_INFO	, __FILE__, __LINE__, __VA_ARGS__)
    #define TLOGN(...)	tlog_output(TLOG_NOTICE , __FILE__, __LINE__, __VA_ARGS__)
    #define TLOGW(...)	tlog_output(TLOG_WARNING, __FILE__, __LINE__, __VA_ARGS__)
    #define TLOGE(...)	tlog_output(TLOG_ERROR	, __FILE__, __LINE__, __VA_ARGS__)
    #define TLOGF(...)	tlog_output(TLOG_FATAL	, __FILE__, __LINE__, __VA_ARGS__)
    
  @param[in] lvl
    the logger used for trace message service
  @param[in] file
    the path of source code of the inserted log message.
  @param[in] line
    the line of source code of the inserted log message.
  @param[in] fmt
    
  @return
    No return value.

  @note
    if logger configured as TLOG_NONE, no trace message out.
    if tlog_open failed, this function will be returned immediately without any behavior

  @b
    Example
  @code
    
  @endcode
*/
/*-----------------------------------------------------------------------------------------------*/
void tlog_output(tlog_lvl_t lvl, const char* file, int line, const char * fmt, ...);



/*-----------------------------------------------------------------------------------------------*/
/*!
  @brief
    close telit logger

  @details
    clean up all resource used for trace message service.

  @return
    No return value

  @note
    if tlog_open failed, this function will be returned immediately without any behavior

  @b
    Example
  @code
    
  @endcode
*/
/*-----------------------------------------------------------------------------------------------*/
void tlog_close(void);


#ifdef __cplusplus
}
#endif

#endif /*__TLOG_H__*/
