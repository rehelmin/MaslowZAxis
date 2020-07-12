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
#include "CO_OD.h"
#include "CO_SDO.h"


/*******************************************************************************
   DEFINITION AND INITIALIZATION OF OBJECT DICTIONARY VARIABLES
*******************************************************************************/


/***** Definition for ROM variables ********************************************/
struct sCO_OD_ROM CO_OD_ROM = {
           CO_OD_FIRST_LAST_WORD,

/*1000*/ 0x0000L,
/*1005*/ 0x0080L,
/*1006*/ 0x0000L,
/*1007*/ 0x0000L,
/*1008*/ {'C', 'A', 'N', 'o', 'p', 'e', 'n', 'N', 'o', 'd', 'e'},
/*1009*/ {'3', '.', '0', '0'},
/*100a*/ {'3', '.', '0', '0'},
/*100c*/ 0x00,
/*1012*/ 0x0000L,
/*1014*/ 0x0080L,
/*1015*/ 0x64,
/*1016*/ {0x00000000, 0x00000000, 0x00000000, 0x00000000},
/*1017*/ 0x3e8,
/*1018*/ {0x4L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1019*/ 0x0L,
/*1029*/ {0x00, 0x00, 0x01, 0x00, 0x00, 0x00},
/*1200*/ {{0x2L, 0x0600L, 0x0580L}},
/*1400*/ {{0x2L, 0x0200L, 0xfeL}},
/*1600*/ {{0x6L, 0x60400010L, 0x60600008L, 0x60710010L, 0x607a0020L, 0x60ff0020L, 0x60b20010L, 0x0000L, 0x0000L}},
/*1800*/ {{0x6L, 0x0180L, 0xffL, 0x64, 0x0L, 0x00, 0x0L}},
/*1a00*/ {{0x2L, 0x60410020L, 0x60610020L, 0x60640020L, 0x606c0020L, 0x60770010L, 0x0000L, 0x0000L, 0x0000L}},

           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for RAM variables ********************************************/
struct sCO_OD_RAM CO_OD_RAM = {
           CO_OD_FIRST_LAST_WORD,

/*1001*/ 0x0L,
/*1002*/ 0x0000L,
/*1003*/ {0, 0, 0, 0, 0, 0, 0, 0},
/*100d*/ 0x0L,
/*1010*/ {0x00000003},
/*1011*/ {0x00000001},
/*1013*/ 0x0000L,
/*1280*/ {{0x3L, 0x0000L, 0x0000L, 0x0L}},
/*2100*/ {0x1L, 0x00},
/*2200*/ {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
/*603e*/ {0x5L, 0, 0, 0, 0, 0},
/*6040*/ 0x00,
/*6041*/ 0x00,
/*6060*/ 0x0,
/*6061*/ 0x0,
/*6064*/ 0x0000L,
/*6065*/ 0x0000L,
/*6066*/ 0x0000L,
/*606c*/ 0x0000L,
/*6071*/ 0x00,
/*6077*/ 0x00,
/*6079*/ 0x0000L,
/*607a*/ 0x0000L,
/*6098*/ {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
/*60b0*/ 0x0000L,
/*60b1*/ 0x0000L,
/*60b2*/ 0x00,
/*60da*/ 0x0000L,
/*60e0*/ 0x00,
/*60e1*/ 0x00,
/*60f4*/ 0x0000L,

           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for EEPROM variables ********************************************/
struct sCO_OD_EEPROM CO_OD_EEPROM = {
           CO_OD_FIRST_LAST_WORD,

/*2001*/ 0x00,
/*2002*/ 0x00,
/*2003*/ {0x5L, 0x0L, 0x0000L, 0x0000L, 0x0000L, 0},
/*2006*/ {0x3L, 0x0000L, 0x0000L, 0x0000L},
/*2010*/ {0x8L, 0, 0, 0, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*2011*/ {0x4L, 0, 0, 0, 0x7fffffffL},
/*2012*/ {0x8L, 0, 0, 0, 0x7fffffffL, 0, 0, 0, 0x7fffffffL},
/*2205*/ {0x5L, 0x0L, 0x0L, 0x0000L, 0x3e8, 0x0L},
/*6072*/ 0x00,
/*6073*/ 0x00,
/*6075*/ 0x0000L,
/*6076*/ 0x0000L,
/*607b*/ {0x2L, 0x0000L, 0x0000L},
/*607c*/ 0x0000L,
/*607d*/ {0x2L, 0x0000L, 0x0000L},
/*607e*/ 0x0L,
/*607f*/ 0x0000L,
/*6080*/ 0x0000L,
/*60c2*/ 0x0000L,
/*6502*/ 0x0000L,

           CO_OD_FIRST_LAST_WORD,
};




/*******************************************************************************
   STRUCTURES FOR RECORD TYPE OBJECTS
*******************************************************************************/


/*0x1018*/ const CO_OD_entryRecord_t OD_record1018[5] = {
           {(void*)&CO_OD_ROM.identity.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.identity.vendorID, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.identity.productCode, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.identity.revisionNumber, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.identity.serialNumber, 0x86, 0x4 },
};

/*0x1200*/ const CO_OD_entryRecord_t OD_record1200[3] = {
           {(void*)&CO_OD_ROM.SDOServerParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.SDOServerParameter[0].COB_IDClientToServer, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.SDOServerParameter[0].COB_IDServerToClient, 0x86, 0x4 },
};

/*0x1280*/ const CO_OD_entryRecord_t OD_record1280[4] = {
           {(void*)&CO_OD_RAM.SDOClientParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDClientToServer, 0x8e, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDServerToClient, 0x8e, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].nodeIDOfTheSDOServer, 0x0e, 0x1 },
};

/*0x1400*/ const CO_OD_entryRecord_t OD_record1400[3] = {
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].COB_IDUsedByRPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.RPDOCommunicationParameter[0].transmissionType, 0x0e, 0x1 },
};

/*0x1600*/ const CO_OD_entryRecord_t OD_record1600[9] = {
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].numberOfMappedObjects, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject1, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject2, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject3, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject4, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject5, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject6, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject7, 0x86, 0x4 },
           {(void*)&CO_OD_ROM.RPDOMappingParameter[0].mappedObject8, 0x86, 0x4 },
};

/*0x1800*/ const CO_OD_entryRecord_t OD_record1800[7] = {
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].COB_IDUsedByTPDO, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].transmissionType, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].inhibitTime, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].eventTimer, 0x8e, 0x2 },
           {(void*)&CO_OD_ROM.TPDOCommunicationParameter[0].SYNCStartValue, 0x0e, 0x1 },
};

