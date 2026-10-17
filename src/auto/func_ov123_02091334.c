/* compiler: 1.2/sp3 */
#include "m2c.h"

s8 func_ov123_02091360();                           /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */

void func_ov123_02091334(s32 arg0) {
    void *temp_r0;

    temp_r0                        = func_ov123_020913d8(1);
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0xA)  = func_ov123_02091360();
}
