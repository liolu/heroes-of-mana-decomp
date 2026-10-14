#include "m2c.h"

s32 func_020118cc(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_02016c50(s32 arg0) {
    if (func_020118cc(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
