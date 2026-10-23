/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020c4494(void *);
void func_ov123_020c45cc(void *);
s32 func_ov123_020c4924(void);
void func_0200fddc(void);
extern s32 data_ov123_020e46e0;
void func_ov123_020c4768(u16 *msg) {
    u8 *base;
    if (msg[1] != 0) {
        return;
    }
    base = (u8 *) data_ov123_020e46e0;
    base += 0x1000;
    if (base[0xb84] != 0) {
        if (msg[0] == 2) {
            base[0xb84] = 2;
        }
        return;
    }
    if (msg[0] != 0x26) {
        return;
    }
    switch (msg[4]) {
        case 5:
            if (base[0xb86] != 0) {
                func_ov123_020c4494(msg);
            } else {
                func_ov123_020c45cc(msg);
            }
            func_ov123_020c4924();
            break;
        case 4:
            func_ov123_020c4924();
            break;
        default:
            func_0200fddc();
            break;
    }
}
