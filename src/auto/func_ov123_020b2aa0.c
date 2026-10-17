/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c94ec(M2C_UNK, void *, M2C_UNK);  /* extern */
void *func_ov123_020ca510(M2C_UNK, M2C_UNK);        /* extern */
extern void *data_ov123_020e45f0;

void func_ov123_020b2aa0(void) {
    void *temp_r0;

    temp_r0                                     = func_ov123_020ca510(0x64, 4);
    data_ov123_020e45f0                         = temp_r0;
    M2C_FIELD(data_ov123_020e45f0, s32 *, 0x60) = func_ov123_020c94ec(8, temp_r0, 0xC);
}
