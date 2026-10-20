#include "m2c.h"

M2C_UNK func_ov123_02085ed0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_ov123_0208637c(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 sscanf(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020db1d0;
extern M2C_UNK data_ov123_020db1d8;

typedef struct {
    u8 buf[0x40];
    s32 a;
    s32 b;
    s32 c;
    s32 pad;
} S;

void func_ov123_02085e4c(M2C_UNK arg0, M2C_UNK arg1, void *arg2, M2C_UNK arg3) {
    S s;

    if (func_ov123_0208637c(arg3, &data_ov123_020db1d0, s.buf, 0x40) == 0) {
        return;
    }
    if (sscanf(s.buf, &data_ov123_020db1d8, &s.a, &s.b, &s.c) != 3) {
        return;
    }
    func_ov123_02085ed0(arg0, &s.a, arg1, 2, 0);
}
