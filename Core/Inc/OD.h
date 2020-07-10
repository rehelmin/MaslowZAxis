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
   uint8_t      maxSubIndex;
   uint32_t     COB_IDUsedByTPDO;
   uint8_t      transmissionType;
   uint16_t     inhibitTime;
   uint8_t      comparabilityEntry;
   uint16_t     eventTimer;
   uint8_t      SYNCStartValue;
}              OD_TPDOCommunicationParameter_t;

/*1a00    */ typedef struct {
   uint8_t      numberOfMappedObjects;
   uint32_t     mappedObject1;
   uint32_t     mappedObject2;
   uint32_t     mappedObject3;
   uint32_t     mappedObject4;
   uint32_t     mappedObject5;
   uint32_t     mappedObject6;
   uint32_t     mappedObject7;
   uint32_t     mappedObject8;
}              OD_TPDOMappingParameter_t;

/*2012    */ typedef struct {
   uint8_t           maxSubIndex;
   float32_t         positionLoopKp;
   float32_t         positionLoopKi;
   float32_t         positionLoopKd;
   float32_t         positionLoopIntegralLimit;
   float32_t         velocityLoopKp;
   float32_t         velocityLoopKi;
   float32_t         velocityLoopKd;
   float32_t         velocityLoopIntegralLimit;
}              OD_positionController_t;

struct OD_EEPROM {
	uint32_t encoderPpr;                          // counts
	float32_t gearRatio;
	uint32_t softUpperEotCounts;                  // counts
	uint32_t softLowerEotCounts;                  // counts
	OD_positionController_t positionController;
  uint32_t homeOffset;                          // counts
}

struct OD_RAM {
	uint16_t controlWord;
	uint16_t statusWord;
	uint32_t targetPosition;
  uint32_t positionActualValue;
  uint32_t velocityActualValue;
  uint32_t torqueActualValue;
  uint32_t positiveTorqueLimit;
  uint32_t negativeTorqueLimit;
  uint32_t errorRegister;
}

/**
 * Object for one entry
 */
typedef struct {
    /** The index of Object from 0x1000 to 0xFFFF */
    uint16_t            index;
    /** Number of (sub-objects - 1). If Object Type is variable, then
    maxSubIndex is 0, otherwise maxSubIndex is equal or greater than 1. */
    uint8_t             maxSubIndex;
    /** If Object Type is record, attribute is set to zero. Attribute for
    each member is then set in special array with members of type
    CO_OD_entryRecord_t. If Object Type is Array, attribute is common for
    all array members. See #CO_SDO_OD_attributes_t. */
    uint16_t            attribute;
    /** If Object Type is Variable, length is the length of variable in bytes.
    If Object Type is Array, length is the length of one array member.
    If Object Type is Record, length is zero. Length for each member is
    set in special array with members of type CO_OD_entryRecord_t.
    If Object Type is Domain, length is zero. Length is specified
    by application in @ref CO_SDO_OD_function. */
    uint16_t            length;
    /** If Object Type is Variable, pData is pointer to data.
    If Object Type is Array, pData is pointer to data. Data doesn't
    include Sub-Object 0.
    If object type is Record, pData is pointer to special array
    with members of type CO_OD_entryRecord_t.
    If object type is Domain, pData is null. */
    void               *pData;
}CO_OD_entry_t;

/**
 * Find object with specific index in Object dictionary.
 *
 * @param SDO This object.
 * @param index Index of the object in Object dictionary.
 *
 * @return Sequence number of the @ref CO_SDO_objectDictionary entry, 0xFFFF if not found.
 */
uint16_t CO_OD_find(CO_SDO_t *SDO, uint16_t index);

/**
 * Get pointer to data of the given object with specific subIndex.
 *
 * If Object Type is array and subIndex is zero, function returns pointer to
 * object->maxSubIndex variable.
 *
 * @param SDO This object.
 * @param entryNo Sequence number of OD entry as returned from CO_OD_find().
 * @param subIndex Sub-index of the object in Object dictionary.
 *
 * @return Pointer to the variable in @ref CO_SDO_objectDictionary.
 */
void* CO_OD_getDataPointer(CO_SDO_t *SDO, uint16_t entryNo, uint8_t subIndex);