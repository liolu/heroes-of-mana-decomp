/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_02070ee0(s8);                      /* extern */

void func_ov123_02070e98(s32 arg0, void *arg1, s8 arg2) {
    void *temp_r0;

    temp_r0 = func_ov123_02070ee0(arg2);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0)   = arg0;
    M2C_FIELD(temp_r0, void **, 4) = arg1;
    M2C_FIELD(temp_r0, s32 *, 8)   = 0;
    M2C_FIELD(temp_r0, s8 *, 0xC)  = (s8) M2C_FIELD(arg1, s8 *, 0x73);
    M2C_FIELD(temp_r0, s8 *, 0xD)  = arg2;
}
