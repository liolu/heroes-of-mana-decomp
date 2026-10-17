#include "m2c.h"

M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
s32 GetUnitStatus(s32);                       /* extern */
extern s32 data_ov000_02051548;

void func_ov032_020d0b7c(s32 arg0) {
    u32 temp_r0;

    if ((GetUnitStatus(arg0 + 0xEFB) != 2) && (GetUnitStatus(arg0 + 0xEFB) != 3)) {
        return;
    }
    temp_r0 = M2C_FIELD((data_ov000_02051548 + (arg0 * 4)), u32 *, 0x40);
    switch (temp_r0) {
        case 0:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 0x15, 0x14);
            ObjSet(arg0 + 0xEFB, 3, 0, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 1:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 7, 0xB);
            ObjSet(arg0 + 0xEFB, 3, 4, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 2:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 0x1F, 0x1B);
            ObjSet(arg0 + 0xEFB, 3, 6, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 3:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 0x1E, 9);
            ObjSet(arg0 + 0xEFB, 3, 4, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 4:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 0xB, 0x1B);
            ObjSet(arg0 + 0xEFB, 3, 0, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        case 5:
            ObjSet(arg0 + 0xEFB, 0xE, 0xC, 0);
            Routine_SoundEffect(0x27A);
            ObjSet(arg0 + 0xEFB, 7, 0x10, 0xB);
            ObjSet(arg0 + 0xEFB, 3, 4, 0);
            ObjSet(arg0 + 0xEFB, 0xE, 0xD, 0);
            return;
        default:
            return;
    }
}
