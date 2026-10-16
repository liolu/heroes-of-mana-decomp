#include "m2c.h"

M2C_UNK func_ov111_020e975c(s32);                   /* extern */
extern s32 data_ov111_020ec1a4;
extern M2C_UNK data_ov111_020f13a8;

void func_ov111_020e97ac(void) {
    s32 var_r5;
    s32 var_r6;

    func_ov111_020e975c(data_ov111_020ec1a4);
    func_ov111_020e975c(data_ov111_020ec1a4 + 0x410);
    func_ov111_020e975c(data_ov111_020ec1a4 + 0x820);
    func_ov111_020e975c(data_ov111_020ec1a4 + 0xC30);
    var_r5 = 0;
    var_r6 = 0;
    do {
        func_ov111_020e975c(data_ov111_020ec1a4 + 0x1040 + var_r6);
        var_r5 += 1;
        var_r6 += 0x410;
    } while (var_r5 < 5);
    M2C_FIELD(&data_ov111_020f13a8, s32 *, 0)   = (s32) (M2C_FIELD(&data_ov111_020f13a8, s32 *, 0) & ~1);
    M2C_FIELD(&data_ov111_020f13a8, s32 *, 0xC) = (s32) (M2C_FIELD(&data_ov111_020f13a8, s32 *, 0xC) & ~1);
}
