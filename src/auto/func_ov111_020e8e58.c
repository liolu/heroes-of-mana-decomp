#include "m2c.h"

extern M2C_UNK data_ov111_020ec1bc;
extern void *data_ov111_020f1bd8;

void func_ov111_020e8e58(void) {
    if ((((u32) (M2C_FIELD(&data_ov111_020ec1bc, s32 *, 8) << 0x1F) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(&data_ov111_020ec1bc, s32 *, 0x48) << 0x1F) >> 0x1F) != 0)) {
        M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) = (u16) ((M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) & ~1) | 1);
        return;
    }
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 1);
}
