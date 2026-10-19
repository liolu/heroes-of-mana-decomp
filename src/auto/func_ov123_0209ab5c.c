/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209a8a4(M2C_UNK);                          /* extern */
extern void *data_ov123_020e1748;

s32 func_ov123_0209ab5c(s32 arg0) {
    if (data_ov123_020e1748 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(data_ov123_020e1748, s32 *, 0x644) & (1 << arg0))) {
        return 0;
    }
    return func_ov123_0209a8a4(arg0);
}
