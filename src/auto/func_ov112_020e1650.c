#include "m2c.h"
typedef struct S {
    u8 pad[0x48c];
    u32 lo : 17;
    u32 f17 : 1;
    u32 f18 : 1;
    u32 hi : 13;
} S;
typedef struct G {
    u8 pad[0xa0];
    s32 bgm;
} G;
void BGM_Fade(s32);
void func_02003948(s32, s32);
void func_020038ac(s32);
s32 func_ov112_020e1708(s32, s32);
extern S data_ov112_020ec588;
extern G *data_0203678c;
s32 func_ov112_020e1650(s32 a, s32 b) {
    s32 old;
    s32 r;
    old                     = data_0203678c->bgm;
    data_ov112_020ec588.f17 = 1;
    data_ov112_020ec588.f18 = b;
    if (data_0203678c->bgm != 0x28) {
        BGM_Fade(1);
        func_02003948(0x28, 0);
        func_020038ac(0x28);
        BGM_Fade(0);
    }
    r = func_ov112_020e1708(a, 0);
    if (data_0203678c->bgm != old) {
        BGM_Fade(1);
        func_02003948(old, 0);
        func_020038ac(old);
        BGM_Fade(0);
    }
    return r;
}
