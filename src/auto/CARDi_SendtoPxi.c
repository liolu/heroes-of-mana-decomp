#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020118cc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void CARDi_SendtoPxi(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_020118cc(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_020118cc(0xE, arg0, 0) != 0);
}
