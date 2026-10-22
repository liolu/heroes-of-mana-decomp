/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Sub {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} Sub;

typedef struct Big {
    u8 pad0[0x1008];
    s32 f1008;
    u8 pad1[0x1124 - 0x100C];
    M2C_UNK *f1124;
    M2C_UNK *f1128;
    u8 pad2[0x19F8 - 0x112C];
    Sub sub;
} Big;

s32 func_0200cdbc(s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02024c28(M2C_UNK *);                       /* extern */
s32 func_ov123_020968ac(void *, void *, s32);       /* extern */
extern M2C_UNK data_ov123_020dc2b4;
extern M2C_UNK data_ov123_020dc308;
s32 func_ov123_02096be4(Big *arg0) {
    M2C_UNK *var_r6;
    s32 temp_r4;
    s32 temp_r8;
    Sub *temp_r5;
    s32 t;
    temp_r5 = &arg0->sub;
    if (arg0->f1008 == 0) {
        var_r6 = &data_ov123_020dc2b4;
    } else {
        var_r6 = &data_ov123_020dc308;
    }
    temp_r4 = func_02024c28(arg0->f1124);
    temp_r8 = func_02024c28(var_r6);
    t       = (temp_r8 - 4) + func_02024c28(arg0->f1128);
    if (func_ov123_020968ac(arg0, &arg0->sub, temp_r4 + t + 0x400) != 1) {
        return 1;
    }
    temp_r5->f4 = temp_r5->f4 + func_0200cdbc(temp_r5->f4, temp_r5->fC, var_r6, arg0->f1128, arg0->f1124);
    return 0;
}
