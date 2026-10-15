#include "m2c.h"

M2C_UNK MBi_CommChangeParentStateCallbackOnly(M2C_UNK, M2C_UNK, s16 *);

u32 MBi_calc_nextsendblock(u32 arg0, u32 arg1) {
    u32 var_r1;

    var_r1 = arg1;
    if (var_r1 <= arg0) {
        var_r1 = arg0;
    }
    return var_r1;
}

s32 IsChildAidValid(u32 arg0) {
    if ((arg0 >= 1U) && (arg0 <= 0xFU)) {
        return 1;
    }
    return 0;
}

void MBi_CommCallParentError(M2C_UNK arg0, s16 arg1) {
    s16 sp0;

    sp0 = arg1;
    MBi_CommChangeParentStateCallbackOnly(arg0, 0xD, &sp0);
}
