#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov117_020f0ee0;

u32 func_ov117_020e36a4(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x42C) << 0xF) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x21C));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x220));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x224));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x228));
    M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x42C) = (s32) (M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x42C) & ~0x10000);
    return (u32) &data_ov117_020f0ee0;
}
