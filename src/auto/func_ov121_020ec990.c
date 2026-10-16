#include "m2c.h"

M2C_UNK func_ov121_020f166c();                      /* extern */
extern M2C_UNK data_ov121_020f5d60;
extern M2C_UNK data_ov121_020f6d60;

u32 func_ov121_020ec990(void) {
    s32 temp_r4;
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x2B8) << 0x1D) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    temp_r4 = M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA40);
    if (temp_r4 != 1) {
        return (u32) &data_ov121_020f6d60;
    }
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA40) = 1;
    func_ov121_020f166c();
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA40) = temp_r4;
    M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x2B8) = (s32) (M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x2B8) & ~4);
    return (u32) &data_ov121_020f5d60;
}
