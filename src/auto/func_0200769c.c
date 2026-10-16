/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK NNS_FndAppendListObject(M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK OS_InitMutex(M2C_UNK *);                    /* extern */
M2C_UNK func_02004a00(M2C_UNK *);                   /* extern */
M2C_UNK func_020072d4(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020075c8(M2C_UNK);                     /* extern */
M2C_UNK func_02007a78(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02013190(void *);                      /* extern */
extern s32 data_02037704;
extern M2C_UNK *data_0203770c;
extern M2C_UNK data_02037710;
extern M2C_UNK data_0203771c;
extern M2C_UNK data_02037734;
extern M2C_UNK data_020378c0;
extern M2C_UNK data_02037ac0;
extern M2C_UNK data_02037fac;

void func_0200769c(M2C_UNK arg0, M2C_UNK arg1) {
    u8 *var_r4;
    s32 var_r8;
    u8 *var_r7;
    s32 var_r8_2;

    if (data_02037704 != 0) {
        func_020075c8(arg1);
        return;
    }
    data_02037704 = 1;
    func_02007a78(&data_02037710, 0);
    var_r7 = (u8 *) &data_02037734;
    var_r8 = 0;
    do {
        NNS_FndAppendListObject(&data_02037710, (M2C_UNK *) var_r7);
        var_r8 += 1;
        var_r7 += 0x30;
    } while (var_r8 < 8);
    OS_InitMutex(&data_0203771c);
    var_r4        = (u8 *) &data_02037fac;
    data_0203770c = (M2C_UNK *) &data_020378c0;
    var_r8_2      = 0;
    do {
        M2C_FIELD(var_r4, s32 *, 0x110) = (s32) (M2C_FIELD(var_r4, s32 *, 0x110) & ~1);
        func_02013190(var_r4 + 0x5C);
        func_02004a00((M2C_UNK *) var_r4);
        M2C_FIELD(var_r4, s32 *, 0x148) = var_r8_2;
        M2C_FIELD(var_r4, s8 *, 0x124)  = 0;
        M2C_FIELD(var_r4, s32 *, 0x12C) = 0;
        M2C_FIELD(var_r4, s32 *, 0x130) = 0;
        var_r8_2 += 1;
        M2C_FIELD(var_r4, s32 *, 0x120) = 0;
        var_r4 += 0x170;
    } while (var_r8_2 < 4);
    func_020075c8(arg1);
    func_020072d4(&data_02037ac0, arg0);
}
