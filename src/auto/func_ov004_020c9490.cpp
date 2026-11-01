#include "m2c.h"

struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5();
    virtual void f6();
    virtual s32 f7(s32);
    u8 pad[0xC];
    s32 cap;
    s32 cnt;
    s32 *arr;
};

extern "C" {
s32 *func_0202f470(s32);
void func_0202f49c(s32 *);
void func_ov004_020c90e0();
s32 func_ov004_020c9594(Obj *, s32);
extern s32 data_ov004_020cf6f0[];
Obj *func_ov004_020c9490(Obj *me);
}

Obj *func_ov004_020c9490(Obj *me) {
    s32 *n;
    s32 v;
    s32 cnt;
    s32 j;
    s32 *dst;
    s32 want;
    s32 i;
    s32 e;
    s32 newcap;
    s32 old;
    s32 *src;

    func_ov004_020c90e0();
    i            = 0;
    *(s32 **) me = data_ov004_020cf6f0;
    me->cap      = 0;
    me->cnt      = 0;
    me->arr      = 0;
    if (me->f5() > 0) {
        do {
            e    = func_ov004_020c9594(me, me->f7(i));
            want = me->cnt + 1;
            old  = me->cap;
            if (old < want) {
                newcap = old + (old >> 1);
                if (newcap <= want) {
                    newcap = want;
                }
                n   = func_0202f470(newcap * 4);
                cnt = me->cnt;
                dst = n;
                src = me->arr;
                j   = 0;
                if (cnt > 0) {
                    do {
                        v = *src++;
                        j += 1;
                        *dst++ = v;
                    } while (j < cnt);
                }
                func_0202f49c(me->arr);
                me->cap = newcap;
                me->arr = n;
            }
            v       = me->cnt;
            me->cnt = v + 1;
            i += 1;
            me->arr[v] = e;
        } while (i < me->f5());
    }
    return me;
}
