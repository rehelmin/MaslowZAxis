/*******************************************************************************

   File - CO_OD.c/CO_OD.h
   CANopen Object Dictionary.

   Copyright (C) 2004-2008 Janez Paternoster

   License: GNU Lesser General Public License (LGPL).

   <http://canopennode.sourceforge.net>

   (For more information see <CO_SDO.h>.)

   This file is part of CANopenNode, an open source CANopen Stack.
   Project home page is <https://github.com/CANopenNode/CANopenNode>.
   For more information on CANopen see <http://www.can-cia.org/>.
 
   CANopenNode is free and open source software: you can redistribute
   it and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 2 of the
   License, or (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
  
   Following clarification and special exception to the GNU General Public
   License is included to the distribution terms of CANopenNode:
  
   Linking this library statically or dynamically with other modules is
   making a combined work based on this library. Thus, the terms and
   conditions of the GNU General Public License cover the whole combination.
  
   As a special exception, the copyright holders of this library give
   you permission to link this library with independent modules to
   produce an executable, regardless of the license terms of these
   independent modules, and to copy and distribute the resulting
   executable under terms of your choice, provided that you also meet,
   for each linked independent module, the terms and conditions of the
   license of that module. An independent module is a module which is
   not derived from or based on this library. If you modify this
   library, you may extend this exception to your version of the
   library, but you are not obliged to do so. If you do not wish
   to do so, delete this exception statement from your version.
 
   This file was automatically generated with libedssharp Object
   Dictionary Editor vUnknown   DON'T EDIT THIS FILE MANUALLY !!!!
*******************************************************************************/

#include "CO_driver.h"

#pragma once

/*******************************************************************************
   CANopen DATA TYPES
*******************************************************************************/
   typedef bool_t       BOOLEAN;
   typedef uint8_t      UNSIGNED8;
   typedef uint16_t     UNSIGNED16;
   typedef uint32_t     UNSIGNED32;
   typedef uint64_t     UNSIGNED64;
   typedef int8_t       INTEGER8;
   typedef int16_t      INTEGER16;
   typedef int32_t      INTEGER32;
   typedef int64_t      INTEGER64;
   typedef float32_t    REAL32; 
   typedef char_t       VISIBLE_STRING;
   typedef oChar_t      OCTET_STRING;

   #ifdef DOMAIN
   #undef DOMAIN
   #endif

   typedef domain_t     DOMAIN;

#ifndef timeOfDay_t
    typedef union {
        unsigned long long ullValue;
        struct {
            unsigned long ms:28;
            unsigned reserved:4;
            unsigned days:16;
            unsigned reserved2:16;
        };
    }timeOfDay_t;
#endif

    typedef timeOfDay_t TIME_OF_DAY;
    typedef timeOfDay_t TIME_DIFFERENCE;


/*******************************************************************************
   FILE INFO:
      FileName:     
      FileVersion:  3
      CreationTime: 5:13PM
      CreationDate: 01-31-2017
      CreatedBy:    Ryan Helminen
******************************************************************************/


/*******************************************************************************
   DEVICE INFO:
      VendorName:     Odrive Robotics
      VendorNumber    2
      ProductName:    Odrive
      ProductNumber:  1
******************************************************************************/


/*******************************************************************************
   FEATURES
*******************************************************************************/
  #define CO_NO_SYNC                     1   //Associated objects: 1005-1007
  #define CO_NO_EMERGENCY                1   //Associated objects: 1014, 1015
  #define CO_NO_SDO_SERVER               1   //Associated objects: 1200-127F
  #define CO_NO_SDO_CLIENT               1   //Associated objects: 1280-12FF
  #define CO_NO_LSS_SERVER               0   //LSS Slave
  #define CO_NO_LSS_CLIENT               0   //LSS Master
  #define CO_NO_RPDO                     1   //Associated objects: 14xx, 16xx
  #define CO_NO_TPDO                     1   //Associated objects: 18xx, 1Axx
  #define CO_NO_NMT_MASTER               0


/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
   #define CO_OD_NoOfElements             72


/*******************************************************************************
   TYPE DEFINITIONS FOR RECORDS
*******************************************************************************/
/*1018    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     vendorID;
               UNSIGNED32     productCode;
               UNSIGNED32     revisionNumber;
               UNSIGNED32     serialNumber;
               }              OD_identity_t;
/*1200    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDClientToServer;
               UNSIGNED32     COB_IDServerToClient;
               }              OD_SDOServerParameter_t;
/*1280    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDClientToServer;
               UNSIGNED32     COB_IDServerToClient;
               UNSIGNED8      nodeIDOfTheSDOServer;
               }              OD_SDOClientParameter_t;
/*1400    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDUsedByRPDO;
               UNSIGNED8      transmissionType;
               }              OD_RPDOCommunicationParameter_t;
/*1600    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     mappedObject1;
               UNSIGNED32     mappedObject2;
               UNSIGNED32     mappedObject3;
               UNSIGNED32     mappedObject4;
               UNSIGNED32     mappedObject5;
               UNSIGNED32     mappedObject6;
               UNSIGNED32     mappedObject7;
               UNSIGNED32     mappedObject8;
               }              OD_RPDOMappingParameter_t;
/*1800    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED32     COB_IDUsedByTPDO;
               UNSIGNED8      transmissionType;
               UNSIGNED16     inhibitTime;
               UNSIGNED8      comparabilityEntry;
               UNSIGNED16     eventTimer;
               UNSIGNED8      SYNCStartValue;
               }              OD_TPDOCommunicationParameter_t;
/*1a00    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     mappedObject1;
               UNSIGNED32     mappedObject2;
               UNSIGNED32     mappedObject3;
               UNSIGNED32     mappedObject4;
               UNSIGNED32     mappedObject5;
               UNSIGNED32     mappedObject6;
               UNSIGNED32     mappedObject7;
               UNSIGNED32     mappedObject8;
               }              OD_TPDOMappingParameter_t;
/*2003    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED8      polePairs;
               INTEGER32      torqueConstant;
               INTEGER32      phaseResistance;
               INTEGER32      phaseInductance;
               BOOLEAN        motorPhasesInverted;
               }              OD_motorSpecificSettings_t;
/*2006    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               INTEGER32      minDC_Voltage;
               INTEGER32      maxDC_Voltage;
               INTEGER32      maxCurrent;
               }              OD_protection_t;
/*2010    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               REAL32         controllerKp;
               REAL32         controllerKi;
               REAL32         controllerKd;
               UNSIGNED32     fieldWeakeningEnable;
               UNSIGNED32     fieldWeakeningPercentage;
               UNSIGNED32     fieldWeakeningStartingSpeed;
               UNSIGNED32     fieldWeakeningEndingSpeed;
               UNSIGNED32     commutationAngleMeasurementDelay;
               }              OD_torqueController_t;
/*2011    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               REAL32         controllerKp;
               REAL32         controllerKi;
               REAL32         controllerKd;
               UNSIGNED32     controllerIntegralLimit;
               }              OD_velocityController_t;
/*2012    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               REAL32         positionLoopKp;
               REAL32         positionLoopKi;
               REAL32         positionLoopKd;
               UNSIGNED32     positionLoopIntegralLimit;
               REAL32         velocityLoopKp;
               REAL32         velocityLoopKi;
               REAL32         velocityLoopKd;
               UNSIGNED32     velocityLoopIntegralLimit;
               }              OD_positionController_t;
/*2100    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED16     sensorPort1;
               }              OD_feedbackSensorPorts_t;
/*2205    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               UNSIGNED8      type;
               UNSIGNED8      function;
               UNSIGNED32     resolution;
               UNSIGNED16     velocityCalculationPeriod;
               UNSIGNED8      polarity;
               }              OD_incrementalEncoder1_t;
/*603e    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               BOOLEAN        txPDO_DataInvalidOf1stPDO;
               BOOLEAN        txPDO_DataInvalidOf2ndPDO;
               BOOLEAN        txPDO_DataInvalidOf3rdPDO;
               BOOLEAN        txPDO_DataInvalidOf4thPDO;
               BOOLEAN        txPDO_DataInvalidOf5thPDO;
               }              OD_txPDO_DataInvalid_t;
/*607b    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               INTEGER32      minPositionRangeLimit;
               INTEGER32      maxPositionRangeLimit;
               }              OD_positionRangeLimit_t;
/*607d    */ typedef struct {
               UNSIGNED8      maxSubIndex;
               INTEGER32      minPositionLimit;
               INTEGER32      maxPositionLimit;
               }              OD_softwarePositionLimit_t;

