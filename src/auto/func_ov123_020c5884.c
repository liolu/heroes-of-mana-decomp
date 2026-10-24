/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u16 *data_ov123_020e46e8;
extern u16 *data_ov123_020e46ec[6];
u16 func_ov123_020c5884(s32 i) {
    u16 **t = data_ov123_020e46ec;
    u16 *b  = data_ov123_020e46e8;
    t[0]    = b + 1;
    t[1]    = b + 2;
    t[2]    = b + 3;
    t[3]    = b + 4;
    t[4]    = b + 5;
    t[5]    = b + 6;
    return *t[i];
}
