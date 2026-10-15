#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, M2C_UNK);

M2C_UNK MIi_CpuCopy16(s32, void *, u16);

M2C_UNK MIi_CpuClearFast(M2C_UNK, void *, M2C_UNK);

s32 func_0201d214(s32, void *, M2C_UNK);

s32 mystrlen(s32);

void MBi_MakeGameInfo(void *arg0, void *arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r7;

    MIi_CpuClear16(0, arg0, 0x4C0);
    M2C_FIELD(arg0, s8 *, 0x4B2) = 0;
    if (func_0201d214(M2C_FIELD(arg1, s32 *, 0xC), arg0, 1) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    if (func_0201d214(M2C_FIELD(arg1, s32 *, 0x10), arg0, 0) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r7 | var_r0) != 0) {
        M2C_FIELD(arg0, s8 *, 0x4B2) = 1;
        MIi_CpuClearFast(0, arg0, 0x220);
    }
    M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    if (arg2 != 0) {
        MIi_CpuCopy16(arg2, arg0 + 0x220, 0x16U);
    }
    M2C_FIELD(arg0, u8 *, 0x236) = (u8) M2C_FIELD(arg1, u8 *, 0x18);
    MIi_CpuCopy16(M2C_FIELD(arg1, s32 *, 4), arg0 + 0x238, (u16) (mystrlen(M2C_FIELD(arg1, s32 *, 4)) * 2));
    MIi_CpuCopy16(M2C_FIELD(arg1, s32 *, 8), arg0 + 0x298, 0xC0U);
    M2C_FIELD(arg0, s8 *, 0x358)  = 1;
    M2C_FIELD(arg0, s16 *, 0x35A) = 1;
    M2C_FIELD(arg0, s16 *, 0x4B0) = 1;
}
