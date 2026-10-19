#include "m2c.h"

M2C_UNK WaitSyncAikyoEffect(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK Routine_SetEvPos(s32);                   /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_rgb(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_alpha(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ShakeScreen(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetAikyoEffectWithXYZ(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK TG_partyLookObj_withRelay(M2C_UNK);               /* extern */

void func_ov026_020d0a10(s32 arg0) {
    M2C_UNK var_r2;
    M2C_UNK var_r3;
    M2C_UNK var_r4;

    if (!(arg0 != 8)) {
        var_r2 = 0x16;
        var_r3 = 0xF;
        var_r4 = 0x37;
    } else {
        var_r2 = 0x18;
        var_r3 = 0x11;
        var_r4 = 0x38;
    }
    CameraMoveAndWait(0x50, 0, var_r2, var_r3, 0x384, 0x2EE, 0xF0);
    WaitSyncCounter(0x20);
    Routine_ScreenRGB_rgb(0x1D, 0x17, 0x1C, 2);
    Routine_ScreenRGB_alpha(0x1E, 0x14, 2);
    Routine_ShakeScreen(1, 0);
    WaitSyncCounter(2);
    Routine_SetEvPos(arg0);
    ObjSet(var_r4, 0x24, 0, 0);
    ObjSet(var_r4, 0x26, 0, 0);
    ObjSet(var_r4, 0x12, 0, 0);
    WaitSyncCounter(1);
    SetAikyoEffectWithXYZ(0xAE, var_r4, 0, 0, 0, 0, 0);
    ObjSet(var_r4, 0x21, 1, 0);
    WaitSyncAikyoEffect(-1, -1);
    ObjSet(var_r4, 0x26, 1, 0);
    ObjSet(var_r4, 0x13, 0, 0);
    Routine_ScreenRGB_rgb(0, 0, 0, 0x20);
    Routine_ScreenRGB_alpha(0, 0x1F, 0x20);
    WaitSyncCounter(0x20);
    Routine_ShakeScreen(0, 0);
    TG_partyLookObj_withRelay(var_r4);
}
