#include "m2c.h"

M2C_UNK func_0200cdbc(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_02024c28(M2C_UNK *);                       /* extern */
s32 func_02028c88(void *);                          /* extern */
s32 func_ov123_020969c4(M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_ov123_02096af4(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020dc03c;
extern M2C_UNK data_ov123_020dc048;
extern M2C_UNK data_ov123_020dc050;
extern M2C_UNK data_ov123_020dc058;
extern M2C_UNK data_ov123_020dc060;
extern M2C_UNK data_ov123_020dc068;
extern M2C_UNK data_ov123_020dc070;
extern M2C_UNK data_ov123_020dc078;
extern M2C_UNK data_ov123_020dc080;
extern M2C_UNK data_ov123_020dc088;
extern M2C_UNK data_ov123_020dc090;
extern M2C_UNK data_ov123_020dc098;
extern M2C_UNK data_ov123_020dc0a0;
extern M2C_UNK data_ov123_020dc0a8;
extern M2C_UNK data_ov123_020dc0b0;
extern M2C_UNK data_ov123_020dc0b8;
extern M2C_UNK data_ov123_020dc0d0;
extern M2C_UNK data_ov123_020dc0dc;

s32 func_ov123_02095a88(M2C_UNK arg0, M2C_UNK *arg1, s32 arg2) {
    u8 sp4[36];

    func_0200cdbc((M2C_UNK *) sp4, 0x21, &data_ov123_020dc03c, 1, 3);
    if (func_ov123_020969c4(arg0, &data_ov123_020dc048, sp4, func_02024c28((M2C_UNK *) sp4)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc050, arg1, func_02024c28(arg1)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc058, (u8 *) arg1 + 0xE, func_02024c28((u8 *) arg1 + 0xE)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc060, (u8 *) arg1 + 0x41, func_02024c28((u8 *) arg1 + 0x41)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc068, (u8 *) arg1 + 0x6F, func_02024c28((u8 *) arg1 + 0x6F)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc070, (u8 *) arg1 + 0x15, func_02024c28((u8 *) arg1 + 0x15)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc078, (u8 *) arg1 + 0x1A, func_02024c28((u8 *) arg1 + 0x1A)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc080, (u8 *) arg1 + 0x1D, func_02024c28((u8 *) arg1 + 0x1D)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc088, (u8 *) arg1 + 0x1F, func_02024c28((u8 *) arg1 + 0x1F)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc090, (u8 *) arg1 + 0x2C, func_02024c28((u8 *) arg1 + 0x2C)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc098, (u8 *) arg1 + 0x2F, func_02024c28((u8 *) arg1 + 0x2F)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc0a0, (u8 *) arg1 + 0x34, func_02024c28((u8 *) arg1 + 0x34)) != 0) {
        return 0;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dc0a8, (u8 *) arg1 + 0x7E, func_02028c88((u8 *) arg1 + 0x7E) * 2) != 0) {
        return 0;
    }
    if ((arg2 == 1) &&
        (func_ov123_020969c4(arg0, &data_ov123_020dc0b0, (u8 *) arg1 + 0x4E, func_02024c28((u8 *) arg1 + 0x4E)) != 0)) {
        return 0;
    }
    func_0200cdbc(sp4, 0x21, &data_ov123_020dc0b8, 1, 3);
    if (func_ov123_02096af4(arg0, &data_ov123_020dc0d0, sp4) != 0) {
        return 0;
    }
    if (func_ov123_02096af4(arg0, &data_ov123_020dc0dc, (u8 *) arg1 + 0x15) == 0) {
        return 1;
    }
    return 0;
}
