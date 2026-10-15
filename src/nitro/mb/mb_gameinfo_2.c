#include "m2c.h"

extern M2C_UNK sUnlockFunc;
M2C_UNK MBi_ClearSendStatus();

void MB_AddGameInfo(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = M2C_FIELD(&sUnlockFunc, void **, 0x18);
    if (var_r2 == NULL) {
        M2C_FIELD(&sUnlockFunc, void **, 0x18) = arg0;
    } else {
        var_r1 = M2C_FIELD(var_r2, void **, 0x4BC);
        if (var_r1 != NULL) {
            do {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, void **, 0x4BC);
            } while (var_r1 != NULL);
        }
        M2C_FIELD(var_r2, void **, 0x4BC) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}

void MB_InitSendGameInfoStatus(void) {
    M2C_FIELD(&sUnlockFunc, s32 *, 0x18) = 0;
    M2C_FIELD(&sUnlockFunc, s32 *, 0x1C) = 0;
    M2C_FIELD(&sUnlockFunc, s8 *, 0x24)  = 1;
    M2C_FIELD(&sUnlockFunc, s32 *, 0x14) = 0;
    MBi_ClearSendStatus();
}
