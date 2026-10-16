#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
M2C_UNK func_020038ac(s32);                         /* extern */
M2C_UNK func_02003948(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov000_02046418(M2C_UNK);               /* extern */
M2C_UNK func_ov117_020e16fc();                      /* extern */
M2C_UNK func_ov117_020e17c8();                      /* extern */
M2C_UNK func_ov117_020e1b48();                      /* extern */
M2C_UNK func_ov117_020e3468();                      /* extern */
s32 func_ov117_020e353c();                          /* extern */
M2C_UNK func_ov117_020e3730();                      /* extern */
M2C_UNK func_ov117_020e38b8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov117_020e395c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov117_020e3bc8();                      /* extern */
M2C_UNK func_ov117_020e9cd0();                      /* extern */
M2C_UNK func_ov117_020e9d74();                      /* extern */
extern void *data_0203678c;
extern M2C_UNK data_ov117_020f23e0;

void func_ov117_020e1500(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(data_0203678c, s32 *, 0xA0);
    if (temp_r4 != 0x26) {
        func_ov000_02046418(1);
        func_02003948(0x26, 0);
        func_020038ac(0x26);
        func_ov000_02046418(0);
    }
    func_ov117_020e16fc();
    func_ov117_020e17c8();
    if (func_ov117_020e353c() != 1) {
        return;
    }
    func_ov117_020e1b48();
    func_ov117_020e3468();
    func_ov117_020e9cd0();
    func_ov117_020e9d74();
    func_ov117_020e38b8(-0x10, 3);
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) = (s32) (M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) | 0x02000000);
    func_ov117_020e3bc8();
    func_ov117_020e395c(-0x10, 3);
    func_ov117_020e3730();
    func_ov117_020e16fc();
    GX_SetBankForBG(1);
    if (M2C_FIELD(data_0203678c, s32 *, 0xA0) == temp_r4) {
        return;
    }
    func_ov000_02046418(1);
    func_02003948(temp_r4, 0);
    func_020038ac(temp_r4);
    func_ov000_02046418(0);
}
