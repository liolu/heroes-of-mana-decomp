#include "engine.h"
#include "m2c.h"

void func_02009bec(M2C_UNK);
void func_020100c0(M2C_UNK);

extern s32 data_02035ab0;
extern M2C_UNK data_0203859c;

void func_0200bfd4(void) {
    if (data_02035ab0 != -1) {
        func_020100c0(data_02035ab0);
    }
    func_02009bec(M2C_FIELD(&data_0203859c, s32 *, 0x14));
    M2C_FIELD(&data_0203859c, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0203859c, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0203859c, s32 *, 0xC)  = 0;
}
