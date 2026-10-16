#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK OS_InitMutex(void *);                       /* extern */
s32 func_ov123_020cdac8(M2C_UNK);                   /* extern */
extern void *data_ov123_020e4790;
extern s32 data_ov123_020e4794;

void func_ov123_020cbb0c(void) {
    if (data_ov123_020e4790 == NULL) {
        return;
    }
    MI_CpuFill8(data_ov123_020e4790 + 0xE08, 0, 0x3C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) = 0;
    OS_InitMutex(data_ov123_020e4790 + 0xE0C);
    data_ov123_020e4794 = func_ov123_020cdac8(0);
}
