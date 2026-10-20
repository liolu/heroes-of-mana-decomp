#include "m2c.h"

M2C_UNK func_ov115_020e3664(M2C_UNK, M2C_UNK);
M2C_UNK func_ov115_020e36c0();
M2C_UNK func_ov115_020e3700(M2C_UNK, M2C_UNK, s32, M2C_UNK);
u32 func_ov115_020e3990(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_ov115_020e3a2c(M2C_UNK);
M2C_UNK func_ov115_020e3d08();
M2C_UNK func_ov115_020e43a8(M2C_UNK *);
M2C_UNK func_ov115_020e49f4();
M2C_UNK func_ov115_020e4d54(M2C_UNK);
M2C_UNK func_ov115_020e4d68(u32);
extern M2C_UNK data_ov115_020e8d3c;
extern M2C_UNK data_ov115_020e9148;

typedef struct {
    u8 pad[0x85C];
    u32 lo : 17;
    u32 flag : 1;
    u32 hi : 14;
} S;

extern S data_ov115_020e9160;

void func_ov115_020e5008(void) {
    u32 var_r0;

    M2C_FIELD(&data_ov115_020e9160, s32 *, 8) = 1;
    func_ov115_020e36c0();
    func_ov115_020e49f4();
    func_ov115_020e3700(0xF4, 0x2C, func_ov115_020e3a2c(0x2B) + 5, 0);
    func_ov115_020e3700(0xF4, 0xB4, func_ov115_020e3a2c(0x2C) + 7, 0);
    func_ov115_020e43a8(&data_ov115_020e9148);
    var_r0 = (u32) (M2C_FIELD(&data_ov115_020e8d3c, s32 *, 0x414) << 0x17) >> 0x1F;
    if (var_r0 != 0) {
        func_ov115_020e3990(0, 0x10, 0);
        var_r0 = func_ov115_020e3990(0, 0xA0, 0x100);
    }
    func_ov115_020e4d68(var_r0);
    func_ov115_020e3664(0, 0x400);
    if (data_ov115_020e9160.flag == 0) {
        return;
    }
    data_ov115_020e9160.flag = 0;
    func_ov115_020e4d54(0);
    func_ov115_020e3d08();
}
