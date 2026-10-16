/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02073378(s32);                       /* extern */
s32 func_ov123_020733a8();                          /* extern */

s32 func_ov123_02072e58(s32 arg0) {
    if ((arg0 >= 0) && (func_ov123_020733a8() != 0) && (func_ov123_02073378(arg0) == 0)) {
        return 1;
    }
    return 0;
}
