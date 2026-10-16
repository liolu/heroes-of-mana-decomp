#include "m2c.h"

M2C_UNK func_ov122_020548fc(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov122_02054e24(s32, M2C_UNK, s32, s32); /* extern */

void func_ov122_020583c0(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_r8;

    if ((arg2 == 0) && (arg3 == 0) && (arg4 == 0)) {
        if (arg5 == 0xF) {
            var_r8 = 0x9C;
        } else {
            var_r8 = 0x9D;
        }
        func_ov122_02054e24(arg0, arg1, var_r8, arg6);
        func_ov122_02054e24(arg0 + 8, arg1, var_r8, arg6);
        func_ov122_02054e24(arg0 + 0x10, arg1, arg5 + 0xA, arg6);
        func_ov122_02054e24(arg0 + 0x16, arg1, var_r8, arg6);
        func_ov122_02054e24(arg0 + 0x1E, arg1, var_r8, arg6);
        func_ov122_02054e24(arg0 + 0x26, arg1, arg5 + 0xA, arg6);
        func_ov122_02054e24(arg0 + 0x2C, arg1, var_r8, arg6);
        func_ov122_02054e24(arg0 + 0x34, arg1, var_r8, arg6);
        return;
    }
    func_ov122_020548fc(arg2, arg0, arg1, 2, 0, arg6, arg5);
    func_ov122_02054e24(arg0 + 0x10, arg1, arg5 + 0xA, arg6);
    func_ov122_020548fc(arg3, arg0 + 0x16, arg1, 2, 0, arg6, arg5);
    func_ov122_02054e24(arg0 + 0x26, arg1, arg5 + 0xA, arg6);
    func_ov122_020548fc(arg4, arg0 + 0x2C, arg1, 2, 0, arg6, arg5);
}
