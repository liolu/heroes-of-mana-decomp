#include "m2c.h"

void func_ov122_020548fc(s32, u8 *, s32, s32, s32, s32, s32);
void func_ov122_02054e24(u8 *, s32, s32, s32);

void func_ov122_02058570(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg2 == 0) {
        func_ov122_02054e24(arg0, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 8, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x10, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x18, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x24, arg1, 0x8E, 0);
        func_ov122_02054e24(arg0 + 0x30, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x38, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x44, arg1, 0x8E, 0);
        func_ov122_02054e24(arg0 + 0x50, arg1, 0x9D, 0);
        func_ov122_02054e24(arg0 + 0x58, arg1, 0x9D, 0);
        return;
    }
    func_ov122_020548fc(arg2, arg0, arg1, 4, 0, 0, 0x83);
    func_ov122_02054e24(arg0 + 0x24, arg1, 0x8E, 0);
    func_ov122_020548fc(arg3, arg0 + 0x30, arg1, 2, 0, 0, 0x83);
    func_ov122_02054e24(arg0 + 0x44, arg1, 0x8E, 0);
    func_ov122_020548fc(arg4, arg0 + 0x50, arg1, 2, 0, 0, 0x83);
}
