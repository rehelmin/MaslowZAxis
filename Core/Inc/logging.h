/**
  ******************************************************************************
  * File Name          : logging.h
  * Description        : This file contains all the functions prototypes for 
  *                      the ODriveV2 logging functionality  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __logging_H
#define __logging_H
#ifdef __cplusplus
 extern "C" {
#endif

typedef enum {
  eNone = 0x5u,
  eDebug = 0x4u,
  eInfo = 0x3u,
  eWarning = 0x2u,
  eError = 0x1u,
  eCritical = 0x0u,
} LogLevel_t;

typedef enum {
  eController = 0x0u,
  eMotion = 0x1u,
  eCommunication = 0x2u,
} LogSource_t;

typedef struct
{
  LogLevel_t levelId;
  LogSource_t source;
  char * message;
} LogData_t;

typedef struct
{
  LogLevel_t controllerLogLevel;
  LogLevel_t motionLogLevel;
  LogLevel_t communicationLogLevel;
  LogLevel_t consoleLogLevel;
} LogSettings_t;

void Log(LogLevel_t levelId, LogSource_t source, char* message);
void LogSetOutputLevel(LogSource_t subsystem, LogLevel_t levelId);
void LogGlobalOn(void);
void LogGlobalOff(void);

#ifdef __cplusplus
}
#endif
#endif /*__logging_H */