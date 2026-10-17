#include "m2c.h"

M2C_UNK func_ov122_020536ac(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov122_02053f44(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK data_ov122_02061d48;

void func_ov122_02053790(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp14[20];
    s32 temp_r0;

    func_ov122_020536ac(sp14, 5);
    temp_r0             = (arg2 - 0x32) * 2;
    *(s32 *) 0x04000010 = (*(s32 *) ((u8 *) &data_ov122_02061d48 + (temp_r0 * 4)) & 0x1FF) |
                          (0x01FF0000 & (*(s32 *) ((u8 *) &data_ov122_02061d48 + ((temp_r0 + 1) * 4)) << 0x10));
    func_ov122_02053f44(4, arg0, arg1, arg2, arg3, arg4, sp14, arg5, 0x12);
}
