/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02076a7c(s8 *a) {
    s8 *s = a;
    for (; *a != 46 && *a != 0; a++)
        ;
    return a - s;
}
