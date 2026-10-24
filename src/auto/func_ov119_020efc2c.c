#include "m2c.h"
typedef struct A {
    u8 pad[0x108c];
    u32 lo : 6;
    u32 f : 3;
    u32 hi : 23;
} A;
typedef struct B {
    u8 pad[0x2c];
    A *a;
} B;
typedef struct C {
    u8 pad[0x4f8];
    u16 cnt;
} C;
extern B *data_0203673c;
extern u8 data_ov000_02050718[];
extern C *data_ov119_020f2f68;
s32 func_ov119_020edf78(s32);
void func_02003734(s32, s32);
void func_ov119_020efc2c(void) {
    s32 v = func_ov119_020edf78(1);
    s32 m = data_ov000_02050718[data_0203673c->a->f];
    if (v > m) {
        v = m;
    }
    func_02003734(v, func_ov119_020edf78(3));
    data_ov119_020f2f68->cnt += 5;
}
