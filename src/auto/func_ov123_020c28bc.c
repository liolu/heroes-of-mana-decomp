/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020197dc(M2C_UNK *, s32);                  /* extern */
extern s32 data_ov123_020e46cc;
extern M2C_UNK func_ov123_020c2728;

s32 func_ov123_020c28bc(void) {
    if (func_020197dc(&func_ov123_020c2728, data_ov123_020e46cc + 0x1648) == 2) {
        return 1;
    }
    return 0;
}
