/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_0208ebdc(u8 *a) {
    s32 t;
    if (*(s32 *) (a + 0x10) > 0) {
        return 2;
    }
    t = *(s32 *) (a + 0x4C);
    if (t == 3 || t == 0) {
        return 1;
    }
    if (t == 1) {
        return 0;
    }
    return 3;
}
