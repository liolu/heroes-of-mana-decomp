#include "m2c.h"

void *func_ov117_020ecdbc(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_ov117_020e7348(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u16 *temp_r0;

    temp_r0                          = func_ov117_020ecdbc(arg2, arg0, arg1, 2, 0, arg5, 0x380);
    temp_r0[0]                       = 0xC38A;
    *(u16 *) ((u8 *) temp_r0 + 0x40) = 0xC3AA;
    temp_r0                          = func_ov117_020ecdbc(arg3, arg0 + 3, arg1, 2, 0, arg5, 0x380);
    temp_r0[0]                       = 0xC38A;
    *(u16 *) ((u8 *) temp_r0 + 0x40) = 0xC3AA;
    func_ov117_020ecdbc(arg4, arg0 + 6, arg1, 2, 0, arg5, 0x380);
}
