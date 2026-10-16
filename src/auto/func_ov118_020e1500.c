#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
M2C_UNK func_ov118_020e157c();                      /* extern */
s32 func_ov118_020e15c0();                          /* extern */
M2C_UNK func_ov118_020e15c8();                      /* extern */
M2C_UNK func_ov118_020e16a8(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov118_020e1b10();                      /* extern */
M2C_UNK func_ov118_020e1b6c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov118_020e1c14(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov118_020e1cd4();                      /* extern */
M2C_UNK func_ov118_020e2c60();                      /* extern */
M2C_UNK func_ov118_020e2d0c();                      /* extern */
extern M2C_UNK data_ov118_020e31e0;

void func_ov118_020e1500(s32 arg0) {
    M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) =
        (s32) ((M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) & ~0xFF000) | ((u32) (arg0 << 0x18) >> 0xC));
    func_ov118_020e2c60();
    func_ov118_020e2d0c();
    if (func_ov118_020e15c0() != 1) {
        return;
    }
    func_ov118_020e157c();
    func_ov118_020e1b10();
    func_ov118_020e16a8(arg0, 0);
    func_ov118_020e1b6c(-0x10, 3);
    func_ov118_020e1cd4();
    func_ov118_020e1c14(-0x10, 3);
    func_ov118_020e15c8();
    func_ov118_020e2c60();
    GX_SetBankForBG(1);
}
