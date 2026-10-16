/* compiler: 1.2/sp3 */
#include "m2c.h"
extern struct SndCtx {
    s32 a;
    s32 b;
    s32 c;
    u32 buf0;
    u32 buf1;
    u32 size;
    s32 g;
    s32 h;
    s32 i;
    u32 t0;
    u32 t1;
    s32 sh;
} data_020371b0;
void MIi_CpuClear32(u32, u32, u32);
void DC_FlushRange(u32, u32);
void SND_StartTimer(u32, u32, u32, s32);

void func_02004b00(void) {
    struct SndCtx *c = &data_020371b0;
    if (c->a == 0) {
        return;
    }
    c->h = 0;
    MIi_CpuClear32(0, c->buf0, c->size);
    MIi_CpuClear32(0, c->buf1, c->size);
    DC_FlushRange(c->buf0, c->size);
    DC_FlushRange(c->buf1, c->size);
    SND_StartTimer(c->t0, c->t1, c->sh >= 0 ? 1 << c->sh : 0, 0);
}
