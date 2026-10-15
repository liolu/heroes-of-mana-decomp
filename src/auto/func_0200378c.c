#include "m2c.h"

M2C_UNK func_020044b4(void *, s32, M2C_UNK);
extern void *data_0203678c;

void func_0200378c(s32 arg0, M2C_UNK arg1) {
    if (data_0203678c == NULL) {
        return;
    }
    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0x10) >> 0x1F) != 0) {
        func_020044b4(data_0203678c + 4, arg0, arg1);
    }
    M2C_FIELD(data_0203678c, s32 *, 0xAC) =
        (s32) ((M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x3F80) | ((u32) (arg0 << 0x19) >> 0x12));
}
