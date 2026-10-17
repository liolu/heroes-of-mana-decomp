/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e470c;

void func_ov123_020c7a60(void) {
    MI_CpuFill8(data_ov123_020e470c + 0x100, 0, 0x100);
    MI_CpuFill8(data_ov123_020e470c, 0, 0x100);
    M2C_FIELD(data_ov123_020e470c, void **, 0xAB0) = (void *) data_ov123_020e470c;
}
