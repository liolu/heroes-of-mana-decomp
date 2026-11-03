/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s8 *data_ov123_020e164c;

s8 *func_ov123_0208e7f0(s8 *arg0, s32 arg1) {
    s8 *cur;
    s8 c;
    s8 *ret;

    if (arg0 != 0) {
        data_ov123_020e164c = arg0;
    }
    ret = data_ov123_020e164c;
    goto check;
loop:
    data_ov123_020e164c = data_ov123_020e164c + 1;
check:
    cur = data_ov123_020e164c;
    c   = *cur;
    if (c != 0 && c != arg1) {
        goto loop;
    }
    if (cur == ret) {
        ret = 0;
    }
    if (c == 0) {
        return ret;
    }
    data_ov123_020e164c = data_ov123_020e164c + 1;
    *cur                = 0;
    return ret;
}