/*******************************************************************************
   TYPE DEFINITIONS FOR OBJECT DICTIONARY INDEXES

   some of those are redundant with CO_SDO.h CO_ObjDicId_t <Common CiA301 object 
   dictionary entries>
*******************************************************************************/
/*1000 */
        #define OD_1000_deviceType                                  0x1000

/*1001 */
        #define OD_1001_errorRegister                               0x1001

/*1002 */
        #define OD_1002_manufacturerStatusRegister                  0x1002

/*1003 */
        #define OD_1003_preDefinedErrorField                        0x1003

        #define OD_1003_0_preDefinedErrorField_maxSubIndex          0
        #define OD_1003_1_preDefinedErrorField_standardErrorField   1
        #define OD_1003_2_preDefinedErrorField_standardErrorField   2
        #define OD_1003_3_preDefinedErrorField_standardErrorField   3
        #define OD_1003_4_preDefinedErrorField_standardErrorField   4
        #define OD_1003_5_preDefinedErrorField_standardErrorField   5
        #define OD_1003_6_preDefinedErrorField_standardErrorField   6
        #define OD_1003_7_preDefinedErrorField_standardErrorField   7
        #define OD_1003_8_preDefinedErrorField_standardErrorField   8

/*1005 */
        #define OD_1005_COB_ID_SYNCMessage                          0x1005

/*1006 */
        #define OD_1006_communicationCyclePeriod                    0x1006

/*1007 */
        #define OD_1007_synchronousWindowLength                     0x1007

/*1008 */
        #define OD_1008_manufacturerDeviceName                      0x1008

/*1009 */
        #define OD_1009_manufacturerHardwareVersion                 0x1009

/*100a */
        #define OD_100a_manufacturerSoftwareVersion                 0x100a

/*100c */
        #define OD_100c_guardTime                                   0x100c

/*100d */
        #define OD_100d_lifeTimeFactor                              0x100d

/*1010 */
        #define OD_1010_storeParameters                             0x1010

        #define OD_1010_0_storeParameters_maxSubIndex               0
        #define OD_1010_1_storeParameters_saveAllParameters         1

/*1011 */
        #define OD_1011_restoreDefaultParameters                    0x1011

        #define OD_1011_0_restoreDefaultParameters_maxSubIndex      0
        #define OD_1011_1_restoreDefaultParameters_restoreAllDefaultParameters 1

/*1012 */
        #define OD_1012_COB_ID_TIME                                 0x1012

/*1013 */
        #define OD_1013_highResolutionTimeStamp                     0x1013

/*1014 */
        #define OD_1014_COB_ID_EMCY                                 0x1014

/*1015 */
        #define OD_1015_inhibitTimeEMCY                             0x1015

/*1016 */
        #define OD_1016_consumerHeartbeatTime                       0x1016

        #define OD_1016_0_consumerHeartbeatTime_maxSubIndex         0
        #define OD_1016_1_consumerHeartbeatTime_consumerHeartbeatTime 1
        #define OD_1016_2_consumerHeartbeatTime_consumerHeartbeatTime 2
        #define OD_1016_3_consumerHeartbeatTime_consumerHeartbeatTime 3
        #define OD_1016_4_consumerHeartbeatTime_consumerHeartbeatTime 4

/*1017 */
        #define OD_1017_producerHeartbeatTime                       0x1017

/*1018 */
        #define OD_1018_identity                                    0x1018

        #define OD_1018_0_identity_maxSubIndex                      0
        #define OD_1018_1_identity_vendorID                         1
        #define OD_1018_2_identity_productCode                      2
        #define OD_1018_3_identity_revisionNumber                   3
        #define OD_1018_4_identity_serialNumber                     4

/*1019 */
        #define OD_1019_synchronousCounterOverflowValue             0x1019

/*1029 */
        #define OD_1029_errorBehavior                               0x1029

        #define OD_1029_0_errorBehavior_maxSubIndex                 0
        #define OD_1029_1_errorBehavior_communication               1
        #define OD_1029_2_errorBehavior_communicationOther          2
        #define OD_1029_3_errorBehavior_communicationPassive        3
        #define OD_1029_4_errorBehavior_generic                     4
        #define OD_1029_5_errorBehavior_deviceProfile               5
        #define OD_1029_6_errorBehavior_manufacturerSpecific        6

/*1200 */
        #define OD_1200_SDOServerParameter                          0x1200

        #define OD_1200_0_SDOServerParameter_maxSubIndex            0
        #define OD_1200_1_SDOServerParameter_COB_IDClientToServer   1
        #define OD_1200_2_SDOServerParameter_COB_IDServerToClient   2

/*1280 */
        #define OD_1280_SDOClientParameter                          0x1280

        #define OD_1280_0_SDOClientParameter_maxSubIndex            0
        #define OD_1280_1_SDOClientParameter_COB_IDClientToServer   1
        #define OD_1280_2_SDOClientParameter_COB_IDServerToClient   2
        #define OD_1280_3_SDOClientParameter_nodeIDOfTheSDOServer   3

/*1400 */
        #define OD_1400_RPDOCommunicationParameter                  0x1400

        #define OD_1400_0_RPDOCommunicationParameter_maxSubIndex    0
        #define OD_1400_1_RPDOCommunicationParameter_COB_IDUsedByRPDO 1
        #define OD_1400_2_RPDOCommunicationParameter_transmissionType 2

