/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 MB_CommIsBootable(u16);                         /* extern */
extern void *data_ov123_020e46e8;

s32 func_ov123_020c5da0(void) {
    u16 var_r6;

    if (M2C_FIELD(data_ov123_020e46e8, u16 *, 2) == 0) {
        return 0;
    }
    var_r6 = 1;
loop_3:
    if ((M2C_FIELD(data_ov123_020e46e8, u16 *, 2) & (1 << var_r6)) && (MB_CommIsBootable(var_r6) == 0)) {
        return 0;
    }
    var_r6 += 1;
    if ((u32) var_r6 >= 0x10U) {
        return 1;
    }
    goto loop_3;
}
