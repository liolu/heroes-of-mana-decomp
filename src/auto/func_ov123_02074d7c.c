/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, void *, M2C_UNK);       /* extern */
M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_0206c9a8(void *, s32, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_ov123_0207572c(void *, void *, M2C_UNK); /* extern */
s32 func_ov123_020757dc(void *, void *);            /* extern */
M2C_UNK func_ov123_02075d34(void *, void *, M2C_UNK); /* extern */
M2C_UNK func_ov123_02075e1c(void *, void *, M2C_UNK); /* extern */
extern void *(*data_ov123_020df1e4)(M2C_UNK);
extern M2C_UNK (*data_ov123_020df210)(void *);

void func_ov123_02074d7c(void *arg0) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0xC);
    temp_r0 = data_ov123_020df1e4(0x83);
    if (temp_r0 == NULL) {
        M2C_FIELD(temp_r5, s8 *, 0x455) = 9;
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 0) = 0x14;
    M2C_FIELD(temp_r0, s8 *, 1) = 3;
    M2C_FIELD(temp_r0, s8 *, 2) = 0;
    M2C_FIELD(temp_r0, s8 *, 3) = 0;
    M2C_FIELD(temp_r0, s8 *, 4) = 1;
    M2C_FIELD(temp_r0, s8 *, 5) = 1;
    MI_CpuFill8(temp_r5 + 0x1CC, 0, 8);
    M2C_FIELD(temp_r0, s8 *, 6)   = 0x16;
    M2C_FIELD(temp_r0, s8 *, 7)   = 3;
    M2C_FIELD(temp_r0, s8 *, 8)   = 0;
    M2C_FIELD(temp_r0, s8 *, 9)   = 0;
    M2C_FIELD(temp_r0, s8 *, 0xA) = 0x28;
    M2C_FIELD(temp_r0, s8 *, 0xB) = 0x14;
    M2C_FIELD(temp_r0, s8 *, 0xC) = 0;
    M2C_FIELD(temp_r0, s8 *, 0xD) = 0;
    M2C_FIELD(temp_r0, s8 *, 0xE) = 0x24;
    MI_CpuCopy8(temp_r5 + 0x3A4, temp_r5 + 0x3FC, 0x58);
    func_ov123_02075e1c(temp_r5, temp_r0 + 0xF, 0);
    MI_CpuCopy8(temp_r5 + 0x3FC, temp_r5 + 0x3A4, 0x58);
    MI_CpuCopy8(temp_r5 + 0x2EC, temp_r5 + 0x348, 0x5C);
    func_ov123_02075d34(temp_r5, temp_r0 + 0x1F, 0);
    MI_CpuCopy8(temp_r5 + 0x348, temp_r5 + 0x2EC, 0x5C);
    func_ov123_0207572c(temp_r5, temp_r0 + 0xB, 0x28);
    func_ov123_0206c9a8(temp_r0, func_ov123_020757dc(temp_r5, temp_r0 + 6) + 6, 0, 0, arg0);
    data_ov123_020df210(temp_r0);
}
