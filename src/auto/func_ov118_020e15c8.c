#include "m2c.h"

u32 OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_ov118_020e31e0;

u32 func_ov118_020e15c8(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) << 0x14) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x10));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x18));
    return OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x1C));
}
