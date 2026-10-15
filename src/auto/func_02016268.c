#include "engine.h"
#include "m2c.h"

M2C_UNK func_020158f4(void);
void PMi_SendPxiData(M2C_UNK);

extern M2C_UNK data_0203a66c;

s32 func_02016268(s32 arg0, s32 arg1, s32 arg2) {
    if (func_020158f4() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0203a66c, s32 *, 0x1C) = arg1;
    M2C_FIELD(&data_0203a66c, s32 *, 0x20) = arg2;
    PMi_SendPxiData((u8) arg0 | 0x03006600);
    return 0;
}
