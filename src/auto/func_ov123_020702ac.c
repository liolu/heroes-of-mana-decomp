/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov123_020df1ec;
extern s32 data_ov123_020df220;

s32 func_ov123_020702ac(s32 arg0) {
    s32 var_ip;

    var_ip = 1;
    if ((arg0 != -1) && (arg0 != 0x7F000001) &&
        ((arg0 & data_ov123_020df1ec) != (data_ov123_020df220 & data_ov123_020df1ec))) {
        var_ip = 0;
    }
    return var_ip;
}
