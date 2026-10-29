/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 v;
    s32 pad;
} Ent;
typedef struct {
    u8 pad0[0x20];
    s32 f20;
    u8 pad1[4];
    s32 total;
    s32 count;
    void (*fn)(s32, s32, s32 *, s32, s32, s32);
    s32 f34;
    s32 pos;
    u8 pad2[12];
    s32 cnt;
    u8 idx[8];
} Strm;
extern Ent data_020370e8[];
extern s32 data_020370a8[];
extern s32 _u32_div_f(s32, s32);
void StrmCallback(Strm *s, s32 arg) {
    s32 q    = _u32_div_f(s->total, s->count);
    s32 base = q * s->pos;
    s32 i;
    for (i = 0; i < s->cnt; i++) {
        s32 t            = data_020370e8[s->idx[i]].v;
        data_020370a8[i] = t + base;
    }
    s->fn(arg, s->cnt, data_020370a8, q, s->f20, s->f34);
    s->pos++;
    if (s->pos >= s->count) {
        s->pos = 0;
    }
}
