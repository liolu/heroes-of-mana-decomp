#include "m2c.h"

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

s32 MBi_CallReset();

s32 MBi_IsTaskAvailable();

M2C_UNK MBi_EndTaskThread(M2C_UNK *);

extern M2C_UNK WM_DMA_NO;
extern M2C_UNK MBi_OnReset;

M2C_UNK func_0200fddc();

M2C_UNK MBi_CommEnd();

s32 MBi_CommEnd(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_0200fa98();
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x526) == 0) {
        M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 0x5E4) = 0;
        M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x526) = 1U;
        if (MBi_IsTaskAvailable() != 0) {
            MBi_EndTaskThread(&MBi_OnReset);
            var_r5 = 0;
        } else {
            var_r5 = MBi_CallReset();
        }
    }
    func_0200faac(temp_r4);
    return var_r5;
}

void MB_EndToIdle(void) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 0xC), s32 *, 0x1320) == 0) {
        func_0200fddc();
    }
    MBi_CommEnd();
    func_0200faac(temp_r4);
}
