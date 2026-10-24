/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02081b14(s32 d, s32 m, s32 y) {
    if (d == 0) {
        if (m == 0) {
            if (y == 0) {
                return 1;
            }
        }
    }
    if (d < 0 || m < 0 || y < 0) {
        return 0;
    }
    switch (m) {
        case 0:
            if (d != 0) {
                return 0;
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d > 31) {
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d > 30) {
                return 0;
            }
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                if (d > 29) {
                    return 0;
                }
            } else {
                if (d > 28) {
                    return 0;
                }
            }
            break;
        default:
            return 0;
    }
    if (y < 1900) {
        return 0;
    }
    if (y > 2079) {
        return 0;
    }
    if (y == 2079) {
        if (m > 6) {
            return 0;
        }
        if (m == 6) {
            if (d > 6) {
                return 0;
            }
        }
    }
    return 1;
}