/*1600 */
        #define OD_1600_RPDOMappingParameter                        0x1600

        #define OD_1600_0_RPDOMappingParameter_maxSubIndex          0
        #define OD_1600_1_RPDOMappingParameter_mappedObject1        1
        #define OD_1600_2_RPDOMappingParameter_mappedObject2        2
        #define OD_1600_3_RPDOMappingParameter_mappedObject3        3
        #define OD_1600_4_RPDOMappingParameter_mappedObject4        4
        #define OD_1600_5_RPDOMappingParameter_mappedObject5        5
        #define OD_1600_6_RPDOMappingParameter_mappedObject6        6
        #define OD_1600_7_RPDOMappingParameter_mappedObject7        7
        #define OD_1600_8_RPDOMappingParameter_mappedObject8        8

/*1800 */
        #define OD_1800_TPDOCommunicationParameter                  0x1800

        #define OD_1800_0_TPDOCommunicationParameter_maxSubIndex    0
        #define OD_1800_1_TPDOCommunicationParameter_COB_IDUsedByTPDO 1
        #define OD_1800_2_TPDOCommunicationParameter_transmissionType 2
        #define OD_1800_3_TPDOCommunicationParameter_inhibitTime    3
        #define OD_1800_4_TPDOCommunicationParameter_comparabilityEntry 4
        #define OD_1800_5_TPDOCommunicationParameter_eventTimer     5
        #define OD_1800_6_TPDOCommunicationParameter_SYNCStartValue 6

/*1a00 */
        #define OD_1a00_TPDOMappingParameter                        0x1a00

        #define OD_1a00_0_TPDOMappingParameter_maxSubIndex          0
        #define OD_1a00_1_TPDOMappingParameter_mappedObject1        1
        #define OD_1a00_2_TPDOMappingParameter_mappedObject2        2
        #define OD_1a00_3_TPDOMappingParameter_mappedObject3        3
        #define OD_1a00_4_TPDOMappingParameter_mappedObject4        4
        #define OD_1a00_5_TPDOMappingParameter_mappedObject5        5
        #define OD_1a00_6_TPDOMappingParameter_mappedObject6        6
        #define OD_1a00_7_TPDOMappingParameter_mappedObject7        7
        #define OD_1a00_8_TPDOMappingParameter_mappedObject8        8

/*2001 */
        #define OD_2001_commutationAngleOffset                      0x2001

/*2002 */
        #define OD_2002_positionControlStrategy                     0x2002

/*2003 */
        #define OD_2003_motorSpecificSettings                       0x2003

        #define OD_2003_0_motorSpecificSettings_maxSubIndex         0
        #define OD_2003_1_motorSpecificSettings_polePairs           1
        #define OD_2003_2_motorSpecificSettings_torqueConstant      2
        #define OD_2003_3_motorSpecificSettings_phaseResistance     3
        #define OD_2003_4_motorSpecificSettings_phaseInductance     4
        #define OD_2003_5_motorSpecificSettings_motorPhasesInverted 5

/*2006 */
        #define OD_2006_protection                                  0x2006

        #define OD_2006_0_protection_maxSubIndex                    0
        #define OD_2006_1_protection_minDC_Voltage                  1
        #define OD_2006_2_protection_maxDC_Voltage                  2
        #define OD_2006_3_protection_maxCurrent                     3

/*2010 */
        #define OD_2010_torqueController                            0x2010

        #define OD_2010_0_torqueController_maxSubIndex              0
        #define OD_2010_1_torqueController_controllerKp             1
        #define OD_2010_2_torqueController_controllerKi             2
        #define OD_2010_3_torqueController_controllerKd             3
        #define OD_2010_4_torqueController_fieldWeakeningEnable     4
        #define OD_2010_5_torqueController_fieldWeakeningPercentage 5
        #define OD_2010_6_torqueController_fieldWeakeningStartingSpeed 6
        #define OD_2010_7_torqueController_fieldWeakeningEndingSpeed 7
        #define OD_2010_8_torqueController_commutationAngleMeasurementDelay 8

/*2011 */
        #define OD_2011_velocityController                          0x2011

        #define OD_2011_0_velocityController_maxSubIndex            0
        #define OD_2011_1_velocityController_controllerKp           1
        #define OD_2011_2_velocityController_controllerKi           2
        #define OD_2011_3_velocityController_controllerKd           3
        #define OD_2011_4_velocityController_controllerIntegralLimit 4

/*2012 */
        #define OD_2012_positionController                          0x2012

        #define OD_2012_0_positionController_maxSubIndex            0
        #define OD_2012_1_positionController_positionLoopKp         1
        #define OD_2012_2_positionController_positionLoopKi         2
        #define OD_2012_3_positionController_positionLoopKd         3
        #define OD_2012_4_positionController_positionLoopIntegralLimit 4
        #define OD_2012_5_positionController_velocityLoopKp         5
        #define OD_2012_6_positionController_velocityLoopKi         6
        #define OD_2012_7_positionController_velocityLoopKd         7
        #define OD_2012_8_positionController_velocityLoopIntegralLimit 8

/*2100 */
        #define OD_2100_feedbackSensorPorts                         0x2100

        #define OD_2100_0_feedbackSensorPorts_maxSubIndex           0
        #define OD_2100_1_feedbackSensorPorts_sensorPort1           1

/*2200 */
        #define OD_2200_errorStatusBits                             0x2200

        #define OD_2200_0_errorStatusBits_maxSubIndex               0
        #define OD_2200_1_errorStatusBits_                          1
        #define OD_2200_2_errorStatusBits_                          2
        #define OD_2200_3_errorStatusBits_                          3
        #define OD_2200_4_errorStatusBits_                          4
        #define OD_2200_5_errorStatusBits_                          5
        #define OD_2200_6_errorStatusBits_                          6
        #define OD_2200_7_errorStatusBits_                          7
        #define OD_2200_8_errorStatusBits_                          8
        #define OD_2200_9_errorStatusBits_                          9
        #define OD_2200_10_errorStatusBits_                         10

/*2205 */
        #define OD_2205_incrementalEncoder1                         0x2205

        #define OD_2205_0_incrementalEncoder1_maxSubIndex           0
        #define OD_2205_1_incrementalEncoder1_type                  1
        #define OD_2205_2_incrementalEncoder1_function              2
        #define OD_2205_3_incrementalEncoder1_resolution            3
        #define OD_2205_4_incrementalEncoder1_velocityCalculationPeriod 4
        #define OD_2205_5_incrementalEncoder1_polarity              5

/*603e */
        #define OD_603e_txPDO_DataInvalid                           0x603e

        #define OD_603e_0_txPDO_DataInvalid_maxSubIndex             0
        #define OD_603e_1_txPDO_DataInvalid_txPDO_DataInvalidOf1stPDO 1
        #define OD_603e_2_txPDO_DataInvalid_txPDO_DataInvalidOf2ndPDO 2
        #define OD_603e_3_txPDO_DataInvalid_txPDO_DataInvalidOf3rdPDO 3
        #define OD_603e_4_txPDO_DataInvalid_txPDO_DataInvalidOf4thPDO 4
        #define OD_603e_5_txPDO_DataInvalid_txPDO_DataInvalidOf5thPDO 5

/*6040 */
        #define OD_6040_driveControlWord                            0x6040

/*6041 */
        #define OD_6041_driveStatusWord                             0x6041

/*6060 */
        #define OD_6060_modesOfOperation                            0x6060

