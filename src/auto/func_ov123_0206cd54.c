/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98(void);
void func_0200faac(s32);
void func_02021338(s32, s32);
void func_ov123_0206e758(void *, s32);

typedef struct {
    u8 pad0[8];
    u8 state;
    u8 pad1[0x33];
    s32 f3c;
    s32 f40;
    u32 f44;
} Obj;

void func_ov123_0206cd54(u32 n, Obj *o) {
    s32 irq;
    s32 flag;
    u32 cnt;
    irq  = func_0200fa98();
    cnt  = o->f44;
    flag = 0;
    if ((cnt == o->f3c) && (n != 0)) {
        flag = 1;
    }
    if (n >= cnt) {
        o->f44 = 0;
    } else {
        s32 t  = o->f40;
        o->f44 = cnt - n;
        func_02021338(t, t + n);
    }
    func_0200faac(irq);
    if (o->state == 0xA) {
        return;
    }
    if (o->state == 0xB) {
        return;
    }
    if ((o->f44 != 0) && (flag == 0)) {
        return;
    }
    func_ov123_0206e758(o, 0x1B);
}
