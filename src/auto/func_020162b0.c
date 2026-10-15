#include "m2c.h"

M2C_UNK PMi_WaitBusy();
s32 func_02016268(M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK PMi_DummyCallback;

s32 func_020162b0(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02016268(arg0, &PMi_DummyCallback, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    PMi_WaitBusy();
    return sp0;
}
