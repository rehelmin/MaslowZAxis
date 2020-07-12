/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"
#include "console.h"
#include "timers.h"
#include "can.h"
#include "controller.h"

uint8_t ucHeap[configTOTAL_HEAP_SIZE] __attribute__((section("ccmram")));

/* Definitions for defaultTask */
osThreadId_t consoleTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "consoleTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 512
};

osThreadId_t communicationTaskHandle;
const osThreadAttr_t communicationTask_attributes = {
  .name = "communicationTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128
};

osThreadId_t motionTaskHandle;
const osThreadAttr_t motionTask_attributes = {
  .name = "motionTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128
};

osThreadId_t controllerTaskHandle;
const osThreadAttr_t controllerTask_attributes = {
  .name = "controllerTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128
};

TimerHandle_t ledTimer;
QueueHandle_t consoleQueue;
QueueHandle_t controllerQueue;
QueueHandle_t motionQueue;
QueueHandle_t communicationsQueue;

state_function controllerHandleStartup;   // initial controller state forward declaration

void StartConsoleTask(void *argument);
void StartCommunicationTask(void *argument);
void StartMotionTask(void *argument);
void StartControllerTask(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {

  /* Blink Timer */
  ledTimer = xTimerCreate("ledBlinkTimer", TIMER_INIT_TICKS, pdTRUE, 0, controllerBlinkLedCallback);

  /* Messaging Queues */
  consoleQueue = xQueueCreate(4, sizeof(LogData_t));
  controllerQueue = xQueueCreate(4, sizeof(ControllerData_t));

  /* Create the thread(s) */
  /* creation of defaultTask */
  consoleTaskHandle = osThreadNew(StartConsoleTask, (void*)consoleQueue, &defaultTask_attributes);
  communicationTaskHandle = osThreadNew(StartCommunicationTask, NULL, &communicationTask_attributes);
  controllerTaskHandle = osThreadNew(StartControllerTask, (void*)controllerQueue, &controllerTask_attributes);


}

/* USER CODE BEGIN Header_StartConsoleTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartConsoleTask */
void StartConsoleTask(void *argument)
{
  LogData_t receiveMessage;
  uint32_t receiveStatus;

  /* Infinite loop */
  for(;;)
  {
    ConsoleProcess();
    receiveStatus = xQueueReceive(consoleQueue, &receiveMessage, 100);
    if (pdPASS == receiveStatus)
    {
      ConsoleLog(&receiveMessage);
    }
  }
}

void StartControllerTask(void *argument)
{
  xTimerStart( ledTimer, 0 );
  struct state state = { controllerHandleStartup, 0 };

  /* Infinite loop */
  for(;;)
  {
    controllerProcess(&state);
    osDelay(50);
  }
}

void StartCommunicationTask(void *argument)
{

  Log(eInfo, eCommunication, "Communication task starting up...");

  /* Infinite loop */
  for(;;)
  {
    CanProcess();
    osDelay(50);
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
