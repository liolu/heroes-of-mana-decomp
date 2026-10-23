#include "m2c.h"

typedef struct S {
    u8 max;
    u8 pos;
    s16 off;
    u32 pad4;
    u32 pad8 : 8;
    u32 b8 : 1;
    u32 rest : 23;
    u8 padc[6];
    s16 cnt;
} S;
void func_ov120_020eb20c(void);

s32 func_ov120_020edd8c(s32 kind, S *s) {
    s32 i;
    switch (kind) {
        case 7:
            if (s->pos == 0) {
                return 0;
            }
            s->b8 = 1;
            s->pos--;
            s->off = -24;
            for (i = 0; i < 24; i += 4) {
                func_ov120_020eb20c();
                s->off += 4;
            }
            s->b8  = 0;
            s->off = 0;
            if (s->pos == 0) {
                return 0;
            }
            break;
        case 8:
            if (s->pos + s->cnt >= s->max) {
                return 0;
            }
            s->b8 = 1;
            for (i = 0; i < 24; i += 4) {
                func_ov120_020eb20c();
                s->off -= 4;
            }
            s->pos++;
            s->off = 0;
            s->b8  = 0;
            if (s->pos + s->cnt >= s->max) {
                return 0;
            }
            break;
        case 10:
            if (s->pos == 0) {
                return 0;
            }
            s->b8 = 1;
            s->pos--;
            s->off = -64;
            for (i = 0; i < 64; i += 8) {
                func_ov120_020eb20c();
                s->off += 8;
            }
            s->b8  = 0;
            s->off = 0;
            if (s->pos == 0) {
                return 0;
            }
            break;
        case 11:
            if (s->pos + s->cnt >= s->max) {
                return 0;
            }
            s->b8 = 1;
            for (i = 0; i < 64; i += 8) {
                func_ov120_020eb20c();
                s->off -= 8;
            }
            s->pos++;
            s->off = 0;
            s->b8  = 0;
            if (s->pos + s->cnt >= s->max) {
                return 0;
            }
            break;
    }
    return 1;
}
