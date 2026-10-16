#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
M2C_UNK func_02003734(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200378c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020038ac(M2C_UNK);                     /* extern */
M2C_UNK func_02003948(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_ov000_02046418(M2C_UNK);               /* extern */
M2C_UNK func_ov113_020e16c8();                      /* extern */
s32 func_ov113_020e1740();                          /* extern */
M2C_UNK func_ov113_020e17f8();                      /* extern */
M2C_UNK func_ov113_020e18a8();                      /* extern */
M2C_UNK func_ov113_020e1d60();                      /* extern */
M2C_UNK func_ov113_020e1e0c();                      /* extern */
M2C_UNK func_ov113_020e21bc();                      /* extern */
M2C_UNK func_ov113_020e22bc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov113_020e22cc(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov113_020e24bc();                          /* extern */
M2C_UNK func_ov113_020e2ed8();                      /* extern */
extern void *data_0203678c;
extern M2C_UNK data_ov113_020e4944;

s32 func_ov113_020e15ec(void) {
    s32 temp_r4;

    func_ov113_020e1d60();
    func_ov113_020e1e0c();
    if (M2C_FIELD(data_0203678c, s32 *, 0xA0) != 3) {
        func_ov000_02046418(1);
        func_02003948(3, 0);
        func_020038ac(3);
    }
    func_02003734(0x7F, 0xA);
    func_0200378c(0x7F, 0xA);
    if (func_ov113_020e1740() != 1) {
        return -1;
    }
    M2C_FIELD(&data_ov113_020e4944, s32 *, 0x410) = (s32) (M2C_FIELD(&data_ov113_020e4944, s32 *, 0x410) & ~0x2000);
    func_ov113_020e16c8();
    func_ov113_020e21bc();
    func_ov113_020e18a8();
    M2C_FIELD(&data_ov113_020e4944, s32 *, 0x410) = (s32) ((u16) M2C_FIELD(&data_ov113_020e4944, s32 *, 0x410) | 0x10000);
    func_ov113_020e2ed8();
    func_ov113_020e22bc(-0x10, 3);
    temp_r4 = func_ov113_020e24bc();
    func_ov113_020e22cc(-0x10, 3);
    func_ov113_020e17f8();
    func_ov113_020e1d60();
    GX_SetBankForBG(1);
    return temp_r4;
}
