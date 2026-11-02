/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 OSi_ThreadInfo[];

s32 OS_SetThreadPriority(void *, s32);

void func_ov123_0207749c(u32 arg0) {
    if (arg0 >= 0x20) {
        return;
    }
    OS_SetThreadPriority((void *) OSi_ThreadInfo[1], arg0);
}
