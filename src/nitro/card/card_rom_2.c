#include "m2c.h"

M2C_UNK CARDi_WaitAsync();
extern M2C_UNK CARDi_ReadCard;

void CARD_WaitRomAsync(void) {
    CARDi_WaitAsync();
}

M2C_UNK *CARDi_GetRomAccessor(void) {
    return &CARDi_ReadCard;
}
