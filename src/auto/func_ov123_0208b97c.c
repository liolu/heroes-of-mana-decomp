/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0208ba24(s32, M2C_UNK *);            /* extern */
extern M2C_UNK data_ov123_020db5b4;
extern M2C_UNK data_ov123_020db5d0;
extern s32 data_ov123_020e12e0;
extern s32 data_ov123_020e12e4;
extern s32 data_ov123_020e12e8;
extern s32 data_ov123_020e12ec;

s32 func_ov123_0208b97c(void) {
    if (data_ov123_020e12ec == 0) {
        data_ov123_020e12ec = func_ov123_0208ba24(data_ov123_020e12e4, &data_ov123_020db5b4);
    }
    if (data_ov123_020e12e8 == 0) {
        data_ov123_020e12e8 = func_ov123_0208ba24(data_ov123_020e12e0, &data_ov123_020db5d0);
    }
    if ((data_ov123_020e12ec == 0) || (data_ov123_020e12e8 == 0)) {
        return 0;
    }
    return 1;
}
