/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_ov123_020e4724;
void func_ov123_020c98a8(u8 *arg0) {
    u8 *p = data_ov123_020e4724;
    if (arg0 == p + 0x718) {
        p[0x794] = 1;
    } else {
        p[0x795] = 1;
    }
}
