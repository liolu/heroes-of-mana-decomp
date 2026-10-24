/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x1a];
    u16 id;
    u8 cur;
    u8 pad1;
    s16 wait;
    s16 f20;
    u8 pad2[0x2e - 0x22];
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
    u8 f4 : 1;
    u8 loop : 1;
    u8 end : 1;
    u8 f7 : 1;
} A;

typedef struct {
    u8 pad[0xaf4];
    s32 dec;
} H;

u32 GetAnimeParasAob2Data(void *, u16, u8);
extern H *data_ov000_0205154c;

s32 Aob2DataAnimation(void *obj, A *a) {
    u32 v;
    s32 r;

    if (a->end != 0) {
        r = 1;
    } else {
        if (a->wait != 0) {
            a->wait = a->wait - data_ov000_0205154c->dec;
        }
        if (a->wait <= 0) {
            a->cur = a->cur + 1;
            v      = GetAnimeParasAob2Data(obj, a->id, a->cur);
            if ((u8) (v >> 16) <= a->cur) {
                if (a->loop == 0) {
                    a->cur = 0;
                } else {
                    a->end = 1;
                    a->cur = a->cur - 1;
                    v      = GetAnimeParasAob2Data(obj, a->id, a->cur);
                }
            }
            a->wait = (u8) (v >> 8);
            a->f20  = (u8) v;
            if (a->cur == 0 || a->end == 1) {
                r = 1;
            } else {
                goto no;
            }
        } else {
        no:
            r = 0;
        }
    }
    return r;
}