/*0x1a00*/ const CO_OD_entryRecord_t OD_record1a00[9] = {
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].numberOfMappedObjects, 0x0e, 0x1 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject1, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject2, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject3, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject4, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject5, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject6, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject7, 0x8e, 0x4 },
           {(void*)&CO_OD_ROM.TPDOMappingParameter[0].mappedObject8, 0x8e, 0x4 },
};

/*0x2003*/ const CO_OD_entryRecord_t OD_record2003[6] = {
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.polePairs, 0x0e, 0x1 },
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.torqueConstant, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.phaseResistance, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.phaseInductance, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.motorSpecificSettings.motorPhasesInverted, 0x0e, 0x1 },
};

/*0x2006*/ const CO_OD_entryRecord_t OD_record2006[4] = {
           {(void*)&CO_OD_EEPROM.protection.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.protection.minDC_Voltage, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.protection.maxDC_Voltage, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.protection.maxCurrent, 0x8e, 0x4 },
};

/*0x2010*/ const CO_OD_entryRecord_t OD_record2010[9] = {
           {(void*)&CO_OD_EEPROM.torqueController.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.torqueController.controllerKp, 0x86, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.controllerKi, 0x86, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.controllerKd, 0x86, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.fieldWeakeningEnable, 0x86, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.fieldWeakeningPercentage, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.fieldWeakeningStartingSpeed, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.fieldWeakeningEndingSpeed, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.torqueController.commutationAngleMeasurementDelay, 0x8e, 0x4 },
};

/*0x2011*/ const CO_OD_entryRecord_t OD_record2011[5] = {
           {(void*)&CO_OD_EEPROM.velocityController.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.velocityController.controllerKp, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.velocityController.controllerKi, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.velocityController.controllerKd, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.velocityController.controllerIntegralLimit, 0x8e, 0x4 },
};

/*0x2012*/ const CO_OD_entryRecord_t OD_record2012[9] = {
           {(void*)&CO_OD_EEPROM.positionController.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.positionController.positionLoopKp, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.positionLoopKi, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.positionLoopKd, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.positionLoopIntegralLimit, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.velocityLoopKp, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.velocityLoopKi, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.velocityLoopKd, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionController.velocityLoopIntegralLimit, 0x8e, 0x4 },
};

