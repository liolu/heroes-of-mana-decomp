#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
s32 func_0200a7ec();                                /* extern */
s32 func_0200a840();                                /* extern */
s32 func_ov122_02054d04(s32);                       /* extern */
M2C_UNK func_ov122_0205d9d0(s32, s32);              /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_0205da7c(s32 arg0, s32 arg1) {
    MIi_CpuClear16(0, func_0200a7ec(), 0x800);
    MIi_CpuClear16(0, func_0200a840(), 0x800);
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDEC) = arg0;
    if (arg1 == 1) {
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xE30) = 3;
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xE34) = 0x12;
    } else {
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xE30) = 2;
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xE34) = func_ov122_02054d04(arg0);
    }
    func_ov122_0205d9d0(arg0, arg1);
}