/*6061 */
        #define OD_6061_modesOfOperationDisplay                     0x6061

/*6064 */
        #define OD_6064_positionActualValue                         0x6064

/*6065 */
        #define OD_6065_followingErrorWindow                        0x6065

/*6066 */
        #define OD_6066_followingErrorTimeOut                       0x6066

/*606c */
        #define OD_606c_velocityActualValue                         0x606c

/*6071 */
        #define OD_6071_targetTorque                                0x6071

/*6072 */
        #define OD_6072_maxTorque                                   0x6072

/*6073 */
        #define OD_6073_maxCurrent                                  0x6073

/*6075 */
        #define OD_6075_motorRatedCurrent                           0x6075

/*6076 */
        #define OD_6076_motorRatedTorque                            0x6076

/*6077 */
        #define OD_6077_torqueActualValue                           0x6077

/*6079 */
        #define OD_6079_DCLinkCircuitVoltage                        0x6079

/*607a */
        #define OD_607a_targetPosition                              0x607a

/*607b */
        #define OD_607b_positionRangeLimit                          0x607b

        #define OD_607b_0_positionRangeLimit_maxSubIndex            0
        #define OD_607b_1_positionRangeLimit_minPositionRangeLimit  1
        #define OD_607b_2_positionRangeLimit_maxPositionRangeLimit  2

/*607c */
        #define OD_607c_homeOffset                                  0x607c

/*607d */
        #define OD_607d_softwarePositionLimit                       0x607d

        #define OD_607d_0_softwarePositionLimit_maxSubIndex         0
        #define OD_607d_1_softwarePositionLimit_minPositionLimit    1
        #define OD_607d_2_softwarePositionLimit_maxPositionLimit    2

/*607e */
        #define OD_607e_polarity                                    0x607e

/*607f */
        #define OD_607f_maxProfileVelocity                          0x607f

/*6080 */
        #define OD_6080_maxMotorSpeed                               0x6080

