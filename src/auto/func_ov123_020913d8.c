/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov123_020e165c;
extern s32 data_ov123_020e1660;
extern s32 data_ov123_020e1664;
extern s32 data_ov123_020e1668;
extern s32 data_ov123_020e166c;

s32 func_ov123_020913d8(s32 arg0) {
    if (arg0 & 1) {
        return data_ov123_020e166c;
    }
    if (arg0 & 2) {
        return data_ov123_020e1660;
    }
    if (arg0 & 4) {
        return data_ov123_020e1664;
    }
    if (arg0 & 8) {
        return data_ov123_020e1668;
    }
    if (arg0 & 0x10) {
        return data_ov123_020e165c;
    }
    return 0;
}
