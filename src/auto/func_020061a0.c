/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 NNSi_SndArcLoadBank(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_020061a0(M2C_UNK arg0, M2C_UNK arg1) {
    if (NNSi_SndArcLoadBank(arg0, 0xFF, arg1, 1, 0) == 0) {
        return 1;
    }
    return 0;
}
