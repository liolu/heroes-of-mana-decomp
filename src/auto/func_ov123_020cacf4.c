/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_EnableInterrupts(M2C_UNK, u16);          /* extern */
M2C_UNK OS_EnableIrqMask(M2C_UNK);                  /* extern */
s32 OS_GetIrqFunction(M2C_UNK);                     /* extern */
M2C_UNK OS_ResetRequestIrqMask(M2C_UNK);            /* extern */
M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);      /* extern */
M2C_UNK OS_SetIrqMask(s32);                         /* extern */
extern s32 data_ov123_020e4748;
extern s32 data_ov123_020e474c;
extern M2C_UNK func_ov123_020cac7c;

void func_ov123_020cacf4(void) {
    u16 temp_r1;

    data_ov123_020e474c = *(s32 *) 0x04000210;
    OS_SetIrqMask(0x40018);
    OS_EnableIrqMask(1);
    data_ov123_020e4748 = OS_GetIrqFunction(1);
    OS_SetIrqFunction(1, &func_ov123_020cac7c);
    OS_ResetRequestIrqMask(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    OS_EnableInterrupts(1, temp_r1);
}
