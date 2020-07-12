/* CiA 402 Object Dictionary Parameters

  Index/Subindex  Object Name                                         PDO Mapping
  603F 00h        Error code                                          TPDO
  6040 00h        Control word                                        RPDO
  6041 00h        Status word                                         TPDO
  6042 00h        vl target velocity                                  RPDO
  6043 00h        vl velocity demand                                  TPDO
  6044 00h        vl velocity actual value                            TPDO
  6046 00h        vl vel min/max amount max subindex                  No
  6046 01h        vl velocity minimum amount                          RPDO
  6046 02h        vl velocity maximum amount                          RPDO
  6060 00h        Modes of operation                                  RPDO
  6061 00h        Modes of operation display                          RPDO
  6062 00h        Position demand value                               TPDO
  6063 00h        Position actual internal value                      TPDO
  6064 00h        Position actual value                               TPDO
  6076 00h        Motor rated torque                                  
  6077 00h        Torque actual value                                 TPDO
  607A 00h        Target position                                     RPDO
  607B 00h        Position range limit max sub-index                  No
  607B 01h        Position range limit – min position range limit     RPDO
  607B 02h        Position range limit – max position range limit     RPDO
  607C 00h        Home offset                                         RPDO
  607E 00h        Polarity                                            RPDO
  608F 00h        Position encoder resolution – highest sub-index     No
  608F 01h        Position encoder resolution – encoder increments    RPDO
  608F 02h        Position encoder resolution – motor revolutions     RPDO
  6090 00h        Velocity encoder resolution – highest sub-index     No
  6090 01h        Velocity encoder resol. – encoder inc per sec       RPDO
  6090 02h        Velocity encoder resolution – motor revs per second RPDO
  6091 00h        Gear ratio – highest sub-index supported            No
  6091 01h        Gear ratio – motor revolutions                      RPDO
  6091 02h        Gear ratio – shaft revolutions                      RPDO
  6092 00h        Feed constant – highest sub-index                   No
  6092 01h        Feed constant – feed                                RPDO
*/


#include <stdint.h>
#define  CO_OD_FIRST_LAST_WORD     0x55 //Any value from 0x01 to 0xFE. If changed, EEPROM will be reinitialized.

/*1018    */ typedef struct {
  uint8_t      maxSubIndex;
  uint32_t     vendorID;
  uint32_t     productCode;
  uint32_t     revisionNumber;
  uint32_t     serialNumber;
  }              OD_identity_t;

/*1200    */ typedef struct {
  uint8_t      maxSubIndex;
  uint32_t     COB_IDClientToServer;
  uint32_t     COB_IDServerToClient;
  }              OD_SDOServerParameter_t;

/*1400    */ typedef struct {
  uint8_t      maxSubIndex;
  uint32_t     COB_IDUsedByRPDO;
  uint8_t      transmissionType;
}              OD_RPDOCommunicationParameter_t;

/*1600    */ typedef struct {
  uint8_t      numberOfMappedObjects;
  uint32_t     mappedObject1;
  uint32_t     mappedObject2;
  uint32_t     mappedObject3;
  uint32_t     mappedObject4;
  uint32_t     mappedObject5;
  uint32_t     mappedObject6;
  uint32_t     mappedObject7;
  uint32_t     mappedObject8;
}              OD_RPDOMappingParameter_t;

/*1800    */ typedef struct {
  uint8_t   maxSubIndex;
  uint32_t  COB_IDUsedByTPDO;
  uint8_t   transmissionType;
  uint16_t  inhibitTime;
  uint8_t   comparabilityEntry;
  uint16_t  eventTimer;
  uint8_t   SYNCStartValue;
}              OD_TPDOCommunicationParameter_t;

/*1a00    */ typedef struct {
  uint8_t   numberOfMappedObjects;
  uint32_t  mappedObject1;
  uint32_t  mappedObject2;
  uint32_t  mappedObject3;
  uint32_t  mappedObject4;
  uint32_t  mappedObject5;
  uint32_t  mappedObject6;
  uint32_t  mappedObject7;
  uint32_t  mappedObject8;
}              OD_TPDOMappingParameter_t;

/*2012    */ typedef struct {
  uint8_t   maxSubIndex;
  float32_t positionLoopKp;
  float32_t positionLoopKi;
  float32_t positionLoopKd;
  float32_t positionLoopIntegralLimit;
  float32_t velocityLoopKp;
  float32_t velocityLoopKi;
  float32_t velocityLoopKd;
  float32_t velocityLoopIntegralLimit;
}              OD_positionController_t;

/*6046    */ typedef struct {
  uint8_t   maxSubIndex;
  uint32_t  maximumVelocity;
  uint32_t  minimumVelocity;
}             OD_VelocityLimitsParameter_t;

/*608F    */ typedef struct {
  uint8_t   maxSubIndex;
  uint32_t  encoderIncrements;
  uint32_t  motorRevolutions;
}              OD_PositionEncoderParameter_t;

/*607B    */ typedef struct {
  uint8_t   maxSubIndex;
  int32_t  maximumPosition;
  int32_t  minimumPosition;
}              OD_PositionLimitsParameter_t;

/*6091    */ typedef struct {
  uint8_t   maxSubIndex;
  uint32_t  motorRevolutions;
  uint32_t  shaftRevolutions;
}              OD_GearRatioParameter_t;

/*6092    */ typedef struct {
  uint8_t   maxSubIndex;
  uint32_t  motorRevolutions;
  uint32_t  shaftRevolutions;
}              OD_FeedRatioParameter_t;

