/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088aa8(u8 *);

s32 func_ov123_020881d0(u8 *arg0, s32 arg1) {
    s32 v;

    if (*(s32 *) (arg0 + 0x90) == 0) {
        return 1;
    }
    v = *(s32 *) (arg0 + 0x94);
    if ((u32) (arg1 - v) > 0x64) {
        if (func_ov123_02088aa8(arg0) == 0) {
            return 0;
        }
    }
    return 1;
}
