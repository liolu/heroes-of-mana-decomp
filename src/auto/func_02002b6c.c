#include "m2c.h"
typedef struct E {
    u16 id : 9;
    u16 cnt : 7;
} E;
typedef struct G {
    u8 pad[0x28];
    u8 *tab;
} G;
extern G *data_0203673c;
void func_02002b6c(s32 id, s32 add, s32 idx) {
    E *e = (E *) (data_0203673c->tab + idx * 0x2d0 + 0x10);
    s32 i;
    s32 c;
    for (i = 0; i < 0x100; i++, e++) {
        if (e->id == 0) {
            e->cnt = 0;
            break;
        }
        if (e->id == id) {
            break;
        }
    }
    if (i == 0x100) {
        return;
    }
    e->id = id;
    c     = e->cnt + add;
    if (c > 99) {
        c = 99;
    }
    e->cnt = c;
}
