#include "m2c.h"

M2C_UNK OS_SpinWait(s32);

M2C_UNK PM_SendUtilityCommandAsync(M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK PM_SetBackLight(M2C_UNK, M2C_UNK);

M2C_UNK PM_GetBackLight(s32 *, s32 *);

s32 PM_SetLCDPower(M2C_UNK);

s32 PM_GetLCDPower();

void PM_ForceToPowerOffAsync(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    OS_SpinWait(0x996A00);
    if (PM_GetLCDPower() != 1) {
        PM_GetBackLight(&sp4, &sp0);
        if (sp4 != 0) {
            PM_SetBackLight(0, 0);
        }
        if (sp0 != 0) {
            PM_SetBackLight(1, 0);
        }
        if (PM_SetLCDPower(1) == 0) {
            do {
                OS_SpinWait(0x996A00);
            } while (PM_SetLCDPower(1) == 0);
        }
    }
    PM_SendUtilityCommandAsync(0xE, arg0, arg1);
}
