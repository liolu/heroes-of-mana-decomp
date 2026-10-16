#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
s32 func_0200a80c();                                /* extern */
extern M2C_UNK data_ov113_020e4944;

void func_ov113_020e2ed8(void) {
    u32 temp_r0;

    temp_r0 = (u32) M2C_FIELD(&data_ov113_020e4944, u32 *, 0x410) >> 0x10;
    switch (temp_r0) {                              /* irregular */
        case 1:
            MIi_CpuClear16(0, func_0200a80c(), 0x800);
            return;
        case 2:
            MIi_CpuCopy16(M2C_FIELD(&data_ov113_020e4944, s32 *, 0x424), func_0200a80c(), 0x800);
            return;
    }
}
