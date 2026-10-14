#include "m2c.h"

M2C_UNK func_0200e7e8(M2C_UNK *, u32);              /* extern */
M2C_UNK func_02010294(s32, M2C_UNK *, u32);         /* extern */
M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32); /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0203baa0;

s32 func_0201ade0(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020186e0(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_02010294(arg1, &data_0203baa0, arg2);
    func_0200e7e8(&data_0203baa0, arg2);
    func_020184e0(0x18, arg0);
    var_r0 = func_02018550(0x18, 5, &data_0203baa0, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
