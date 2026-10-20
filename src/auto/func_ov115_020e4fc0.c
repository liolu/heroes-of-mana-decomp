#include "m2c.h"

M2C_UNK func_ov115_020e3690(M2C_UNK, M2C_UNK);
M2C_UNK func_ov115_020e36c0();

typedef struct {
    u8 pad[0x85C];
    u32 lo : 18;
    u32 flag : 1;
    u32 hi : 13;
} S;

extern S data_ov115_020e9160;

void func_ov115_020e4fc0(void) {
    M2C_FIELD(&data_ov115_020e9160, s32 *, 4) = 1;
    M2C_FIELD(&data_ov115_020e9160, s32 *, 0xC) = 0x200;
    func_ov115_020e36c0();
    func_ov115_020e3690(0, 0x400);
    if (data_ov115_020e9160.flag) {
        data_ov115_020e9160.flag = 0;
    }
}