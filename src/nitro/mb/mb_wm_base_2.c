#include "m2c.h"

s32 MBi_IsCommSizeValid(u32 arg0, u32 arg1, s32 arg2) {
    if ((arg0 > 0x1FEU) || (arg0 < 0xE4U)) {
        return 0;
    }
    if ((arg1 > 0x10U) || (arg1 < 8U)) {
        return 0;
    }
    if ((s32) ((arg2 * (((arg1 + 0x20) * 4) + 0x70)) + (((arg0 + 0x26) * 4) + 0x14A)) < 0x15E0) {
        return 1;
    }
    return 0;
}
