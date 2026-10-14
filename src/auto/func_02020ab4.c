#include "engine.h"
#include "m2c.h"

void func_02020ad8(M2C_UNK);
void func_02024af8(M2C_UNK);

extern M2C_UNK data_02041c30;

void func_02020ab4(void) {
    func_02024af8(1);
    M2C_FIELD(&data_02041c30, s32 *, 0xC) = 1;
    func_02020ad8(1);
}
