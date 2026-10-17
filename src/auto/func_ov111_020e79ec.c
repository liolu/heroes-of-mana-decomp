#include "m2c.h"

s32 G2_GetBG2ScrPtr();                              /* extern */
M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
s32 func_0200a840();                                /* extern */
extern M2C_UNK data_ov111_020ec2d4;
extern void *data_ov111_020f1bd8;

void func_ov111_020e79ec(s32 arg0) {
    s32 temp_r3;

    if (arg0 == 0) {
        MIi_CpuClearFast(0, G2_GetBG2ScrPtr(), 0x800);
    } else {
        MIi_CpuClearFast(0, func_0200a840(), 0x800);
    }
    temp_r3                                          = arg0 * 0x90;
    *(s32 *) ((u8 *) &data_ov111_020ec2d4 + temp_r3) = *(s32 *) ((u8 *) &data_ov111_020ec2d4 + temp_r3) & ~0x800;
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C)     = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 2);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E)     = (u16) ((M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) & ~1) | 1);
}
