#include "m2c.h"

M2C_UNK func_0200fddc();

extern s16 CTRDGi_Work;

M2C_UNK CTRDG_TerminateForPulledOut();

extern M2C_UNK data_02041640;

void CTRDGi_CallbackForInitModuleInfo(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        CTRDGi_Work = 1;
        return;
    }
    func_0200fddc();
}

void CTRDGi_PulledOutCallback(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02041640, s32 *, 0xC) != 0) {
            return;
        }
        var_r0 = 0;
        if (M2C_FIELD(&data_02041640, s32(**)(), 0x18) != NULL) {
            var_r0 = M2C_FIELD(&data_02041640, s32(**)(), 0x18)();
        }
        if (var_r0 != 0) {
            CTRDG_TerminateForPulledOut();
        }
        M2C_FIELD(&data_02041640, s32 *, 0xC) = 1;
        return;
    }
    func_0200fddc();
}
