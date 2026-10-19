/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GX_HBlankIntr(M2C_UNK);                     /* extern */
M2C_UNK GX_VBlankIntr(M2C_UNK, u16);                /* extern */
M2C_UNK OS_DisableIrqMask(M2C_UNK);                 /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);      /* extern */
extern M2C_UNK data_ov000_02050738;
extern M2C_UNK func_ov000_02046334;
extern M2C_UNK HBlankIntr;

void SetAnaIntr(void) {
    u16 temp_r1;

    OS_DisableIrqMask(3);
    OS_SetIrqFunction(1, &func_ov000_02046334);
    OS_SetIrqFunction(2, &HBlankIntr);
    OS_EnableIrqMask(0x40003);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    GX_VBlankIntr(1, temp_r1);
    GX_HBlankIntr(1);
}
