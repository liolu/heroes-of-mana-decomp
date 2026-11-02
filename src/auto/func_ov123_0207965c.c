/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_020796a8(u16 *, u16 *, u32, s32);

void func_ov123_0207965c(u16 *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        arg0[i] = ~arg0[i];
    }
    func_ov123_020796a8(arg0, arg0, 1, arg1);
}
