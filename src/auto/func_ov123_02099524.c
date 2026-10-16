#include "m2c.h"

extern s32 data_ov123_020e171c;
extern s32 data_ov123_020e1720;

void func_ov123_02099524(s32 arg0, s32 arg1) {
    if (data_ov123_020e171c != 9) {
        data_ov123_020e171c = arg0;
        data_ov123_020e1720 = arg1;
    }
}
