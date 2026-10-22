#include "m2c.h"
typedef struct {
    u16 id : 9;
    u16 cnt : 7;
} E;
typedef struct {
    u8 pad[0x28];
    E *tbl;
} G;
extern void func_ov122_0205e778(void);
extern G *data_0203673c;
void func_ov122_0205e864(s32 arg0, s32 arg1) {
    s32 n;
    s32 i;
    E *e;
    if (arg0 == 0) {
        return;
    }
    func_ov122_0205e778();
    e = (E *) ((u8 *) data_0203673c->tbl + 0x10);
    for (i = 0; i < 0x100; i++, e++) {
        if (e->id == arg0) {
            n = arg1 + e->cnt;
            if (n > 99) {
                e->cnt = 99;
            } else {
                e->cnt = n;
            }
            return;
        }
    }
    if (arg1 > 99) {
        arg1 = 99;
    }
    e = (E *) ((u8 *) data_0203673c->tbl + 0x10);
    for (i = 0; i < 0x100; i++, e++) {
        if (e->id == 0) {
            e->id  = arg0;
            e->cnt = arg1;
            return;
        }
    }
}
