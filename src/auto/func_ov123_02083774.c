#include "m2c.h"

s32 func_ov123_0207a4f0(s32, s32 *);                /* extern */

s32 func_ov123_02083774(void **arg0, s32 arg1, s32 *arg2) {
    s32 *obj;
    s32 sp0[8];
    s32 temp_r0;

    obj     = *arg0;
    sp0[0]  = arg1;
    temp_r0 = func_ov123_0207a4f0(M2C_FIELD(obj, s32 *, 0x428), sp0);
    if (arg2 != NULL) {
        *arg2 = temp_r0;
    }
    return temp_r0 != 0;
}
