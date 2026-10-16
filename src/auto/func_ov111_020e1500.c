#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
M2C_UNK func_020038ac(s32);                         /* extern */
M2C_UNK func_02003948(s32, M2C_UNK);                /* extern */
s32 func_02004510(s32);                             /* extern */
M2C_UNK func_ov000_02046418(M2C_UNK);               /* extern */
M2C_UNK func_ov111_020e15e4();                      /* extern */
s32 func_ov111_020e191c();                          /* extern */
M2C_UNK func_ov111_020e19d8();                      /* extern */
M2C_UNK func_ov111_020e3008();                      /* extern */
M2C_UNK func_ov111_020e3ac8(M2C_UNK, M2C_UNK *);    /* extern */
M2C_UNK func_ov111_020e48ac();                      /* extern */
M2C_UNK func_ov111_020e4958(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov111_020e49d4(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov111_020e4cfc();                          /* extern */
M2C_UNK func_ov111_020e57a0(M2C_UNK);               /* extern */
M2C_UNK func_ov111_020eaf64();                      /* extern */
M2C_UNK func_ov111_020eb030();                      /* extern */
extern void *data_0203678c;
extern M2C_UNK data_ov111_020ec3f4;
extern M2C_UNK data_ov111_020ec674;

s32 func_ov111_020e1500(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    func_ov111_020eaf64();
    func_ov111_020eb030();
    func_ov111_020e48ac();
    if (func_02004510(M2C_FIELD(data_0203678c, s32 *, 0xA0)) == 0) {
        func_02003948(M2C_FIELD(data_0203678c, s32 *, 0xA0), 0);
        func_020038ac(M2C_FIELD(data_0203678c, s32 *, 0xA0));
        func_ov000_02046418(0);
    }
    if (func_ov111_020e191c() != 1) {
        return -1;
    }
    func_ov111_020e15e4();
    M2C_FIELD(&data_ov111_020ec674, s32 *, 0x410) =
        (s32) ((M2C_FIELD(&data_ov111_020ec674, s32 *, 0x410) & ~0x400000) | ((u32) (arg1 << 0x1F) >> 9));
    func_ov111_020e3ac8(2, &data_ov111_020ec3f4);
    func_ov111_020e3008();
    func_ov111_020e57a0(arg0);
    func_ov111_020e4958(-0x10, 3);
    temp_r4 = func_ov111_020e4cfc();
    func_ov111_020e49d4(-0x10, 3);
    func_ov111_020e19d8();
    func_ov111_020eaf64();
    GX_SetBankForBG(1);
    return temp_r4;
}
