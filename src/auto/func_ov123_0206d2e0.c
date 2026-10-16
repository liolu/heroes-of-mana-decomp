#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206d2e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), s32 *, 0xA4);
}