/*0x2100*/ const CO_OD_entryRecord_t OD_record2100[2] = {
           {(void*)&CO_OD_RAM.feedbackSensorPorts.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.feedbackSensorPorts.sensorPort1, 0x8e, 0x2 },
};

/*0x2205*/ const CO_OD_entryRecord_t OD_record2205[6] = {
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.type, 0x0e, 0x1 },
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.function, 0x0e, 0x1 },
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.resolution, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.velocityCalculationPeriod, 0x8e, 0x2 },
           {(void*)&CO_OD_EEPROM.incrementalEncoder1.polarity, 0x0e, 0x1 },
};

/*0x603e*/ const CO_OD_entryRecord_t OD_record603e[6] = {
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.txPDO_DataInvalidOf1stPDO, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.txPDO_DataInvalidOf2ndPDO, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.txPDO_DataInvalidOf3rdPDO, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.txPDO_DataInvalidOf4thPDO, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.txPDO_DataInvalid.txPDO_DataInvalidOf5thPDO, 0x06, 0x1 },
};

/*0x607b*/ const CO_OD_entryRecord_t OD_record607b[3] = {
           {(void*)&CO_OD_EEPROM.positionRangeLimit.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.positionRangeLimit.minPositionRangeLimit, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.positionRangeLimit.maxPositionRangeLimit, 0x8e, 0x4 },
};

/*0x607d*/ const CO_OD_entryRecord_t OD_record607d[3] = {
           {(void*)&CO_OD_EEPROM.softwarePositionLimit.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_EEPROM.softwarePositionLimit.minPositionLimit, 0x8e, 0x4 },
           {(void*)&CO_OD_EEPROM.softwarePositionLimit.maxPositionLimit, 0x8e, 0x4 },
};

