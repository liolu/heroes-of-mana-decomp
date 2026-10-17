#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov123_020de870;

M2C_UNK **func_ov123_020cf004(M2C_UNK **arg0) {
    *arg0 = &data_ov123_020de870;
    MI_CpuFill8((u8 *) arg0 + 4, 0, 0x4C);
    MI_CpuFill8((u8 *) arg0 + 0x50, 0, 0x4C);
    return arg0;
}
