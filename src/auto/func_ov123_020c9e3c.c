#include "m2c.h"

s32 func_ov123_02069d34(s8, s8);                    /* extern */
M2C_UNK func_ov123_02069eac(void *, s32, s8, s8, s32); /* extern */
void *func_ov123_020c9410(s32);                     /* extern */
s32 func_ov123_020cb050(s32, s32, M2C_UNK, s32 *);  /* extern */
extern void *data_ov123_020e4724;

void *func_ov123_020c9e3c(s32 arg0, s8 arg1, s8 arg2, M2C_UNK arg3, s32 *arg4, s32 arg5) {
    s32 sp4;
    s32 off;
    s32 f24;
    void *temp_r0;

    temp_r0 = func_ov123_020c9410(M2C_FIELD(data_ov123_020e4724, s32 *, 0x788));
    M2C_FIELD(temp_r0, s8 *, 0x36) = arg1;
    M2C_FIELD(temp_r0, s8 *, 0x37) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x30) = func_ov123_020cb050(arg0, arg1 * arg2, arg3, &sp4);
    M2C_FIELD(temp_r0, s16 *, 0x34) = (s16) sp4;
    *arg4 = func_ov123_02069d34(arg1, arg2);
    off = sp4 << 7;
    func_ov123_02069eac(temp_r0, (arg0 == 1 ? 0x06600000 : 0x06400000) + off, arg1, arg2, 4);
    M2C_FIELD(temp_r0, M2C_UNK (**)(void *, M2C_UNK), 0x18)(temp_r0, 0);
    f24 = (arg5 * 0xC) + (s32) data_ov123_020e4724;
    M2C_FIELD(temp_r0, void **, 0x20) = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = f24;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 1;
    return temp_r0;
}
