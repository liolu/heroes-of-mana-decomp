/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GX_HBlankIntr(M2C_UNK);                     /* extern */
M2C_UNK GX_VBlankIntr(M2C_UNK);                     /* extern */
M2C_UNK OS_DisableIrqMask(M2C_UNK);                 /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);      /* extern */
M2C_UNK TP_RequestSetStabilityAsync(M2C_UNK, M2C_UNK); /* extern */
M2C_UNK TP_WaitBusy(M2C_UNK);                       /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_02015374(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_020158e0(M2C_UNK);                         /* extern */
M2C_UNK ana_ReadKey(M2C_UNK, u16);          /* extern */
extern M2C_UNK data_ov000_02050728;
extern M2C_UNK data_ov000_02051544;
extern M2C_UNK func_ov000_02046334;
extern M2C_UNK HBlankIntr;

void ana_InitCommon(void) {
    u16 temp_r1;

    OS_DisableIrqMask(3);
    OS_SetIrqFunction(1, &func_ov000_02046334);
    OS_SetIrqFunction(2, &HBlankIntr);
    OS_EnableIrqMask(0x40003);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    ana_ReadKey(1, temp_r1);
    GX_VBlankIntr(1);
    GX_HBlankIntr(1);
    TP_RequestSetStabilityAsync(7, 0x1E);
    TP_WaitBusy(8);
    if (func_020158e0(8) != 0) {
        func_0200fddc();
    }
    func_02015374(0, 4, M2C_FIELD(&data_ov000_02051544, s32 *, 8), 5);
    TP_WaitBusy(2);
    if (func_020158e0(2) != 0) {
        func_0200fddc();
    }
}
