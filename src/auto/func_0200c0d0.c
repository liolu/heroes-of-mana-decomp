#include "engine.h"
#include "m2c.h"

void func_02009cec(M2C_UNK);
void func_020100c0(M2C_UNK);

extern s32 data_02035ab0;
extern M2C_UNK data_0203859c;

void func_0200c0d0(void) {
    if (data_02035ab0 != -1) {
        func_020100c0(data_02035ab0);
    }
    func_02009cec(M2C_FIELD(&data_0203859c, s32 *, 8));
    M2C_FIELD(&data_0203859c, s32 *, 8) = 0;
    M2C_FIELD(&data_0203859c, s32 *, 4) = 0;
}
