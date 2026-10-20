#include "m2c.h"

M2C_UNK func_ov115_020e3664(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov115_020e36c0();                      /* extern */
M2C_UNK func_ov115_020e3700(s32, M2C_UNK, s32, s32); /* extern */
s32 func_ov115_020e3a2c(s32);                       /* extern */
M2C_UNK func_ov115_020e49f4();                      /* extern */
M2C_UNK func_ov115_020e5124(M2C_UNK);               /* extern */
typedef struct S9160 {
    u8 pad[0x85C];
    u32 low : 17;
    u32 bit17 : 1;
    u32 high : 14;
} S9160;
extern S9160 data_ov115_020e9160;

void func_ov115_020e51c8(void) {
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;

    M2C_FIELD(&data_ov115_020e9160, s32 *, 8) = 1;
    func_ov115_020e36c0();
    func_ov115_020e49f4();
    func_ov115_020e3700(0x74, 0x36, func_ov115_020e3a2c(0x10) + 0x1A, 0);
    func_ov115_020e3700(0xEC, 0x36, func_ov115_020e3a2c(0x14) + 0x1C, 0);
    var_r6 = 0;
    var_r7 = 0x90;
    do {
        func_ov115_020e3700(var_r7, 0x39, func_ov115_020e3a2c(var_r6 + 0x18) + 0x1E, 0);
        var_r6 += 1;
        var_r7 += 0x10;
    } while (var_r6 < 5);
    func_ov115_020e3700(0x74, 0x56, func_ov115_020e3a2c(0x11) + 0x1A, 0);
    func_ov115_020e3700(0xEC, 0x56, func_ov115_020e3a2c(0x15) + 0x1C, 0);
    var_r7_2 = 0;
    var_r6_2 = 0x90;
    do {
        func_ov115_020e3700(var_r6_2, 0x59, func_ov115_020e3a2c(var_r7_2 + 0x1D) + 0x1E, 0);
        var_r7_2 += 1;
        var_r6_2 += 0x10;
    } while (var_r7_2 < 5);
    func_ov115_020e3700(0x74, 0x76, func_ov115_020e3a2c(0x12) + 0x1A, 0);
    func_ov115_020e3700(0xEC, 0x76, func_ov115_020e3a2c(0x16) + 0x1C, 0);
    var_r7_3 = 0;
    var_r6_3 = 0x90;
    do {
        func_ov115_020e3700(var_r6_3, 0x79, func_ov115_020e3a2c(var_r7_3 + 0x22) + 0x1E, 0);
        var_r7_3 += 1;
        var_r6_3 += 0x10;
    } while (var_r7_3 < 5);
    func_ov115_020e3700(0x74, 0x96, func_ov115_020e3a2c(0x13) + 0x1A, 0);
    func_ov115_020e3700(0xEC, 0x96, func_ov115_020e3a2c(0x17) + 0x1C, 0);
    func_ov115_020e3700(0xB0, 0x99, func_ov115_020e3a2c(0x27) + 0x20, 0);
    func_ov115_020e3700(0x80, 0xB0, func_ov115_020e3a2c(0x28) + 0x26, 0);
    func_ov115_020e3664(0, 0x400);
    if (data_ov115_020e9160.bit17 == 0) {
        return;
    }
    data_ov115_020e9160.bit17 = 0;
    func_ov115_020e5124(0);
}
