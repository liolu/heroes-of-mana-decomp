#include "m2c.h"

struct Src {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4(s32);
    u16 h4;
    u16 pad6;
    s32 w8, wc;
    u16 h10;
    u16 pad12;
    s32 w14, w18;
    u16 h1c;
    u16 pad1e;
    s32 w20;
};
struct Sub {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32);
    virtual s32 f3();
    virtual s32 f4(s32);
};
struct Dst {
    virtual void f0();
    u8 pad4[4];
    u16 h8;
    u16 pad_a;
    s32 wc, w10;
    u16 h14;
    u16 pad16;
    s32 w18, w1c;
    u16 h20;
    u16 pad22;
    s32 w24;
    u8 pad28[8];
    s32 cap, cnt;
    s32 *arr;
};

extern "C" {
s32 *func_0202f470(s32);
void func_0202f49c(s32 *);
void func_ov004_020c91fc(void *);
void func_ov004_020c9874(void *);
s32 func_ov004_020c9a8c(Dst *, Src *, s32);
extern u8 data_ov004_020cf74c[];
Dst *func_ov004_020c98f4(Dst *a, Src *b, s32 c);
}

Dst *func_ov004_020c98f4(Dst *a, Src *b, s32 c) {
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

    *(u8 **) a = data_ov004_020cf74c;
    func_ov004_020c91fc((u8 *) a + 4);
    func_ov004_020c9874((u8 *) a + 0x28);
    a->cap = 0;
    a->cnt = 0;
    a->arr = 0;
    a->h8  = b->h4;
    a->wc  = b->w8;
    a->w10 = b->wc;
    a->h14 = b->h10;
    a->w18 = b->w14;
    a->w1c = b->w18;
    a->h20 = b->h1c;
    a->w24 = b->w20;
    b->f3();
    ((Sub *) ((u8 *) a + 0x28))->f2(b->f4(c));
    i = 0;
    if (((Sub *) ((u8 *) a + 0x28))->f3() > 0) {
        do {
            e    = func_ov004_020c9a8c(a, b, ((Sub *) ((u8 *) a + 0x28))->f4(i));
            want = a->cnt + 1;
            old  = a->cap;
            if (old < want) {
                newcap = old + (old >> 1);
                if (newcap <= want) {
                    newcap = want;
                }
                n   = func_0202f470(newcap * 4);
                cnt = a->cnt;
                dst = n;
                src = a->arr;
                j   = 0;
                if (cnt > 0) {
                    do {
                        v = *src++;
                        j += 1;
                        *dst++ = v;
                    } while (j < cnt);
                }
                func_0202f49c(a->arr);
                a->cap = newcap;
                a->arr = n;
            }
            v      = a->cnt;
            a->cnt = v + 1;
            i += 1;
            a->arr[v] = e;
        } while (i < ((Sub *) ((u8 *) a + 0x28))->f3());
    }
    return a;
}
