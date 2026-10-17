/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a92c0(s32, void *);           /* extern */

void func_ov123_020a927c(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = arg2;
    func_ov123_020a92c0(arg1, (u8 *) arg0 + 4);
}
