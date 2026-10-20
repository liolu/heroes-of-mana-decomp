#include "m2c.h"

extern u32 data_ov123_020e171c;
extern s32 data_ov123_020e1720;

u32 func_ov123_0209958c(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = data_ov123_020e1720;
    }
    if (arg1 != NULL) {
        switch (data_ov123_020e171c) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
            *arg1 = 6;
            break;
        case 6:
            *arg1 = 3;
            break;
        case 7:
            *arg1 = 4;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
            *arg1 = 1;
            break;
        case 1:
        case 9:
            *arg1 = 7;
            break;
        case 14:
            *arg1 = 5;
            break;
        case 15:
        case 17:
            *arg1 = 6;
            break;
        case 16:
            *arg1 = 2;
            break;
        default:
        case 0:
            *arg1 = 0;
            break;
        }
    }
    return data_ov123_020e171c;
}
