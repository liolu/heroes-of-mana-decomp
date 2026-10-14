#include "engine.h"
#include "m2c.h"

void func_0200dac4(M2C_UNK, M2C_UNK);
void func_0200db20(void);
void func_0200dcf4(M2C_UNK);
void func_0200de58(void);
void func_0200dff4(M2C_UNK, M2C_UNK);
void func_0200e1a4(void);
void func_0200e1d8(void);
void func_0200e214(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_0203863c;

void func_0200dc54(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = func_0200fa98();
    if (arg0 == M2C_FIELD(&data_0203863c, s32 *, 0x28)) {
        func_0200dac4(arg0, arg1);
    }
    func_0200dcf4(arg0);
    var_r2 = M2C_FIELD(&data_0203863c, s32 *, 0x1C);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x94) - 4;
    }
    func_0200e214(arg0, (s32) func_0200db20, var_r2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0200e1a4();
    func_0200dff4(arg0, arg2);
    func_0200e1d8();
    func_0200de58();
    func_0200faac(temp_r4);
}