/*6098 */
        #define OD_6098_supportedHomingMethods                      0x6098

        #define OD_6098_0_supportedHomingMethods_maxSubIndex        0
        #define OD_6098_1_supportedHomingMethods_                   1
        #define OD_6098_2_supportedHomingMethods_                   2
        #define OD_6098_3_supportedHomingMethods_                   3
        #define OD_6098_4_supportedHomingMethods_                   4
        #define OD_6098_5_supportedHomingMethods_                   5
        #define OD_6098_6_supportedHomingMethods_                   6
        #define OD_6098_7_supportedHomingMethods_                   7
        #define OD_6098_8_supportedHomingMethods_                   8
        #define OD_6098_9_supportedHomingMethods_                   9
        #define OD_6098_10_supportedHomingMethods_                  10
        #define OD_6098_11_supportedHomingMethods_                  11
        #define OD_6098_12_supportedHomingMethods_                  12
        #define OD_6098_13_supportedHomingMethods_                  13
        #define OD_6098_14_supportedHomingMethods_                  14
        #define OD_6098_15_supportedHomingMethods_                  15
        #define OD_6098_16_supportedHomingMethods_                  16
        #define OD_6098_17_supportedHomingMethods_                  17
        #define OD_6098_18_supportedHomingMethods_                  18
        #define OD_6098_19_supportedHomingMethods_                  19
        #define OD_6098_20_supportedHomingMethods_                  20
        #define OD_6098_21_supportedHomingMethods_                  21
        #define OD_6098_22_supportedHomingMethods_                  22
        #define OD_6098_23_supportedHomingMethods_                  23
        #define OD_6098_24_supportedHomingMethods_                  24
        #define OD_6098_25_supportedHomingMethods_                  25
        #define OD_6098_26_supportedHomingMethods_                  26
        #define OD_6098_27_supportedHomingMethods_                  27
        #define OD_6098_28_supportedHomingMethods_                  28
        #define OD_6098_29_supportedHomingMethods_                  29
        #define OD_6098_30_supportedHomingMethods_                  30
        #define OD_6098_31_supportedHomingMethods_                  31
        #define OD_6098_32_supportedHomingMethods_                  32
        #define OD_6098_33_supportedHomingMethods_                  33
        #define OD_6098_34_supportedHomingMethods_                  34
        #define OD_6098_35_supportedHomingMethods_                  35
        #define OD_6098_36_supportedHomingMethods_                  36
        #define OD_6098_37_supportedHomingMethods_                  37
        #define OD_6098_38_supportedHomingMethods_                  38
        #define OD_6098_39_supportedHomingMethods_                  39
        #define OD_6098_40_supportedHomingMethods_                  40
        #define OD_6098_41_supportedHomingMethods_                  41
        #define OD_6098_42_supportedHomingMethods_                  42
        #define OD_6098_43_supportedHomingMethods_                  43
        #define OD_6098_44_supportedHomingMethods_                  44
        #define OD_6098_45_supportedHomingMethods_                  45
        #define OD_6098_46_supportedHomingMethods_                  46
        #define OD_6098_47_supportedHomingMethods_                  47
        #define OD_6098_48_supportedHomingMethods_                  48
        #define OD_6098_49_supportedHomingMethods_                  49
        #define OD_6098_50_supportedHomingMethods_                  50
        #define OD_6098_51_supportedHomingMethods_                  51
        #define OD_6098_52_supportedHomingMethods_                  52
        #define OD_6098_53_supportedHomingMethods_                  53
        #define OD_6098_54_supportedHomingMethods_                  54
        #define OD_6098_55_supportedHomingMethods_                  55
        #define OD_6098_56_supportedHomingMethods_                  56
        #define OD_6098_57_supportedHomingMethods_                  57
        #define OD_6098_58_supportedHomingMethods_                  58
        #define OD_6098_59_supportedHomingMethods_                  59
        #define OD_6098_60_supportedHomingMethods_                  60
        #define OD_6098_61_supportedHomingMethods_                  61
        #define OD_6098_62_supportedHomingMethods_                  62
        #define OD_6098_63_supportedHomingMethods_                  63
        #define OD_6098_64_supportedHomingMethods_                  64
        #define OD_6098_65_supportedHomingMethods_                  65
        #define OD_6098_66_supportedHomingMethods_                  66
        #define OD_6098_67_supportedHomingMethods_                  67
        #define OD_6098_68_supportedHomingMethods_                  68
        #define OD_6098_69_supportedHomingMethods_                  69
        #define OD_6098_70_supportedHomingMethods_                  70
        #define OD_6098_71_supportedHomingMethods_                  71
        #define OD_6098_72_supportedHomingMethods_                  72
        #define OD_6098_73_supportedHomingMethods_                  73
        #define OD_6098_74_supportedHomingMethods_                  74
        #define OD_6098_75_supportedHomingMethods_                  75
        #define OD_6098_76_supportedHomingMethods_                  76
        #define OD_6098_77_supportedHomingMethods_                  77
        #define OD_6098_78_supportedHomingMethods_                  78
        #define OD_6098_79_supportedHomingMethods_                  79
        #define OD_6098_80_supportedHomingMethods_                  80
        #define OD_6098_81_supportedHomingMethods_                  81
        #define OD_6098_82_supportedHomingMethods_                  82
        #define OD_6098_83_supportedHomingMethods_                  83
        #define OD_6098_84_supportedHomingMethods_                  84
        #define OD_6098_85_supportedHomingMethods_                  85
        #define OD_6098_86_supportedHomingMethods_                  86
        #define OD_6098_87_supportedHomingMethods_                  87
        #define OD_6098_88_supportedHomingMethods_                  88
        #define OD_6098_89_supportedHomingMethods_                  89
        #define OD_6098_90_supportedHomingMethods_                  90
        #define OD_6098_91_supportedHomingMethods_                  91
        #define OD_6098_92_supportedHomingMethods_                  92
        #define OD_6098_93_supportedHomingMethods_                  93
        #define OD_6098_94_supportedHomingMethods_                  94
        #define OD_6098_95_supportedHomingMethods_                  95
        #define OD_6098_96_supportedHomingMethods_                  96
        #define OD_6098_97_supportedHomingMethods_                  97
        #define OD_6098_98_supportedHomingMethods_                  98
        #define OD_6098_99_supportedHomingMethods_                  99
        #define OD_6098_100_supportedHomingMethods_                 100
        #define OD_6098_101_supportedHomingMethods_                 101
        #define OD_6098_102_supportedHomingMethods_                 102
        #define OD_6098_103_supportedHomingMethods_                 103
        #define OD_6098_104_supportedHomingMethods_                 104
        #define OD_6098_105_supportedHomingMethods_                 105
        #define OD_6098_106_supportedHomingMethods_                 106
        #define OD_6098_107_supportedHomingMethods_                 107
        #define OD_6098_108_supportedHomingMethods_                 108
        #define OD_6098_109_supportedHomingMethods_                 109
        #define OD_6098_110_supportedHomingMethods_                 110
        #define OD_6098_111_supportedHomingMethods_                 111
        #define OD_6098_112_supportedHomingMethods_                 112
        #define OD_6098_113_supportedHomingMethods_                 113
        #define OD_6098_114_supportedHomingMethods_                 114
        #define OD_6098_115_supportedHomingMethods_                 115
        #define OD_6098_116_supportedHomingMethods_                 116
        #define OD_6098_117_supportedHomingMethods_                 117
        #define OD_6098_118_supportedHomingMethods_                 118
        #define OD_6098_119_supportedHomingMethods_                 119
        #define OD_6098_120_supportedHomingMethods_                 120
        #define OD_6098_121_supportedHomingMethods_                 121
        #define OD_6098_122_supportedHomingMethods_                 122
        #define OD_6098_123_supportedHomingMethods_                 123
        #define OD_6098_124_supportedHomingMethods_                 124
        #define OD_6098_125_supportedHomingMethods_                 125
        #define OD_6098_126_supportedHomingMethods_                 126
        #define OD_6098_127_supportedHomingMethods_                 127
        #define OD_6098_128_supportedHomingMethods_                 128
        #define OD_6098_129_supportedHomingMethods_                 129
        #define OD_6098_130_supportedHomingMethods_                 130
        #define OD_6098_131_supportedHomingMethods_                 131
        #define OD_6098_132_supportedHomingMethods_                 132
        #define OD_6098_133_supportedHomingMethods_                 133
        #define OD_6098_134_supportedHomingMethods_                 134
        #define OD_6098_135_supportedHomingMethods_                 135
        #define OD_6098_136_supportedHomingMethods_                 136
        #define OD_6098_137_supportedHomingMethods_                 137
        #define OD_6098_138_supportedHomingMethods_                 138
        #define OD_6098_139_supportedHomingMethods_                 139
        #define OD_6098_140_supportedHomingMethods_                 140
        #define OD_6098_141_supportedHomingMethods_                 141
        #define OD_6098_142_supportedHomingMethods_                 142
        #define OD_6098_143_supportedHomingMethods_                 143
        #define OD_6098_144_supportedHomingMethods_                 144
        #define OD_6098_145_supportedHomingMethods_                 145
        #define OD_6098_146_supportedHomingMethods_                 146
        #define OD_6098_147_supportedHomingMethods_                 147
        #define OD_6098_148_supportedHomingMethods_                 148
        #define OD_6098_149_supportedHomingMethods_                 149
        #define OD_6098_150_supportedHomingMethods_                 150
        #define OD_6098_151_supportedHomingMethods_                 151
        #define OD_6098_152_supportedHomingMethods_                 152
        #define OD_6098_153_supportedHomingMethods_                 153
        #define OD_6098_154_supportedHomingMethods_                 154
        #define OD_6098_155_supportedHomingMethods_                 155
        #define OD_6098_156_supportedHomingMethods_                 156
        #define OD_6098_157_supportedHomingMethods_                 157
        #define OD_6098_158_supportedHomingMethods_                 158
        #define OD_6098_159_supportedHomingMethods_                 159
        #define OD_6098_160_supportedHomingMethods_                 160
        #define OD_6098_161_supportedHomingMethods_                 161
        #define OD_6098_162_supportedHomingMethods_                 162
        #define OD_6098_163_supportedHomingMethods_                 163
        #define OD_6098_164_supportedHomingMethods_                 164
        #define OD_6098_165_supportedHomingMethods_                 165
        #define OD_6098_166_supportedHomingMethods_                 166
        #define OD_6098_167_supportedHomingMethods_                 167
        #define OD_6098_168_supportedHomingMethods_                 168
        #define OD_6098_169_supportedHomingMethods_                 169
        #define OD_6098_170_supportedHomingMethods_                 170
        #define OD_6098_171_supportedHomingMethods_                 171
        #define OD_6098_172_supportedHomingMethods_                 172
        #define OD_6098_173_supportedHomingMethods_                 173
        #define OD_6098_174_supportedHomingMethods_                 174
        #define OD_6098_175_supportedHomingMethods_                 175
        #define OD_6098_176_supportedHomingMethods_                 176
        #define OD_6098_177_supportedHomingMethods_                 177
        #define OD_6098_178_supportedHomingMethods_                 178
        #define OD_6098_179_supportedHomingMethods_                 179
        #define OD_6098_180_supportedHomingMethods_                 180
        #define OD_6098_181_supportedHomingMethods_                 181
        #define OD_6098_182_supportedHomingMethods_                 182
        #define OD_6098_183_supportedHomingMethods_                 183
        #define OD_6098_184_supportedHomingMethods_                 184
        #define OD_6098_185_supportedHomingMethods_                 185
        #define OD_6098_186_supportedHomingMethods_                 186
        #define OD_6098_187_supportedHomingMethods_                 187
        #define OD_6098_188_supportedHomingMethods_                 188
        #define OD_6098_189_supportedHomingMethods_                 189
        #define OD_6098_190_supportedHomingMethods_                 190
        #define OD_6098_191_supportedHomingMethods_                 191
        #define OD_6098_192_supportedHomingMethods_                 192
        #define OD_6098_193_supportedHomingMethods_                 193
        #define OD_6098_194_supportedHomingMethods_                 194
        #define OD_6098_195_supportedHomingMethods_                 195
        #define OD_6098_196_supportedHomingMethods_                 196
        #define OD_6098_197_supportedHomingMethods_                 197
        #define OD_6098_198_supportedHomingMethods_                 198
        #define OD_6098_199_supportedHomingMethods_                 199
        #define OD_6098_200_supportedHomingMethods_                 200
        #define OD_6098_201_supportedHomingMethods_                 201
        #define OD_6098_202_supportedHomingMethods_                 202
        #define OD_6098_203_supportedHomingMethods_                 203
        #define OD_6098_204_supportedHomingMethods_                 204
        #define OD_6098_205_supportedHomingMethods_                 205
        #define OD_6098_206_supportedHomingMethods_                 206
        #define OD_6098_207_supportedHomingMethods_                 207
        #define OD_6098_208_supportedHomingMethods_                 208
        #define OD_6098_209_supportedHomingMethods_                 209
        #define OD_6098_210_supportedHomingMethods_                 210
        #define OD_6098_211_supportedHomingMethods_                 211
        #define OD_6098_212_supportedHomingMethods_                 212
        #define OD_6098_213_supportedHomingMethods_                 213
        #define OD_6098_214_supportedHomingMethods_                 214
        #define OD_6098_215_supportedHomingMethods_                 215
        #define OD_6098_216_supportedHomingMethods_                 216
        #define OD_6098_217_supportedHomingMethods_                 217
        #define OD_6098_218_supportedHomingMethods_                 218
        #define OD_6098_219_supportedHomingMethods_                 219
        #define OD_6098_220_supportedHomingMethods_                 220
        #define OD_6098_221_supportedHomingMethods_                 221
        #define OD_6098_222_supportedHomingMethods_                 222
        #define OD_6098_223_supportedHomingMethods_                 223
        #define OD_6098_224_supportedHomingMethods_                 224
        #define OD_6098_225_supportedHomingMethods_                 225
        #define OD_6098_226_supportedHomingMethods_                 226
        #define OD_6098_227_supportedHomingMethods_                 227
        #define OD_6098_228_supportedHomingMethods_                 228
        #define OD_6098_229_supportedHomingMethods_                 229
        #define OD_6098_230_supportedHomingMethods_                 230
        #define OD_6098_231_supportedHomingMethods_                 231
        #define OD_6098_232_supportedHomingMethods_                 232
        #define OD_6098_233_supportedHomingMethods_                 233
        #define OD_6098_234_supportedHomingMethods_                 234
        #define OD_6098_235_supportedHomingMethods_                 235
        #define OD_6098_236_supportedHomingMethods_                 236
        #define OD_6098_237_supportedHomingMethods_                 237
        #define OD_6098_238_supportedHomingMethods_                 238
        #define OD_6098_239_supportedHomingMethods_                 239
        #define OD_6098_240_supportedHomingMethods_                 240
        #define OD_6098_241_supportedHomingMethods_                 241
        #define OD_6098_242_supportedHomingMethods_                 242
        #define OD_6098_243_supportedHomingMethods_                 243
        #define OD_6098_244_supportedHomingMethods_                 244
        #define OD_6098_245_supportedHomingMethods_                 245
        #define OD_6098_246_supportedHomingMethods_                 246
        #define OD_6098_247_supportedHomingMethods_                 247
        #define OD_6098_248_supportedHomingMethods_                 248
        #define OD_6098_249_supportedHomingMethods_                 249
        #define OD_6098_250_supportedHomingMethods_                 250
        #define OD_6098_251_supportedHomingMethods_                 251
        #define OD_6098_252_supportedHomingMethods_                 252
        #define OD_6098_253_supportedHomingMethods_                 253
        #define OD_6098_254_supportedHomingMethods_                 254

