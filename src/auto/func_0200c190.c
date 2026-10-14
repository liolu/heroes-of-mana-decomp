#include "engine.h"
#include "m2c.h"

void func_0200a370(M2C_UNK);
void func_020100c0(M2C_UNK);

extern s32 data_02035ab0;
extern s32 data_0203859c;

void func_0200c190(void) {
    if (data_02035ab0 != -1) {
        func_020100c0(data_02035ab0);
    }
    func_0200a370(data_0203859c);
    data_0203859c = 0;
}
