#include "m2c.h"

u32 func_0200fa98(void);                            /* extern */
void func_0200faac(u32 arg0);                       /* extern */

void MIi_DmaSetParams(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 irq;
    u32 *p;

    irq = func_0200fa98();
    p = (u32 *)(arg0 * 0xC + 0x040000B0);
    p[0] = arg1;
    p[1] = arg2;
    p[2] = arg3;
    func_0200faac(irq);
}
