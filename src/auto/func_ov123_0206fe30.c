/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void OS_WakeupThreadDirect(void *);
extern s32 func_0200dd3c(void *);
extern void func_ov123_0206fe94(s32, s32, s32, s32, s32, s32);
extern void *volatile data_ov123_020df224;
void func_ov123_0206fe30(s32 a, s32 b, s32 c, s32 d) {
    func_ov123_0206fe94(a, b, c, d, 0, 0);
    if (data_ov123_020df224 != 0) {
        if (func_0200dd3c(data_ov123_020df224) == 0) {
            OS_WakeupThreadDirect(data_ov123_020df224);
        }
    }
}
