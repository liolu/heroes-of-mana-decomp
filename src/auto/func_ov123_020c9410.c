/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u16 cnt;
    u8 p2;
    u8 p3;
    u32 slot[1];
} St;

u32 OS_DisableIrqMask(u32);
u32 OS_EnableIrqMask(u32);
s32 func_02008ff0(s32, s32);

u32 func_ov123_020c9410(St *s) {
    u32 r;
    u32 irq;
    u8 b2;
    u8 b3;

    r   = 0;
    irq = OS_DisableIrqMask(1);
    b3  = s->p3;
    b2  = s->p2;
    if (b2 != b3) {
        s->p3 = (u8) func_02008ff0(b3 + s->cnt - 1, s->cnt);
        r     = s->slot[s->p3];
    }
    OS_EnableIrqMask(irq);
    return r;
}
