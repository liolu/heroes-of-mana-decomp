#include "m2c.h"

void *func_ov123_02073aec(M2C_UNK);                 /* extern */
s32 func_ov123_0207acd0();                          /* extern */

s32 func_ov123_0208ba64(M2C_UNK arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_2 = func_ov123_0207acd0();
    if (temp_r0_2 != -1) {
        return temp_r0_2;
    }
    temp_r0 = func_ov123_02073aec(arg0);
    if (temp_r0 == NULL) {
        return 0;
    }
    return **M2C_FIELD(temp_r0, s32 ***, 0xC);
}
