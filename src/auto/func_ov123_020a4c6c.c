/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e2048;

void func_ov123_020a4c6c(void *arg0) {
    data_ov123_020e2048 = arg0;
    MI_CpuFill8(arg0, 0, 0x614);
    M2C_FIELD(data_ov123_020e2048, s16 *, 0x610) = 0x5B9;
}
