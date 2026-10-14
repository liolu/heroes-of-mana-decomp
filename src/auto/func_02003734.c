#include "m2c.h"

M2C_UNK func_020044b4(void *, s32, M2C_UNK);        /* extern */
extern void *data_0203678c;

void func_02003734(s32 arg0, M2C_UNK arg1) {
    if (data_0203678c == NULL) {
        return;
    }
    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0xF) >> 0x1F) != 0) {
        func_020044b4(data_0203678c, arg0, arg1);
    }
    M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) ((M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x7F) | (arg0 & 0x7F));
}
