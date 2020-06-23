#include "main.h"
#include "controller.h"
#include "logging.h"
#include "CO_OD.h"

state_function controllerHandleStartup;
state_function controllerHandleNotReadyToSwitchOn;
state_function controllerHandleSwitchOnDisabled;
state_function controllerHandleReadyToSwitchOn;
state_function controllerHandleSwitchedOn;
state_function controllerHandleOperationEnabled;
state_function controllerHandleFaultReaction;
state_function controllerHandleFault;

static const sControllerStateTable_t mControllerStateTable[] =
{
	{1, &controllerHandleStartup},
	{2, &controllerHandleNotReadyToSwitchOn},
	{3, &controllerHandleSwitchOnDisabled},

	CONTROLLER_STATE_TABLE_END // must be LAST
};

void controllerBlinkLedCallback( TimerHandle_t xTimer )
{

	// static uint32_t blinkCount = 0;

	// if (blinkCount > (2*NUMBER_RESET_BLINKS + 2*controllerCurrentState))
	// {
	// 	blinkCount = 0;
	// 	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_RESET);
	// 	xTimerChangePeriod(xTimer, RESET_BLINK_PERIOD_TICKS, 0);
	// }
	// else if (blinkCount == 2*NUMBER_RESET_BLINKS)
	// {
	// 	xTimerChangePeriod(xTimer, STATE_BLINK_PERIOD_TICKS, 0);
	// 	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_1);
	// }
	// else
	// {
	// 	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_1);
	// }

	
	// blinkCount = blinkCount + 1;

}

void controllerProcess(struct state * state)
{
	uint32_t receiveStatus;
	ControllerData_t receiveData;

	receiveStatus = xQueueReceive(controllerQueue, &receiveData, 50);
    if (receiveStatus == pdPASS) {
    	state->eventId = receiveData.event;
    }
    // else if (OD_driveControlWord && 0x)

	state->next(state); 

}

eControllerResult_t controllerHandleStartup(struct state * state)
{
	controllerCurrentState = kStartupState;
	Log(eInfo, eController, "Controller task starting up...");
	OD_driveStatusWord = (1 << STATUS_QUICK_STOP) & OD_driveStatusWord;

	/* Load settings to DRV chips */
	/* Check brake resistor functionality */
	/* Check that encoder communication is working as expected */
	/* What else? */


	state->next = controllerHandleNotReadyToSwitchOn;

	return CONTROLLER_SUCCESS;
}

eControllerResult_t controllerHandleNotReadyToSwitchOn(struct state * state)
{
	controllerCurrentState = kNotReadyToSwitchOnState;
	OD_driveStatusWord = (1 << STATUS_QUICK_STOP) & OD_driveStatusWord;

	if (kReqSwitchOnDisabled == state->eventId)
	{
		state->next = controllerHandleSwitchOnDisabled;
		Log(eDebug, eController, "Received state change request, moving to Switch On Disabled State");
	}
	else
	{
		state->next = controllerHandleNotReadyToSwitchOn;
	}	

	return CONTROLLER_SUCCESS;
}

eControllerResult_t controllerHandleSwitchOnDisabled(struct state * state)
{
	controllerCurrentState = kSwitchOnDisabledState;
	OD_driveStatusWord = (1 << STATUS_SWITCH_ON_DISABLE) | OD_driveStatusWord;

	/* Check bus voltage levels and send error code 0x3200 if they are too low */
	/* Check that the vector offset is a valid value */
	/* Transition upon receiving an error acknowledge and all faults are cleared */

	state->next = controllerHandleSwitchOnDisabled;

	return CONTROLLER_SUCCESS;
}

eControllerResult_t controllerHandleReadyToSwitchOn(struct state * state)
{
	/* Still not applying high level power to motors yet */
	/* Waiting for enable from external master */

	state->next = controllerHandleReadyToSwitchOn;

	return CONTROLLER_SUCCESS;
}

eControllerResult_t controllerHandleSwitchedOn(struct state * state)
{
	
	/* Send enable to DRV modules */
	/* Turn on limit monitoring for all channels */
	/* Determine mode of operation */
	/* zero all motion setpoints and integrators*/
	/* At this point we are still gating external setpoints */

	state->next = controllerHandleSwitchedOn;

	return CONTROLLER_SUCCESS;
}

eControllerResult_t controllerHandleOperationEnabled(struct state * state)
{
	
	/* Hold enable to DRV modules */
	/* Pass external setpoints through to control loops */
	/* */

	state->next = controllerHandleOperationEnabled;

	return CONTROLLER_SUCCESS;
}
