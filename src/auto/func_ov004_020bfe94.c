#include "m2c.h"

M2C_UNK func_ov004_020bc2b8(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc2bc(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc3a8(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc3bc(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc3e4(M2C_UNK, void *);       /* extern */
M2C_UNK func_ov004_020bc48c(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc500(M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov004_020bc558(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov004_020bc5cc(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov004_020bc640(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov004_020bc6b4(M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov004_020bc70c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov004_020bfe94(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    void **temp_r0;

    func_ov004_020bc2b8(arg1);
    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        var_r1 = 3;
    } else {
        var_r1 = 2;
    }
    func_ov004_020bc70c(arg1, var_r1);
    func_ov004_020bc3a8(arg1);
    func_ov004_020bc500(arg1, M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        func_ov004_020bc3e4(arg1, arg0 + 0x38);
    }
    if (M2C_FIELD(arg0, u8 *, 0x35) != 0) {
        func_ov004_020bc48c(arg1);
    }
    func_ov004_020bc558(arg1, M2C_FIELD(arg0, s32 *, 0x1C));
    func_ov004_020bc5cc(arg1, M2C_FIELD(arg0, s32 *, 0x20));
    func_ov004_020bc640(arg1, M2C_FIELD(arg0, s32 *, 0x24));
    func_ov004_020bc6b4(arg1, M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x60);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x64)(temp_r0, arg1);
    func_ov004_020bc3bc(arg1);
    func_ov004_020bc2bc(arg1);
}
