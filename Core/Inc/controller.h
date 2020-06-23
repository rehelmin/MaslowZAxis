#ifndef __CONTROLLER_H
#define __CONTROLLER_H
#ifdef __cplusplus
 extern "C" {
#endif

    #include "FreeRTOS.h"
    #include "timers.h"
    #include "dataDefs.h"

    #define STATE_BLINK_PERIOD_TICKS	500
    #define RESET_BLINK_PERIOD_TICKS	40
    #define NUMBER_RESET_BLINKS			10
    #define TIMER_INIT_TICKS			40

    // CANOpen 0x6041 Status Word Bit Definitions
    #define STATUS_INTERNAL_LIMIT_ACTIVE 11
    #define STATUS_TARGET_REACHED        10
    #define STATUS_REMOTE                9
    #define STATUS_WARNING               7
    #define STATUS_SWITCH_ON_DISABLE     6
    #define STATUS_QUICK_STOP            5
    #define STATUS_VOLTAGE_DISABLED      4
    #define STATUS_FAULT                 3
    #define STATUS_OPERATION_ENABLE      2
    #define STATUS_SWITCHED_ON           1
    #define STATUS_READY_TO_SWITCH_ON    0

    // called from lower down areas of the code (controller)
    typedef enum { 
    	CONTROLLER_SUCCESS = 0u,
    	CONTROLLER_PARAMETER_ERROR = 0x10u,
    	CONTROLLER_PARAMETER_END   = 0x11u,
    	CONTROLLER_ERROR =0xFFu 
    } eControllerResult_t;

    struct state;
    typedef eControllerResult_t state_function(struct state *);

    struct state {
    	state_function * next;
    	uint32_t eventId;
    };


    void controllerBlinkLedCallback(TimerHandle_t xTimer);
    void controllerProcess(struct state * state);

    typedef eControllerResult_t(*ControllerState_t)(struct state *);

    typedef struct sControllerStateStruct
    {
        const uint32_t state;
        ControllerState_t execute;
    } sControllerStateTable_t;

    #define CONTROLLER_STATE_TABLE_END {NULL, NULL}

    const sControllerStateTable_t* ControllerStateGetTable(void);

    uint32_t controllerCurrentState;

#ifdef __cplusplus
}
#endif
#endif /*__CONTROLLER_H */