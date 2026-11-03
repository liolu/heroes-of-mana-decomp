/* compiler: 1.2/sp2p3 -proc arm7tdmi */
#include "m2c.h"

s32 func_ov123_020788b0(u16 *arg0) {
    (void) *(volatile u16 *) arg0;
    return (s32) arg0[-1] << 16;
}
