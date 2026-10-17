#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 GetRnd();                          /* extern */
s32 IsItEnemy();                          /* extern */
s32 GetObjNoInDestination(void *);                    /* extern */
M2C_UNK SetDestination(void *, s32, s32);      /* extern */
s32 SetObjGo(void *);                    /* extern */
M2C_UNK SetObjWaitAndGo(void *, s32);           /* extern */
s32 GetNearDestination(void *, s32 *, s32 *);      /* extern */
s32 GetUnitBaseNoByAoo(void *);                    /* extern */
s32 GetNearDistance(void *, M2C_UNK);           /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */

void func_ov107_020d7a50(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;
    void *temp_r1;

    if ((IsItEnemy() == 1) && (GetUnitBaseNoByAoo(arg0) != 0x56) && (GetUnitBaseNoByAoo(arg0) != 0x72)) {
        temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) > 0x32) {
            changeOcc(3, arg0, arg1, 0);
            return;
        }
        changeOcc(0, arg0, 0, 0);
        return;
    }
    if ((GetNearDistance(arg0, 3) == 1) && (GetObjNoInDestination(arg0) != -1)) {
        if (GetNearDestination(arg0, &sp4, &sp0) == 1) {
            SetDestination(arg0, sp4, sp0);
            return;
        }
        SetObjWaitAndGo(arg0, (GetRnd() & 0x1F) + 0x78);
        return;
    }
    if (SetObjGo(arg0) != 0) {
        return;
    }
    SetObjWaitAndGo(arg0, (GetRnd() & 0x1F) + 0x78);
}
