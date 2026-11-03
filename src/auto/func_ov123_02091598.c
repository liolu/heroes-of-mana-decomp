/* compiler: 1.2/sp3 */
#include "m2c.h"
void *func_ov123_020913d8(s32);
s32 func_ov123_02091598(s32 arg0, void *arg1) {
    u8 *p;
    p = func_ov123_020913d8(1);
    if (p[8] & arg0) {
        return 0;
    }
    p[8] |= arg0;
    return (*(s32(**)(s32, void *)) p)(arg0, arg1);
}
