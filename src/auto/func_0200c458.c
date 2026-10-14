#include "engine.h"
#include "m2c.h"

void func_02009f70(M2C_UNK);
void func_020100c0(M2C_UNK);

extern s32 data_02035ab0;
extern M2C_UNK data_020385b8;

void func_0200c458(void) {
    if (data_02035ab0 != -1) {
        func_020100c0(data_02035ab0);
    }
    func_02009f70(M2C_FIELD(&data_020385b8, s32 *, 0xC));
    M2C_FIELD(&data_020385b8, s32 *, 0xC) = 0;
    M2C_FIELD(&data_020385b8, s32 *, 8)   = 0;
}
