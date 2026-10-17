/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02099970();                      /* extern */
extern void *data_ov123_020e172c;

s32 func_ov123_02099ad0(void) {
    if (data_ov123_020e172c == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_ov123_020e172c, s32 *, 0) == 0) {
        return 0;
    }
    M2C_FIELD(data_ov123_020e172c, s16 *, 4) = 3;
    func_ov123_02099970();
    return 1;
}
