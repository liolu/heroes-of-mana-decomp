/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK TrsGameWorkInit(M2C_UNK);               /* extern */
M2C_UNK InitTransBigSizeData(s32, M2C_UNK);          /* extern */
M2C_UNK ReleaseWmWorksTrnsWork();                      /* extern */
M2C_UNK WH_SetGgid(s32);                   /* extern */
s32 WH_GetSystemState();                          /* extern */
M2C_UNK WH_Initialize();                      /* extern */
M2C_UNK WH_Finalize();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa894;
extern s32 data_ov003_020b5328;

s32 WH_InitializeForAna(s32 arg8) {
    s32 var_r4;
    s32 var_r5;

    var_r4                                       = 0;
    var_r5                                       = 1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~1);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) & ~0x38) | 0x38);
    ReleaseWmWorksTrnsWork();
    do {
        VBlankIntrWait();
        if (WH_GetSystemState() != 3) {
            if (WH_GetSystemState() == 0xA) {
                if (var_r5 == 0) {
                    WH_Finalize();
                    var_r5 = 1;
                } else {
                    WH_Initialize();
                    var_r5 = 0;
                }
            }
            if (WH_GetSystemState() == 0) {
                WH_Initialize();
                var_r5 = 0;
            }
            if (WH_GetSystemState() == 1) {
                var_r4 = 1;
            }
        }
    } while (var_r4 == 0);
    WH_SetGgid(0x8000FC);
    TrsGameWorkInit(5);
    InitTransBigSizeData(data_ov003_020b5328, 5);
    return var_r4;
}