/*60b0 */
        #define OD_60b0_positionOffset                              0x60b0

/*60b1 */
        #define OD_60b1_velocityOffset                              0x60b1

/*60b2 */
        #define OD_60b2_torqueOffset                                0x60b2

/*60c2 */
        #define OD_60c2_interpolationTimePeriod                     0x60c2

/*60da */
        #define OD_60da_synchronizationFunctionSettings             0x60da

/*60e0 */
        #define OD_60e0_positiveTorqueLimit                         0x60e0

/*60e1 */
        #define OD_60e1_negativeTorqueLimit                         0x60e1

/*60f4 */
        #define OD_60f4_followingErrorActualValue                   0x60f4

/*6502 */
        #define OD_6502_supportedDriveModes                         0x6502

/*******************************************************************************
   STRUCTURES FOR VARIABLES IN DIFFERENT MEMORY LOCATIONS
*******************************************************************************/
#define  CO_OD_FIRST_LAST_WORD     0x55 //Any value from 0x01 to 0xFE. If changed, EEPROM will be reinitialized.

/***** Structure for ROM variables ********************************************/
struct sCO_OD_ROM{
               UNSIGNED32     FirstWord;

/*1000      */ UNSIGNED32      deviceType;
/*1005      */ UNSIGNED32      COB_ID_SYNCMessage;
/*1006      */ UNSIGNED32      communicationCyclePeriod;
/*1007      */ UNSIGNED32      synchronousWindowLength;
/*1008      */ VISIBLE_STRING  manufacturerDeviceName[11];
/*1009      */ VISIBLE_STRING  manufacturerHardwareVersion[4];
/*100a      */ VISIBLE_STRING  manufacturerSoftwareVersion[4];
/*100c      */ UNSIGNED16      guardTime;
/*1012      */ UNSIGNED32      COB_ID_TIME;
/*1014      */ UNSIGNED32      COB_ID_EMCY;
/*1015      */ UNSIGNED16      inhibitTimeEMCY;
/*1016      */ UNSIGNED32      consumerHeartbeatTime[4];
/*1017      */ UNSIGNED16      producerHeartbeatTime;
/*1018      */ OD_identity_t   identity;
/*1019      */ UNSIGNED8       synchronousCounterOverflowValue;
/*1029      */ UNSIGNED8       errorBehavior[6];
/*1200      */ OD_SDOServerParameter_t SDOServerParameter[1];
/*1400      */ OD_RPDOCommunicationParameter_t RPDOCommunicationParameter[1];
/*1600      */ OD_RPDOMappingParameter_t RPDOMappingParameter[1];
/*1800      */ OD_TPDOCommunicationParameter_t TPDOCommunicationParameter[1];
/*1a00      */ OD_TPDOMappingParameter_t TPDOMappingParameter[1];

               UNSIGNED32     LastWord;
};

