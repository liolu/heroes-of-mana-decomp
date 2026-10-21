#include "m2c.h"
s32 func_020158f4();
M2C_UNK PMi_SendPxiData(s32);
M2C_UNK PMi_SetLCDPower(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_0203a66c;
s32 func_02015b24(s32 arg0, u32 arg1) {
    if (func_020158f4() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0203a66c, s32 *, 4) = 0;
    PMi_SendPxiData(0x03006000);
    while (M2C_FIELD(&data_0203a66c, volatile s32 *, 4) == 0) {
    }
    M2C_FIELD(&data_0203a66c, s32 *, 4) = 0;
    M2C_FIELD(&data_0203a66c, s32 *, 8) = 0;
    PMi_SetLCDPower(0, 2, 0, 0);
    PMi_SendPxiData((arg0 & 0xFF) | 0x02006100);
    PMi_SendPxiData(((arg1 << 16) >> 16) | 0x01010000);
    return 0;
}
