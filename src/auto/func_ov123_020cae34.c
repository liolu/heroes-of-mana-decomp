/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_020ca510(M2C_UNK, M2C_UNK);        /* extern */

void func_ov123_020cae34(void) {
    void *temp_r0;

    temp_r0                        = func_ov123_020ca510(0x10, 4);
    M2C_FIELD(temp_r0, s32 *, 0)   = 0;
    M2C_FIELD(temp_r0, void **, 4) = (void *) (temp_r0 + 8);
    M2C_FIELD(temp_r0, void **, 8) = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
}
