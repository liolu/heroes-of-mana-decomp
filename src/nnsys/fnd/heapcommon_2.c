#include "m2c.h"

s32 FindContainHeap(M2C_UNK *, M2C_UNK);

extern M2C_UNK sRootList;

M2C_UNK *FindListContainHeap(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &sRootList;
    temp_r0 = FindContainHeap(&sRootList, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
