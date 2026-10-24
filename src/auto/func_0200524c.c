/* compiler: 1.2/sp3 */
/* near start: 3 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 pad0[0x10];
    u32 off10;
    u32 pad14;
    u32 off18;
    u32 pad1c;
    u32 off20;
    u8 pad24[0x30 - 0x24];
    u32 f30;
    u8 pad34[0x84 - 0x34];
    u8 *t84;
    u32 f88;
    u32 f8c;
} S;
extern S *sCurrent;
extern void MIi_CpuCopy32(void *, void *, s32);

void func_0200524c(S *s, u8 *base) {
    u32 i;
    u8 *q;
    u32 v;
    MIi_CpuCopy32(base, s, 0x30);
    s->f8c = s->off18 == 0 ? 0 : (u32) (base + s->off18);
    s->t84 = s->off20 == 0 ? 0 : base + s->off20;
    s->f88 = s->off10 == 0 ? 0 : (u32) (base + s->off10);
    i      = 0;
    if (i < *(u32 *) (s->t84 + 8)) {
        s32 o = i;
        u32 z = i;
        do {
            q = s->t84;
            q += 0xc;
            v = *(u32 *) (q + o);
            q += o;
            *(u32 *) (q + 8) = v == 0 ? z : (u32) (base + v);
            q                = s->t84;
            i++;
            o += 16;
        } while (i < *(u32 *) (q + 8));
    }
    s->f30   = 0;
    sCurrent = s;
}