/***** Structure for RAM variables ********************************************/
struct sCO_OD_RAM{
               UNSIGNED32     FirstWord;

/*1001      */ UNSIGNED8       errorRegister;
/*1002      */ UNSIGNED32      manufacturerStatusRegister;
/*1003      */ UNSIGNED32      preDefinedErrorField[8];
/*100d      */ UNSIGNED8       lifeTimeFactor;
/*1010      */ UNSIGNED32      storeParameters[1];
/*1011      */ UNSIGNED32      restoreDefaultParameters[1];
/*1013      */ UNSIGNED32      highResolutionTimeStamp;
/*1280      */ OD_SDOClientParameter_t SDOClientParameter[1];
/*2100      */ OD_feedbackSensorPorts_t feedbackSensorPorts;
/*2200      */ OCTET_STRING    errorStatusBits[10];
/*603e      */ OD_txPDO_DataInvalid_t txPDO_DataInvalid;
/*6040      */ UNSIGNED16      driveControlWord;
/*6041      */ UNSIGNED16      driveStatusWord;
/*6060      */ INTEGER8        modesOfOperation;
/*6061      */ INTEGER8        modesOfOperationDisplay;
/*6064      */ INTEGER32       positionActualValue;
/*6065      */ INTEGER32       followingErrorWindow;
/*6066      */ INTEGER32       followingErrorTimeOut;
/*606c      */ INTEGER32       velocityActualValue;
/*6071      */ INTEGER16       targetTorque;
/*6077      */ INTEGER16       torqueActualValue;
/*6079      */ UNSIGNED32      DCLinkCircuitVoltage;
/*607a      */ INTEGER32       targetPosition;
/*6098      */ INTEGER8        supportedHomingMethods[254];
/*60b0      */ INTEGER32       positionOffset;
/*60b1      */ INTEGER32       velocityOffset;
/*60b2      */ INTEGER16       torqueOffset;
/*60da      */ UNSIGNED32      synchronizationFunctionSettings;
/*60e0      */ UNSIGNED16      positiveTorqueLimit;
/*60e1      */ UNSIGNED16      negativeTorqueLimit;
/*60f4      */ INTEGER32       followingErrorActualValue;

               UNSIGNED32     LastWord;
};

/***** Structure for EEPROM variables ********************************************/
struct sCO_OD_EEPROM{
               UNSIGNED32     FirstWord;

/*2001      */ INTEGER16       commutationAngleOffset;
/*2002      */ UNSIGNED16      positionControlStrategy;
/*2003      */ OD_motorSpecificSettings_t motorSpecificSettings;
/*2006      */ OD_protection_t protection;
/*2010      */ OD_torqueController_t torqueController;
/*2011      */ OD_velocityController_t velocityController;
/*2012      */ OD_positionController_t positionController;
/*2205      */ OD_incrementalEncoder1_t incrementalEncoder1;
/*6072      */ INTEGER16       maxTorque;
/*6073      */ UNSIGNED16      maxCurrent;
/*6075      */ INTEGER32       motorRatedCurrent;
/*6076      */ INTEGER32       motorRatedTorque;
/*607b      */ OD_positionRangeLimit_t positionRangeLimit;
/*607c      */ INTEGER32       homeOffset;
/*607d      */ OD_softwarePositionLimit_t softwarePositionLimit;
/*607e      */ UNSIGNED8       polarity;
/*607f      */ UNSIGNED32      maxProfileVelocity;
/*6080      */ UNSIGNED32      maxMotorSpeed;
/*60c2      */ INTEGER32       interpolationTimePeriod;
/*6502      */ UNSIGNED32      supportedDriveModes;

               UNSIGNED32     LastWord;
};

/***** Declaration of Object Dictionary variables *****************************/
extern struct sCO_OD_ROM CO_OD_ROM;

extern struct sCO_OD_RAM CO_OD_RAM;

extern struct sCO_OD_EEPROM CO_OD_EEPROM;

/*******************************************************************************
   ALIASES FOR OBJECT DICTIONARY VARIABLES
*******************************************************************************/
/*1000, Data Type: UNSIGNED32 */
        #define OD_deviceType                                       CO_OD_ROM.deviceType

/*1001, Data Type: UNSIGNED8 */
        #define OD_errorRegister                                    CO_OD_RAM.errorRegister

/*1002, Data Type: UNSIGNED32 */
        #define OD_manufacturerStatusRegister                       CO_OD_RAM.manufacturerStatusRegister

/*1003, Data Type: UNSIGNED32, Array[8] */
        #define OD_preDefinedErrorField                             CO_OD_RAM.preDefinedErrorField
        #define ODL_preDefinedErrorField_arrayLength                8
        #define ODA_preDefinedErrorField_standardErrorField         0

/*1005, Data Type: UNSIGNED32 */
        #define OD_COB_ID_SYNCMessage                               CO_OD_ROM.COB_ID_SYNCMessage

/*1006, Data Type: UNSIGNED32 */
        #define OD_communicationCyclePeriod                         CO_OD_ROM.communicationCyclePeriod

/*1007, Data Type: UNSIGNED32 */
        #define OD_synchronousWindowLength                          CO_OD_ROM.synchronousWindowLength

/*1008, Data Type: VISIBLE_STRING */
        #define OD_manufacturerDeviceName                           CO_OD_ROM.manufacturerDeviceName
        #define ODL_manufacturerDeviceName_stringLength             11

/*1009, Data Type: VISIBLE_STRING */
        #define OD_manufacturerHardwareVersion                      CO_OD_ROM.manufacturerHardwareVersion
        #define ODL_manufacturerHardwareVersion_stringLength        4

/*100a, Data Type: VISIBLE_STRING */
        #define OD_manufacturerSoftwareVersion                      CO_OD_ROM.manufacturerSoftwareVersion
        #define ODL_manufacturerSoftwareVersion_stringLength        4

/*100c, Data Type: UNSIGNED16 */
        #define OD_guardTime                                        CO_OD_ROM.guardTime

/*100d, Data Type: UNSIGNED8 */
        #define OD_lifeTimeFactor                                   CO_OD_RAM.lifeTimeFactor

/*1010, Data Type: UNSIGNED32, Array[1] */
        #define OD_storeParameters                                  CO_OD_RAM.storeParameters
        #define ODL_storeParameters_arrayLength                     1
        #define ODA_storeParameters_saveAllParameters               0

/*1011, Data Type: UNSIGNED32, Array[1] */
        #define OD_restoreDefaultParameters                         CO_OD_RAM.restoreDefaultParameters
        #define ODL_restoreDefaultParameters_arrayLength            1
        #define ODA_restoreDefaultParameters_restoreAllDefaultParameters 0

/*1012, Data Type: UNSIGNED32 */
        #define OD_COB_ID_TIME                                      CO_OD_ROM.COB_ID_TIME

/*1013, Data Type: UNSIGNED32 */
        #define OD_highResolutionTimeStamp                          CO_OD_RAM.highResolutionTimeStamp

/*1014, Data Type: UNSIGNED32 */
        #define OD_COB_ID_EMCY                                      CO_OD_ROM.COB_ID_EMCY

/*1015, Data Type: UNSIGNED16 */
        #define OD_inhibitTimeEMCY                                  CO_OD_ROM.inhibitTimeEMCY

/*1016, Data Type: UNSIGNED32, Array[4] */
        #define OD_consumerHeartbeatTime                            CO_OD_ROM.consumerHeartbeatTime
        #define ODL_consumerHeartbeatTime_arrayLength               4
        #define ODA_consumerHeartbeatTime_consumerHeartbeatTime     0

/*1017, Data Type: UNSIGNED16 */
        #define OD_producerHeartbeatTime                            CO_OD_ROM.producerHeartbeatTime

/*1018, Data Type: identity_t */
        #define OD_identity                                         CO_OD_ROM.identity

