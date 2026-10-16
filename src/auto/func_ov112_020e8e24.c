#include "m2c.h"

M2C_UNK func_ov112_020e8a84();                      /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov112_020ec588;
extern M2C_UNK data_ov112_020ec988;

void func_ov112_020e8e24(void) {
    s32 temp_r2;

    temp_r2 = (M2C_FIELD(&data_ov112_020ec988, u16 *, 0x80) * 0x34) + M2C_FIELD(data_0203673c, s32 *, 0x24);
    M2C_FIELD(temp_r2, s32 *, 8)    = (s32) (M2C_FIELD(temp_r2, s32 *, 8) & ~0xF);
    M2C_FIELD(temp_r2, s16 *, 0x16) = 0;
    func_ov112_020e8a84();
    M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) = (s32) (M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) | 4);
}
