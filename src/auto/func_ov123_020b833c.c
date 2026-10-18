/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae100(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b742c();                      /* extern */
M2C_UNK func_ov123_020b74c8();                      /* extern */
M2C_UNK func_ov123_020b7554(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b76b8();                      /* extern */
M2C_UNK func_ov123_020c2384();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020ca6e8(M2C_UNK *);                 /* extern */
s32 func_ov123_020ca7c0(M2C_UNK *);                 /* extern */
s32 func_ov123_020ca898(M2C_UNK);                   /* extern */
s32 func_ov123_020ca8bc(M2C_UNK);                   /* extern */
s32 func_ov123_020ca8e0(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov123_020d7ef8;
extern M2C_UNK data_ov123_020d845c;
extern s8 data_ov123_020e464c;
extern void *data_ov123_020e4654;

void func_ov123_020b833c(void) {
    M2C_UNK *var_r5_2;
    s32 var_r5;
    s32 var_r4_2;
    M2C_UNK *var_r4;

    if (M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) != 0) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x57) != 0) {
        return;
    }
    if (func_ov123_020ca7c0(&data_ov123_020d845c) != 0) {
        M2C_FIELD(data_ov123_020e4654, s8 *, 0x50) = -1;
        var_r4                                     = &data_ov123_020d7ef8;
        var_r5                                     = 0;
    loop_6:
        if (func_ov123_020ca7c0(var_r4) != 0) {
            if (var_r5 < 4) {
                M2C_FIELD(data_ov123_020e4654, s8 *, 0x50) = (s8) var_r5;
                goto block_11;
            }
            func_ov123_020ae100(1);
            data_ov123_020e464c = (s8) var_r5;
            func_ov123_020b76b8();
            return;
        }
        var_r5 += 1;
        var_r4 = (void *) ((u8 *) (u8 *) var_r4 + 8);
        if ((u32) var_r5 >= 5U) {
            goto block_11;
        }
        goto loop_6;
    }
block_11:
    if (func_ov123_020ca6e8(&data_ov123_020d845c) != 0) {
        var_r5_2 = &data_ov123_020d7ef8;
        var_r4_2 = 0;
    loop_13:
        if (func_ov123_020ca6e8(var_r5_2) != 0) {
            if (M2C_FIELD(data_ov123_020e4654, s8 *, 0x50) == var_r4_2) {
                if (var_r4_2 >= (s32) M2C_FIELD(data_ov123_020e4654, u8 *, 0x51)) {
                    func_ov123_020c36bc(9);
                    goto block_19;
                }
                func_ov123_020ae100(1);
                data_ov123_020e464c = (s8) var_r4_2;
                func_ov123_020b76b8();
                return;
            }
            goto block_19;
        }
        var_r4_2 += 1;
        var_r5_2 = (void *) ((u8 *) (u8 *) var_r5_2 + 8);
        if (var_r4_2 >= 4) {
            goto block_19;
        }
        goto loop_13;
    }
block_19:
    if (func_ov123_020ca8e0(1) != 0) {
        func_ov123_020ae100(1);
        func_ov123_020c2384();
        return;
    }
    if (func_ov123_020ca8e0(2) != 0) {
        func_ov123_020ae100(0);
        return;
    }
    if (func_ov123_020ca8bc(0x200) != 0) {
        func_ov123_020b742c();
        return;
    }
    if (func_ov123_020ca898(0x200) != 0) {
        M2C_FIELD(data_ov123_020e4654, s8 *, 0x59) = 0;
        return;
    }
    if (func_ov123_020ca8bc(0x100) != 0) {
        func_ov123_020b74c8();
        return;
    }
    if (func_ov123_020ca898(0x100) != 0) {
        M2C_FIELD(data_ov123_020e4654, s8 *, 0x59) = 0;
        return;
    }
    if (func_ov123_020ca8bc(0x40) != 0) {
        func_ov123_020b7554(1);
        return;
    }
    if (func_ov123_020ca898(0x40) != 0) {
        M2C_FIELD(data_ov123_020e4654, s8 *, 0x59) = 0;
        return;
    }
    if (func_ov123_020ca8bc(0x80) != 0) {
        func_ov123_020b7554(3);
        return;
    }
    if (func_ov123_020ca898(0x80) != 0) {
        M2C_FIELD(data_ov123_020e4654, s8 *, 0x59) = 0;
    }
}
