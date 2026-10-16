#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
M2C_UNK func_ov123_020cf004(void *);                /* extern */
M2C_UNK func_ov123_020cf3e0(void *);                /* extern */
M2C_UNK func_ov123_020cfee0(void *);                /* extern */
M2C_UNK func_ov123_020d0538(void *);                /* extern */
M2C_UNK func_ov123_020d0f84(void *);                /* extern */
M2C_UNK func_ov123_020d1890(s32);                   /* extern */
M2C_UNK func_ov123_020d196c(void *);                /* extern */
M2C_UNK func_ov123_020d1a9c(void *);                /* extern */
s32 func_ov123_020d1cf8(s32, void *, void *, void *, void *, void *, void *, void *, void *); /* extern */
extern M2C_UNK data_ov123_020df160;

void *func_ov123_020d2c18(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020df160;
    func_ov123_020d1890(arg0 + 4);
    func_ov123_020d196c(arg0 + 0x18);
    func_ov123_020d1a9c(arg0 + 0xED4);
    func_ov123_020cf004(arg0 + 0xEFC);
    func_ov123_020cf3e0(arg0 + 0xF98);
    func_ov123_020cfee0(arg0 + 0x27BC);
    func_ov123_020d0538(arg0 + 0x7514);
    func_ov123_020d0f84(arg0 + 0x7530);
    var_r0 = func_0202f3f8(0x34);
    if (var_r0 != 0) {
        var_r0 = func_ov123_020d1cf8(var_r0, arg0 + 4, arg0 + 0x18, arg0 + 0xED4, arg0 + 0xEFC, arg0 + 0xF98, arg0 + 0x27BC,
                                     arg0 + 0x7514, arg0 + 0x7530);
    }
    M2C_FIELD(arg0, s32 *, 0x7AC4) = var_r0;
    return arg0;
}
