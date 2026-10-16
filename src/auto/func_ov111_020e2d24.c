#include "m2c.h"

M2C_UNK func_ov111_020e26c4();                      /* extern */
s32 func_ov111_020e2c00(M2C_UNK);                   /* extern */
M2C_UNK func_ov111_020e2c20(M2C_UNK);               /* extern */
M2C_UNK func_ov111_020e527c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov111_020e52d8();                      /* extern */
M2C_UNK func_ov111_020e5640(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov111_020e5664(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern s32 data_ov111_020ec1a8;
extern s32 data_ov111_020ec1b0;
extern M2C_UNK data_ov111_020ec1bc;
extern M2C_UNK data_ov111_020ec674;

void func_ov111_020e2d24(void) {
    s32 var_r4;

    func_ov111_020e26c4();
    M2C_FIELD(&data_ov111_020ec674, s32 *, 0) = 0x200;
    M2C_FIELD(&data_ov111_020ec674, s32 *, 8) = 1;
    func_ov111_020e52d8();
    if ((((u32) (M2C_FIELD(&data_ov111_020ec1bc, s32 *, 8) << 0x1C) >> 0x1F) != 0) &&
        (((u32) (M2C_FIELD(&data_ov111_020ec1bc, s32 *, 8) << 0x19) >> 0x1F) == 0)) {
        func_ov111_020e5640(0xE8, (((u32) (M2C_FIELD(&data_ov111_020ec1bc, s32 *, 8) << 0x11) >> 0x1F) * 0x48) + 0x38, 0x81,
                            0);
    }
    if ((((u32) (M2C_FIELD(&data_ov111_020ec674, s32 *, 0x410) << 0xC) >> 0x1F) != 0) &&
        (((u32) (data_ov111_020ec1a8 << 0x1F) >> 0x1F) == 0)) {
        if (((u32) (data_ov111_020ec1b0 << 0x1F) >> 0x1F) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
        func_ov111_020e5664(0x70, 0xA8, func_ov111_020e2c00(0) + 0x1B, 0, var_r4);
        func_ov111_020e5664(0x98, 0xA8, func_ov111_020e2c00(1) + 0x15, 0, var_r4);
        func_ov111_020e5664(0xC0, 0xA8, func_ov111_020e2c00(2) + 0x17, 0, var_r4);
        func_ov111_020e5664(0xE8, 0xA8, func_ov111_020e2c00(3) + 0x19, 0, var_r4);
    }
    func_ov111_020e2c20(0);
    func_ov111_020e527c(0, 0x400);
}