/***** Structure for ROM variables ********************************************/
struct sOD_ROM{
               uint32_t                       FirstWord;

  /*1000      */ uint32_t                       deviceType;
  /*1005      */ uint32_t                       COB_ID_SYNCMessage;
  /*1006      */ uint32_t                       communicationCyclePeriod;
  /*1007      */ uint32_t                       synchronousWindowLength;
  /*1008      */ char                           manufacturerDeviceName[6];
  /*1009      */ char                           manufacturerHardwareVersion[4];
  /*100a      */ char                           manufacturerSoftwareVersion[4];
  /*100c      */ uint16_t                       guardTime;
  /*1012      */ uint32_t                       COB_ID_TIME;
  /*1014      */ uint32_t                       COB_ID_EMCY;
  /*1015      */ uint16_t                       inhibitTimeEMCY;
  /*1016      */ uint32_t                       consumerHeartbeatTime[4];
  /*1017      */ uint16_t                       producerHeartbeatTime;
  /*1018      */ OD_identity_t                  identity;
  /*1019      */ uint8_t                        synchronousCounterOverflowValue;
  /*1029      */ uint8_t                        errorBehavior[6];
  /*1200      */ OD_SDOServerParameter_t        SDOServerParameter[1];
  /*1400      */ OD_RPDOCommunicationParameter_t RPDOCommunicationParameter[1];
  /*1600      */ OD_RPDOMappingParameter_t      RPDOMappingParameter[1];
  /*1800      */ OD_TPDOCommunicationParameter_t TPDOCommunicationParameter[1];
  /*1a00      */ OD_TPDOMappingParameter_t      TPDOMappingParameter[1];

               uint32_t                         LastWord;
};

struct sOD_EEPROM {
              uint32_t                        FirstWord;

  /* 2012 */  OD_positionController_t         positionController;
  /* 6046 */  OD_VelocityLimitsParameter_t    velocityLimits;
  /* 6072 */  uint16_t                        maxTorque;
  /* 607b */  OD_PositionLimitsParameter_t    positionRangeLimits;
  /* 607c */  uint32_t                        homeOffset;
  /* 607e */  uint8_t                         encoderPolarity;
  /* 607f */  uint32_t                        maxProfileVelocity;
  /* 6080 */  uint32_t                        maxMotorSpeed;
  /* 6081 */  uint32_t                        profileVelocity;
  /* 6082 */  uint32_t                        endVelocity;
  /* 608f */  OD_PositionEncoderParameter_t   encoderParams;
  /* 6091 */  OD_GearRatioParameter_t         gearRatio;
  /* 6092 */  OD_FeedRatioParameter_t         feedRatio;
  /* 6402 */  uint16_t                        motorType;
  /* 60f2 */  uint16_t                        positioningOptionCode;

              uint32_t                        LastWord;
}

struct sOD_RAM {
              uint32_t                        FirstWord;

  /* 1001 */  uint8_t                         errorRegister;
  /* 6040 */  uint16_t                        controlWord;
  /* 6041 */  uint16_t                        statusWord;
  /* 6060 */  uint8_t                         modesOfOperation;
  /* 6061 */  uint8_t                         modesOfOperationDisplay;
  /* 6062 */  int32_t                         positionDemandValue;
  /* 6064 */  int32_t                         positionActualValue;
  /* 6071 */  int16_t                         targetTorque;
  /* 607a */  int32_t                         targetPosition;
  /* 6044 */  int32_t                         velocityActualValue;
  /* 6076 */  uint32_t                        motorRatedTorque;
  /* 6077 */  int16_t                         torqueActualValue;
  /* 60b0 */  int32_t                         positionOffset;
  /* 60b1 */  int32_t                         velocityOffset;
  /* 60b2 */  int16_t                         torqueOffset;
  /* 60fa */  int32_t                         positionControlEffort;
  /* 60fc */  int32_t                         positionDemandInternalValue;
  /* 60ff */  int32_t                         targetVelocity;

              uint32_t                        LastWord;
}

/***** Declaration of Object Dictionary variables *****************************/
extern struct sCO_OD_ROM CO_OD_ROM;

extern struct sCO_OD_RAM CO_OD_RAM;

extern struct sCO_OD_EEPROM CO_OD_EEPROM;

/*******************************************************************************
   ALIASES FOR OBJECT DICTIONARY VARIABLES
*******************************************************************************/
/*1000, Data Type: uint32_t */
        #define OD_deviceType                                       OD_ROM.deviceType

/*1001, Data Type: uint8_t */
        #define OD_errorRegister                                    OD_RAM.errorRegister

/*2012, Data Type: positionController_t */
        #define OD_positionController                               OD_EEPROM.positionController

/*6040, Data Type: UNSIGNED16 */
        #define OD_driveControlWord                                 CO_OD_RAM.driveControlWord

/*6041, Data Type: UNSIGNED16 */
        #define OD_driveStatusWord                                  CO_OD_RAM.driveStatusWord

/*6060, Data Type: INTEGER8 */
        #define OD_modesOfOperation                                 CO_OD_RAM.modesOfOperation

/*6061, Data Type: INTEGER8 */
        #define OD_modesOfOperationDisplay                          CO_OD_RAM.modesOfOperationDisplay

/*6064, Data Type: INTEGER32 */
        #define OD_positionActualValue                              CO_OD_RAM.positionActualValue