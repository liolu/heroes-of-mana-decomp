#include "m2c.h"

s32 GetTargetObj();                          /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */

s32 func_ov108_020d7f44(M2C_UNK arg0, s32 arg1) {
    if (arg1 == GetTargetObj()) {
        if (distanceForBattle(arg1, arg0) != 1) {
            return 0;
        }
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    return 0;
}
