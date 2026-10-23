/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0207749c(s32);                   /* extern */
s32 func_ov123_020774d4();                          /* extern */
M2C_UNK func_ov123_020788f0(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_02078938(s32, s32, s32, s32);    /* extern */
M2C_UNK func_ov123_02078998(s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov123_02079028(M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov123_020793f0(s32, s32, s32, s32);    /* extern */
M2C_UNK func_ov123_020795a4(s32, s32, s32, s32);    /* extern */
M2C_UNK func_ov123_0207965c(s32, s32);              /* extern */
M2C_UNK func_ov123_02079718(s32, s32, s32, s32);    /* extern */
s32 func_ov123_020797c4(s32, s32);                  /* extern */
extern s32 (*data_ov123_020df1e4)(s32);
extern M2C_UNK (*data_ov123_020df210)(s32);

void func_ov123_02076258(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r9;
    s32 temp_r0_3;
    s32 temp_r7;
    s32 temp_r6;
    s32 temp_r11;
    s32 sp14;
    s32 temp_r0;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 sp10;
    s32 temp_r5;
    s32 temp_r1_2;
    s32 spC;
    s32 sp8;
    u32 temp_r0_2;
    s32 temp_r4;

    sp8 = arg0;
    if (arg2 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(arg2, s32 *, 0);
    if (temp_r0 == 0) {
        return;
    }
    temp_r0_2 = temp_r0 * 2;
    temp_r9   = ((s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1) + 1;
    temp_r0_3 = data_ov123_020df1e4(temp_r9 * 0x14);
    if (temp_r0_3 == 0) {
        return;
    }
    temp_r7   = temp_r0_3 + (temp_r9 * 2);
    temp_r6   = temp_r7 + (temp_r9 * 2);
    temp_r1   = temp_r6 + (temp_r9 * 2);
    spC       = temp_r1;
    temp_r1_2 = temp_r1 + (temp_r9 * 2);
    temp_r5   = temp_r1_2 + (temp_r9 * 2);
    sp10      = temp_r1_2;
    temp_r4   = temp_r5 + (temp_r9 * 2);
    temp_r11  = temp_r4 + (temp_r9 * 2);
    func_ov123_02078938(temp_r0_3, arg1, M2C_FIELD(arg2, s32 *, 0), temp_r9);
    func_ov123_02078938(temp_r7, M2C_FIELD(arg2, s32 *, 0x1C), M2C_FIELD(arg2, s32 *, 0x18), temp_r9);
    func_ov123_02078938(temp_r5, M2C_FIELD(arg2, s32 *, 0xC), M2C_FIELD(arg2, s32 *, 8), temp_r9);
    temp_r0_4 = func_ov123_020774d4();
    sp14      = temp_r0_4;
    func_ov123_02078998(spC, temp_r0_3, temp_r7, temp_r9, temp_r5);
    func_ov123_02078938(temp_r7, M2C_FIELD(arg2, s32 *, 0x24), M2C_FIELD(arg2, s32 *, 0x20), temp_r9);
    func_ov123_02078938(temp_r5, M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(arg2, s32 *, 0x10), temp_r9);
    func_ov123_02078998(sp10, temp_r0_3, temp_r7, temp_r9, temp_r5);
    func_ov123_0207749c(temp_r0_4);
    func_ov123_020795a4(temp_r0_3, temp_r1, sp10, temp_r9);
    func_ov123_02078938(temp_r7, M2C_FIELD(arg2, s32 *, 0x2C), M2C_FIELD(arg2, s32 *, 0x28), temp_r9);
    func_ov123_020793f0(temp_r6, temp_r0_3, temp_r7, temp_r9);
    func_ov123_02078938(temp_r7, M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(arg2, s32 *, 0x10), temp_r9);
    func_ov123_020793f0(temp_r0_3, temp_r6, temp_r7, temp_r9);
    func_ov123_02079718(temp_r6, temp_r0_3, sp10, temp_r9);
    func_ov123_02078938(temp_r7, M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 0), temp_r9);
    if (func_ov123_020797c4(temp_r6, temp_r9) < 0) {
        func_ov123_0207965c(temp_r6, temp_r9);
        func_ov123_02079028(0, temp_r6, temp_r7, temp_r4, temp_r9, temp_r11);
        func_ov123_020795a4(temp_r4, temp_r7, temp_r4, temp_r9);
    } else {
        func_ov123_02079028(0, temp_r6, temp_r7, temp_r4, temp_r9, temp_r11);
    }
    func_ov123_020788f0(sp8, temp_r4, 0x30, temp_r9);
    data_ov123_020df210(temp_r0_3);
}
