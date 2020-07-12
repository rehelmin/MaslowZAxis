#include "OD.h"

CO_OD_entry_t OD[12] = {
	{0x6040, 0x00, 0x00, 2, (void*)&OD_RAM.controlWord},
	{0x6041, 0x00, 0x00, 2, (void*)&OD_RAM.statusWord},
	{0x6064, 0x00, 0x00, 4, (void*)&OD_RAM.positionActualValue},
	{0x607c, 0x00, 0x00, 4, (void*)&OD_EEPROM.homeOffset},

}

uint16_t CO_OD_find(CO_SDO_t *SDO, uint16_t index){
    /* Fast search in ordered Object Dictionary. If indexes are mixed, this won't work. */
    /* If Object Dictionary has up to 2^N entries, then N is max number of loop passes. */
    uint16_t cur, min, max;
    const CO_OD_entry_t* object;

    min = 0U;
    max = SDO->ODSize - 1U;
    while(min < max){
        cur = (min + max) / 2;
        object = &SDO->OD[cur];
        /* Is object matched */
        if(index == object->index){
            return cur;
        }
        if(index < object->index){
            max = cur;
            if(max) max--;
        }
        else
            min = cur + 1U;
    }

    if(min == max){
        object = &SDO->OD[min];
        /* Is object matched */
        if(index == object->index){
            return min;
        }
    }

    return 0xFFFFU;  /* object does not exist in OD */
}

/******************************************************************************/
void* CO_OD_getDataPointer(CO_SDO_t *SDO, uint16_t entryNo, uint8_t subIndex){
    const CO_OD_entry_t* object = &SDO->OD[entryNo];

    if(entryNo == 0xFFFFU){
        return 0;
    }

    if(object->maxSubIndex == 0U){   /* Object type is Var */
        return object->pData;
    }
    else if(object->attribute != 0U){/* Object type is Array */
        if(subIndex==0){
            /* this is the data, for the subIndex 0 in the array */
            return (void*) &object->maxSubIndex;
        }
        else if(object->pData == 0){
            /* data type is domain */
            return 0;
        }
        else{
            return (void*)(((int8_t*)object->pData) + ((subIndex-1) * object->length));
        }
    }
    else{                            /* Object Type is Record */
        return ((const CO_OD_entryRecord_t*)(object->pData))[subIndex].pData;
    }
}