/*1019, Data Type: UNSIGNED8 */
        #define OD_synchronousCounterOverflowValue                  CO_OD_ROM.synchronousCounterOverflowValue

/*1029, Data Type: UNSIGNED8, Array[6] */
        #define OD_errorBehavior                                    CO_OD_ROM.errorBehavior
        #define ODL_errorBehavior_arrayLength                       6
        #define ODA_errorBehavior_communication                     0
        #define ODA_errorBehavior_communicationOther                1
        #define ODA_errorBehavior_communicationPassive              2
        #define ODA_errorBehavior_generic                           3
        #define ODA_errorBehavior_deviceProfile                     4
        #define ODA_errorBehavior_manufacturerSpecific              5

/*1200, Data Type: SDOServerParameter_t */
        #define OD_SDOServerParameter                               CO_OD_ROM.SDOServerParameter

/*1280, Data Type: SDOClientParameter_t */
        #define OD_SDOClientParameter                               CO_OD_RAM.SDOClientParameter

/*1400, Data Type: RPDOCommunicationParameter_t */
        #define OD_RPDOCommunicationParameter                       CO_OD_ROM.RPDOCommunicationParameter

/*1600, Data Type: RPDOMappingParameter_t */
        #define OD_RPDOMappingParameter                             CO_OD_ROM.RPDOMappingParameter

/*1800, Data Type: TPDOCommunicationParameter_t */
        #define OD_TPDOCommunicationParameter                       CO_OD_ROM.TPDOCommunicationParameter

/*1a00, Data Type: TPDOMappingParameter_t */
        #define OD_TPDOMappingParameter                             CO_OD_ROM.TPDOMappingParameter

/*2001, Data Type: INTEGER16 */
        #define OD_commutationAngleOffset                           CO_OD_EEPROM.commutationAngleOffset

/*2002, Data Type: UNSIGNED16 */
        #define OD_positionControlStrategy                          CO_OD_EEPROM.positionControlStrategy

/*2003, Data Type: motorSpecificSettings_t */
        #define OD_motorSpecificSettings                            CO_OD_EEPROM.motorSpecificSettings

/*2006, Data Type: protection_t */
        #define OD_protection                                       CO_OD_EEPROM.protection

/*2010, Data Type: torqueController_t */
        #define OD_torqueController                                 CO_OD_EEPROM.torqueController

/*2011, Data Type: velocityController_t */
        #define OD_velocityController                               CO_OD_EEPROM.velocityController

/*2012, Data Type: positionController_t */
        #define OD_positionController                               CO_OD_EEPROM.positionController

/*2100, Data Type: feedbackSensorPorts_t */
        #define OD_feedbackSensorPorts                              CO_OD_RAM.feedbackSensorPorts

/*2200, Data Type: OCTET_STRING, Array[10] */
        #define OD_errorStatusBits                                  CO_OD_RAM.errorStatusBits
        #define ODL_errorStatusBits_arrayLength                     10
        #define ODA_errorStatusBits_                                0

/*2205, Data Type: incrementalEncoder1_t */
        #define OD_incrementalEncoder1                              CO_OD_EEPROM.incrementalEncoder1

/*603e, Data Type: txPDO_DataInvalid_t */
        #define OD_txPDO_DataInvalid                                CO_OD_RAM.txPDO_DataInvalid

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

/*6065, Data Type: INTEGER32 */
        #define OD_followingErrorWindow                             CO_OD_RAM.followingErrorWindow

/*6066, Data Type: INTEGER32 */
        #define OD_followingErrorTimeOut                            CO_OD_RAM.followingErrorTimeOut

/*606c, Data Type: INTEGER32 */
        #define OD_velocityActualValue                              CO_OD_RAM.velocityActualValue

/*6071, Data Type: INTEGER16 */
        #define OD_targetTorque                                     CO_OD_RAM.targetTorque

/*6072, Data Type: INTEGER16 */
        #define OD_maxTorque                                        CO_OD_EEPROM.maxTorque

/*6073, Data Type: UNSIGNED16 */
        #define OD_maxCurrent                                       CO_OD_EEPROM.maxCurrent

/*6075, Data Type: INTEGER32 */
        #define OD_motorRatedCurrent                                CO_OD_EEPROM.motorRatedCurrent

/*6076, Data Type: INTEGER32 */
        #define OD_motorRatedTorque                                 CO_OD_EEPROM.motorRatedTorque

/*6077, Data Type: INTEGER16 */
        #define OD_torqueActualValue                                CO_OD_RAM.torqueActualValue

/*6079, Data Type: UNSIGNED32 */
        #define OD_DCLinkCircuitVoltage                             CO_OD_RAM.DCLinkCircuitVoltage

/*607a, Data Type: INTEGER32 */
        #define OD_targetPosition                                   CO_OD_RAM.targetPosition

/*607b, Data Type: positionRangeLimit_t */
        #define OD_positionRangeLimit                               CO_OD_EEPROM.positionRangeLimit

/*607c, Data Type: INTEGER32 */
        #define OD_homeOffset                                       CO_OD_EEPROM.homeOffset

/*607d, Data Type: softwarePositionLimit_t */
        #define OD_softwarePositionLimit                            CO_OD_EEPROM.softwarePositionLimit

/*607e, Data Type: UNSIGNED8 */
        #define OD_polarity                                         CO_OD_EEPROM.polarity

/*607f, Data Type: UNSIGNED32 */
        #define OD_maxProfileVelocity                               CO_OD_EEPROM.maxProfileVelocity

/*6080, Data Type: UNSIGNED32 */
        #define OD_maxMotorSpeed                                    CO_OD_EEPROM.maxMotorSpeed

/*6098, Data Type: INTEGER8, Array[254] */
        #define OD_supportedHomingMethods                           CO_OD_RAM.supportedHomingMethods
        #define ODL_supportedHomingMethods_arrayLength              254
        #define ODA_supportedHomingMethods_                         0

/*60b0, Data Type: INTEGER32 */
        #define OD_positionOffset                                   CO_OD_RAM.positionOffset

/*60b1, Data Type: INTEGER32 */
        #define OD_velocityOffset                                   CO_OD_RAM.velocityOffset

/*60b2, Data Type: INTEGER16 */
        #define OD_torqueOffset                                     CO_OD_RAM.torqueOffset

/*60c2, Data Type: INTEGER32 */
        #define OD_interpolationTimePeriod                          CO_OD_EEPROM.interpolationTimePeriod

/*60da, Data Type: UNSIGNED32 */
        #define OD_synchronizationFunctionSettings                  CO_OD_RAM.synchronizationFunctionSettings

/*60e0, Data Type: UNSIGNED16 */
        #define OD_positiveTorqueLimit                              CO_OD_RAM.positiveTorqueLimit

/*60e1, Data Type: UNSIGNED16 */
        #define OD_negativeTorqueLimit                              CO_OD_RAM.negativeTorqueLimit

/*60f4, Data Type: INTEGER32 */
        #define OD_followingErrorActualValue                        CO_OD_RAM.followingErrorActualValue

/*6502, Data Type: UNSIGNED32 */
        #define OD_supportedDriveModes                              CO_OD_EEPROM.supportedDriveModes

