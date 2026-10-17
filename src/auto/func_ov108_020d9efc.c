#include "m2c.h"

s32 GetRnd();                          /* extern */
s32 IsItEnemy();                          /* extern */
s32 GetObjNoInDestination(M2C_UNK);                   /* extern */
M2C_UNK SetDestination(M2C_UNK, s32, s32);     /* extern */
s32 SetObjGo(M2C_UNK);                   /* extern */
M2C_UNK SetObjWaitAndGo(M2C_UNK, s32);          /* extern */
s32 GetNearDestination(M2C_UNK, s32 *, s32 *);     /* extern */
s32 GetUnitTypeByNo(M2C_UNK);                   /* extern */
s32 GetNearDistance(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov108_020d9efc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    if ((IsItEnemy() == 1) && (GetUnitTypeByNo(arg1) != 5)) {
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    if ((GetNearDistance(arg0, 3) == 1) && (GetObjNoInDestination(arg0) != -1)) {
        if (GetNearDestination(arg0, &sp4, &sp0) == 1) {
            SetDestination(arg0, sp4, sp0);
            return;
        }
        SetObjWaitAndGo(arg0, (GetRnd() & 0x1F) + 0x1E);
        return;
    }
    if (SetObjGo(arg0) != 0) {
        return;
    }
    SetObjWaitAndGo(arg0, (GetRnd() & 0x1F) + 0x1E);
}
