/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_ov123_02075c48(void *);                /* extern */
M2C_UNK func_ov123_02077840(void *, M2C_UNK *);     /* extern */
M2C_UNK func_ov123_020778b4(void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_02077974(void *);                /* extern */
M2C_UNK func_ov123_02077e80(void *, M2C_UNK *);     /* extern */
M2C_UNK func_ov123_02077ef4(void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_02077fb4(void *);                /* extern */
M2C_UNK func_ov123_020787b4(void *, void *, s32);   /* extern */

s32 func_ov123_020757dc(void *arg0, M2C_UNK *arg1) {
    u8 sp0[44];
    M2C_UNK *temp_r8;
    s32 var_r4;
    u16 temp_r0;
    void *temp_r7;
    void *temp_r7_2;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x32);
    var_r4  = (M2C_FIELD(arg1, u8 *, 3) << 8) + M2C_FIELD(arg1, u8 *, 4);
    temp_r8 = ((void *) ((u8 *) arg1 + 5)) + var_r4;
    switch (temp_r0) {                              /* irregular */
        case 4:
            temp_r7 = ((void *) ((u8 *) arg0 + 0x3FC));
            func_ov123_02077974(temp_r7);
            func_ov123_020778b4(temp_r7, M2C_FIELD(arg0, M2C_UNK **, 0xBC), 0x10);
            MI_CpuFill8((void *) sp0, 0x36, 0x30);
            func_ov123_020778b4(temp_r7, (void *) sp0, 0x30);
            func_ov123_020778b4(temp_r7, ((void *) ((u8 *) arg0 + 0x1CC)), 8);
            func_ov123_020778b4(temp_r7, arg1, 1);
            func_ov123_020778b4(temp_r7, ((void *) ((u8 *) arg1 + 3)), var_r4 + 2);
            func_ov123_02077840(temp_r7, temp_r8);
            func_ov123_02077974(temp_r7);
            func_ov123_020778b4(temp_r7, M2C_FIELD(arg0, M2C_UNK **, 0xBC), 0x10);
            MI_CpuFill8((void *) sp0, 0x5C, 0x30);
            func_ov123_020778b4(temp_r7, (void *) sp0, 0x30);
            func_ov123_020778b4(temp_r7, temp_r8, 0x10);
            func_ov123_02077840(temp_r7, temp_r8);
            var_r4 += 0x10;
            break;
        case 5:
            temp_r7_2 = ((void *) ((u8 *) arg0 + 0x348));
            func_ov123_02077fb4(temp_r7_2);
            func_ov123_02077ef4(temp_r7_2, M2C_FIELD(arg0, M2C_UNK **, 0xBC), 0x14);
            MI_CpuFill8((void *) sp0, 0x36, 0x28);
            func_ov123_02077ef4(temp_r7_2, (void *) sp0, 0x28);
            func_ov123_02077ef4(temp_r7_2, ((void *) ((u8 *) arg0 + 0x1CC)), 8);
            func_ov123_02077ef4(temp_r7_2, arg1, 1);
            func_ov123_02077ef4(temp_r7_2, ((void *) ((u8 *) arg1 + 3)), var_r4 + 2);
            func_ov123_02077e80(temp_r7_2, temp_r8);
            func_ov123_02077fb4(temp_r7_2);
            func_ov123_02077ef4(temp_r7_2, M2C_FIELD(arg0, M2C_UNK **, 0xBC), 0x14);
            MI_CpuFill8((void *) sp0, 0x5C, 0x28);
            func_ov123_02077ef4(temp_r7_2, (void *) sp0, 0x28);
            func_ov123_02077ef4(temp_r7_2, temp_r8, 0x14);
            func_ov123_02077e80(temp_r7_2, temp_r8);
            var_r4 += 0x14;
            break;
    }
    M2C_FIELD(arg1, u8 *, 3) = (u8) (var_r4 >> 8);
    M2C_FIELD(arg1, u8 *, 4) = (u8) var_r4;
    func_ov123_020787b4(((void *) ((u8 *) arg0 + 0xC8)), ((void *) ((u8 *) arg1 + 5)), var_r4);
    func_ov123_02075c48(((void *) ((u8 *) arg0 + 0x1D4)));
    return var_r4 + 5;
}
