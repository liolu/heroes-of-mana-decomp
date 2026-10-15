#include "m2c.h"

extern s32 CARDi_IsPulledOutFlag;
M2C_UNK OS_SpinWait(s32);

M2C_UNK func_0200fddc();

s32 PM_ForceToPowerOff();

M2C_UNK CARDi_SendtoPxi(M2C_UNK, M2C_UNK);

s32 CARD_IsPulledOut(void) {
    return CARDi_IsPulledOutFlag;
}

void CARD_TerminateForPulledOut(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = PM_ForceToPowerOff();
        if (var_r0 == 4) {
            do {
                OS_SpinWait(0xA3A47);
                var_r0 = PM_ForceToPowerOff();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        CARDi_SendtoPxi(1, 1);
    }
    func_0200fddc();
}
