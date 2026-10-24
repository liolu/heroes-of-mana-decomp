#include "m2c.h"
typedef struct N {
    u8 p0[4];
    struct N *next;
    u32 a, b;
    u8 c, d;
} N;
extern u8 **data_ov123_020e478c;
N *func_ov123_020c9410(void *);
u32 OS_DisableIrqMask(u32);
void func_ov123_020cad94(void *, N *);
u32 OS_EnableIrqMask(u32);
N *func_ov123_020cb620(s32 idx, u32 a, u32 b, u8 c, u8 d) {
    u32 irq;
    N *it;
    N *n = func_ov123_020c9410(*(void **) ((u8 *) *(u8 **) &data_ov123_020e478c + idx * 0x40));
    n->a = a;
    n->b = b;
    n->c = c;
    n->d = d;
    irq  = OS_DisableIrqMask(1);
    it   = *(N **) (*(u8 **) &data_ov123_020e478c + idx * 0x40 + 0x10);
    while (1) {
        if (c < it->c) {
            func_ov123_020cad94(it, n);
            break;
        }
        it = it->next;
    }
    OS_EnableIrqMask(irq);
    return n;
}
