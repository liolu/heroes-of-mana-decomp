/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 a;
    void (*fn)(s32, void *, s32);
    u8 flags;
} E;
E *func_ov123_020913d8(s32);
void func_ov123_02091440(void) {
    E *p = func_ov123_020913d8(1);
    if (p->flags & 0x10) {
        void *q = func_ov123_020913d8(0x10);
        p->flags &= ~0x10;
        p->fn(0x10, q, 0xD18);
    }
    if (p->flags & 8) {
        void *q = func_ov123_020913d8(8);
        p->flags &= ~8;
        p->fn(8, q, 0xC);
    }
    if (p->flags & 4) {
        void *q = func_ov123_020913d8(4);
        p->flags &= ~4;
        p->fn(4, q, 0x58);
    }
    if (p->flags & 2) {
        void *q = func_ov123_020913d8(2);
        p->flags &= ~2;
        p->fn(2, q, 0x2300);
    }
    if (p->flags & 1) {
        p->flags &= ~1;
        p->fn(1, p, 0x18);
    }
}