/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
const CO_OD_entry_t CO_OD[72] = {

{0x1000, 0x00, 0x85, 4, (void*)&CO_OD_ROM.deviceType},
{0x1001, 0x00, 0x26, 1, (void*)&CO_OD_RAM.errorRegister},
{0x1002, 0x00, 0xa6, 4, (void*)&CO_OD_RAM.manufacturerStatusRegister},
{0x1003, 0x08, 0x8e, 4, (void*)&CO_OD_RAM.preDefinedErrorField[0]},
{0x1005, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.COB_ID_SYNCMessage},
{0x1006, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.communicationCyclePeriod},
{0x1007, 0x00, 0x8d, 4, (void*)&CO_OD_ROM.synchronousWindowLength},
{0x1008, 0x00, 0x05, 11, (void*)&CO_OD_ROM.manufacturerDeviceName},
{0x1009, 0x00, 0x05, 4, (void*)&CO_OD_ROM.manufacturerHardwareVersion},
{0x100a, 0x00, 0x05, 4, (void*)&CO_OD_ROM.manufacturerSoftwareVersion},
{0x100c, 0x00, 0x85, 2, (void*)&CO_OD_ROM.guardTime},
{0x100d, 0x00, 0x06, 1, (void*)&CO_OD_RAM.lifeTimeFactor},
{0x1010, 0x01, 0x8e, 4, (void*)&CO_OD_RAM.storeParameters[0]},
{0x1011, 0x01, 0x8e, 4, (void*)&CO_OD_RAM.restoreDefaultParameters[0]},
{0x1012, 0x00, 0x85, 4, (void*)&CO_OD_ROM.COB_ID_TIME},
{0x1013, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.highResolutionTimeStamp},
{0x1014, 0x00, 0x85, 4, (void*)&CO_OD_ROM.COB_ID_EMCY},
{0x1015, 0x00, 0x8d, 2, (void*)&CO_OD_ROM.inhibitTimeEMCY},
{0x1016, 0x04, 0x8d, 4, (void*)&CO_OD_ROM.consumerHeartbeatTime[0]},
{0x1017, 0x00, 0x8d, 2, (void*)&CO_OD_ROM.producerHeartbeatTime},
{0x1018, 0x04, 0x00, 0, (void*)&OD_record1018},
{0x1019, 0x00, 0x0d, 1, (void*)&CO_OD_ROM.synchronousCounterOverflowValue},
{0x1029, 0x06, 0x0d, 1, (void*)&CO_OD_ROM.errorBehavior[0]},
{0x1200, 0x02, 0x00, 0, (void*)&OD_record1200},
{0x1280, 0x03, 0x00, 0, (void*)&OD_record1280},
{0x1400, 0x02, 0x00, 0, (void*)&OD_record1400},
{0x1600, 0x08, 0x00, 0, (void*)&OD_record1600},
{0x1800, 0x06, 0x00, 0, (void*)&OD_record1800},
{0x1a00, 0x08, 0x00, 0, (void*)&OD_record1a00},
{0x2001, 0x00, 0x8f, 2, (void*)&CO_OD_EEPROM.commutationAngleOffset},
{0x2002, 0x00, 0x8f, 2, (void*)&CO_OD_EEPROM.positionControlStrategy},
{0x2003, 0x05, 0x00, 1, (void*)&OD_record2003},
{0x2006, 0x03, 0x00, 1, (void*)&OD_record2006},
{0x2010, 0x08, 0x00, 1, (void*)&OD_record2010},
{0x2011, 0x04, 0x00, 1, (void*)&OD_record2011},
{0x2012, 0x08, 0x00, 1, (void*)&OD_record2012},
{0x2100, 0x01, 0x00, 1, (void*)&OD_record2100},
{0x2200, 0x0a, 0x0e, 0, (void*)&CO_OD_RAM.errorStatusBits[0]},
{0x2205, 0x05, 0x00, 1, (void*)&OD_record2205},
{0x603e, 0x05, 0x00, 1, (void*)&OD_record603e},
{0x6040, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.driveControlWord},
{0x6041, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.driveStatusWord},
{0x6060, 0x00, 0x3e, 1, (void*)&CO_OD_RAM.modesOfOperation},
{0x6061, 0x00, 0x0e, 1, (void*)&CO_OD_RAM.modesOfOperationDisplay},
{0x6064, 0x00, 0xa6, 4, (void*)&CO_OD_RAM.positionActualValue},
{0x6065, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.followingErrorWindow},
{0x6066, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.followingErrorTimeOut},
{0x606c, 0x00, 0xbe, 4, (void*)&CO_OD_RAM.velocityActualValue},
{0x6071, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.targetTorque},
{0x6072, 0x00, 0x8f, 2, (void*)&CO_OD_EEPROM.maxTorque},
{0x6073, 0x00, 0xbf, 2, (void*)&CO_OD_EEPROM.maxCurrent},
{0x6075, 0x00, 0x8f, 4, (void*)&CO_OD_EEPROM.motorRatedCurrent},
{0x6076, 0x00, 0x8f, 4, (void*)&CO_OD_EEPROM.motorRatedTorque},
{0x6077, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.torqueActualValue},
{0x6079, 0x00, 0xbe, 4, (void*)&CO_OD_RAM.DCLinkCircuitVoltage},
{0x607a, 0x00, 0xbe, 4, (void*)&CO_OD_RAM.targetPosition},
{0x607b, 0x02, 0x00, 1, (void*)&OD_record607b},
{0x607c, 0x00, 0xbf, 4, (void*)&CO_OD_EEPROM.homeOffset},
{0x607d, 0x02, 0x00, 1, (void*)&OD_record607d},
{0x607e, 0x00, 0x0f, 1, (void*)&CO_OD_EEPROM.polarity},
{0x607f, 0x00, 0xbf, 4, (void*)&CO_OD_EEPROM.maxProfileVelocity},
{0x6080, 0x00, 0xbf, 4, (void*)&CO_OD_EEPROM.maxMotorSpeed},
{0x6098, 0xfe, 0x0e, 1, (void*)&CO_OD_RAM.supportedHomingMethods[0]},
{0x60b0, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.positionOffset},
{0x60b1, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.velocityOffset},
{0x60b2, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.torqueOffset},
{0x60c2, 0x00, 0x8f, 4, (void*)&CO_OD_EEPROM.interpolationTimePeriod},
{0x60da, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.synchronizationFunctionSettings},
{0x60e0, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.positiveTorqueLimit},
{0x60e1, 0x00, 0xbe, 2, (void*)&CO_OD_RAM.negativeTorqueLimit},
{0x60f4, 0x00, 0x8e, 4, (void*)&CO_OD_RAM.followingErrorActualValue},
{0x6502, 0x00, 0xa7, 4, (void*)&CO_OD_EEPROM.supportedDriveModes},
};
