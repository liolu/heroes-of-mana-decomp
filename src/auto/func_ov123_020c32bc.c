/* compiler: 1.2/sp3 */
#include "m2c.h"

void OS_SPrintf(void *, char *, u32, u32, u32, u32);
extern u8 *data_ov123_020e46d0;
extern char data_ov123_020de2ec[];

void func_ov123_020c32bc(void *arg0) {
    u8 *base;
    u8 *t;

    base = data_ov123_020e46d0;
    t    = base + 0x4C0;
    OS_SPrintf(arg0, data_ov123_020de2ec, t[0], t[1], t[2], t[3]);
}
