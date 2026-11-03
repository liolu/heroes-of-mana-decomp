/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088114(void *, s32);
M2C_UNK func_ov123_0208a880(void *);

s32 func_ov123_0208a670(void **arg0, s32 *arg1) {
    void *temp_r4;
    s32 v;

    temp_r4 = *arg0;
    v       = *arg1;
    if ((M2C_FIELD(temp_r4, s32 *, 0xC) != 7) && (func_ov123_02088114(temp_r4, v) == 0)) {
        return 0;
    }
    if ((M2C_FIELD(temp_r4, s32 *, 0xC) == 7) && (M2C_FIELD(temp_r4, s32 *, 0x14) == 0) &&
        (M2C_FIELD(temp_r4, s32 *, 0x24) == 0)) {
        func_ov123_0208a880(temp_r4);
    }
    return 1;
}
