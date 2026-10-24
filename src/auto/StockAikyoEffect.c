/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    u32 a : 10;
    u32 b : 7;
    u32 c : 7;
    u32 pad : 8;
    s16 h;
    u8 pad2[0xE];
    s32 f14;
    s32 f18;
    struct N *next;
} N;
N *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
extern u8 *data_ov000_02051548;

N *StockAikyoEffect(s16 a, s32 b, s32 c, s32 d, s32 e) {
    N *n;
    N **link;
    N *p;
    n = func_0200ed38(0, -1, 0x20);
    MIi_CpuClear16(0, n, 0x20);
    p    = *(N **) (data_ov000_02051548 + 0x778);
    link = (N **) (data_ov000_02051548 + 0x778);
    if (p != NULL) {
        do {
            link = &p->next;
            p    = p->next;
        } while (p != NULL);
    }
    *link   = n;
    n->next = NULL;
    n->f18  = 0;
    n->a    = b;
    n->h    = a;
    n->b    = c;
    n->c    = d;
    n->f14  = e;
    return n;
}
