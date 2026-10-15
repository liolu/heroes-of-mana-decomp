#include "m2c.h"

M2C_UNK OS_UnLockCartridge();

M2C_UNK func_0200faac(s32);

void CTRDGi_UnlockByProcessor(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        OS_UnLockCartridge(arg0);
    }
    func_0200faac(M2C_FIELD(arg1, s32 *, 4));
}
