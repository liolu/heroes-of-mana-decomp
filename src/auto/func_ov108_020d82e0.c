#include "m2c.h"

s32 GetRnd();                          /* extern */
s32 SetObjGo(M2C_UNK);                   /* extern */
M2C_UNK SetObjWaitAndGo(M2C_UNK, s32);          /* extern */
s32 GetTargetObj();                          /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020b0cf0;

void func_ov108_020d82e0(M2C_UNK arg0, s32 arg1) {
    if (arg1 == GetTargetObj()) {
        if (((u32) (M2C_FIELD(((u8 *) &data_ov003_020b0cf0 + (arg1 * 0x110)), s32 *, 8) << 5) >> 0x1C) == 7) {
            changeOcc(0, arg0, 0, 0);
            return;
        }
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    if (SetObjGo(arg0) != 0) {
        return;
    }
    SetObjWaitAndGo(arg0, (GetRnd() & 0x1F) + 0x1E);
}
