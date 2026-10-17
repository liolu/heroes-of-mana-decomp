/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, void *, M2C_UNK);      /* extern */
extern void *data_ov123_020e46d0;

void func_ov123_020c3574(M2C_UNK arg0) {
    MI_CpuCopy8(arg0, data_ov123_020e46d0 + 0x440, 0x20);
    M2C_FIELD(data_ov123_020e46d0, s8 *, 0x4E7) = 0;
}
