/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02091618();                          /* extern */
extern void *data_ov123_020e172c;

s32 func_ov123_02099894(void) {
    u16 temp_r1;

    if (data_ov123_020e172c == NULL) {
        return 1;
    }
    temp_r1 = M2C_FIELD(data_ov123_020e172c, u16 *, 4);
    if (temp_r1 == 8) {
        return 0;
    }
    if (temp_r1 == 1) {
        data_ov123_020e172c = NULL;
        return 1;
    }
    M2C_FIELD(data_ov123_020e172c, u16 *, 4) = 5U;
    if (func_ov123_02091618() != 0) {
        data_ov123_020e172c = NULL;
        return 1;
    }
    return 0;
}
