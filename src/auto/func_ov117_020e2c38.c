#include "m2c.h"

typedef struct {
    u32 a : 1;
    u32 b : 1;
    u32 c : 1;
    u32 id : 9;
    u32 rest : 20;
    u32 pad;
} E8;

typedef struct {
    u16 a : 1;
    u16 b : 1;
    u16 id : 10;
    u16 c : 4;
} E2;

typedef struct {
    u8 p0;
    u8 p1;
    u8 kind;
    u8 p3[5];
} T8;

extern u8 *data_0203673c;
extern T8 data_ov117_020ed510[];
extern E8 data_ov117_020f2e94[];
extern E8 data_ov117_020f3614[];

void func_ov117_020e2c38(s32 arg0) {
    s32 i;
    E8 *p;
    E8 *q;
    s32 j;
    s32 o;
    s32 k;
    p = data_ov117_020f3614;
    for (i = 0; i < 0xF0; i++, p++) {
        if (p->b != 0 && arg0 == p->id) {
            p->a = 0;
        }
    }
    q = data_ov117_020f2e94;
    for (j = 0; j < 0xF0; j++, q++) {
        if (q->b != 0 && arg0 == q->id) {
            q->a = 0;
        }
    }
    for (k = 0, o = k; k < 0xF0; k++, o += 2) {
        E2 *e = (E2 *) (*(u8 **) (data_0203673c + 0x2C) + 0xAC8 + o);
        if (e->a != 0 && !(e->c & 1)) {
            u32 id = e->id;
            if (data_ov117_020ed510[id].kind == 1 && id == arg0) {
                e->b = 0;
            }
        }
    }
}
