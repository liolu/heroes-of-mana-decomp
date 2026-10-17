#include "m2c.h"

s32 distanceForBattle(s32, M2C_UNK);              /* extern */
M2C_UNK SetWazaBySpOrNormal(M2C_UNK, M2C_UNK);      /* extern */
s32 GetFriendOfHalfHP(M2C_UNK);                   /* extern */

s32 func_ov107_020dd248(M2C_UNK arg0) {
    s32 temp_r0;

    SetWazaBySpOrNormal(arg0, 1);
    temp_r0 = GetFriendOfHalfHP(arg0);
    if ((temp_r0 != -1) && (distanceForBattle(temp_r0, arg0) == 1)) {
        return 1;
    }
    return 0;
}
