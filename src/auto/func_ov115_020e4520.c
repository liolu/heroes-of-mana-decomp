#include "m2c.h"

typedef struct {
    u32 p0 : 8;
    u32 b8 : 1;
    u32 p1 : 23;
} F8;
typedef struct {
    u8 max;
    u8 cur;
    s16 off;
    u8 pad0[4];
    F8 f8;
    u8 pad1[0x12 - 0xc];
    s16 h12;
} O;

void func_ov115_020e3dec(s32, s32, s32);
void func_ov115_020e28d4(void);

s32 func_ov115_020e4520(s32 cmd, O *o) {
    s32 i;

    switch (cmd) {
        case 0x2b:
            if (o->cur == 0) {
                return 0;
            }
            o->f8.b8 = 1;
            o->cur--;
            func_ov115_020e3dec(0, 0, 0);
            o->off = -0x18;
            for (i = 0; i < 0x18; i += 4) {
                func_ov115_020e28d4();
                o->off += 4;
            }
            o->f8.b8 = 0;
            o->off   = 0;
            if (o->cur == 0) {
                return 0;
            }
            break;
        case 0x2c:
            if (o->cur + o->h12 >= o->max) {
                return 0;
            }
            o->f8.b8 = 1;
            func_ov115_020e3dec(0xb, 0, 0);
            for (i = 0; i < 0x18; i += 4) {
                func_ov115_020e28d4();
                o->off -= 4;
            }
            o->cur++;
            o->off   = 0;
            o->f8.b8 = 0;
            if (o->cur + o->h12 >= o->max) {
                return 0;
            }
            break;
        case 0:
            if (o->cur == 0) {
                return 0;
            }
            o->f8.b8 = 1;
            for (i = 0; i < 0x10; i += 4) {
                func_ov115_020e28d4();
                o->off -= 4;
            }
            o->f8.b8 = 0;
            o->cur--;
            if (o->cur == 0) {
                return 0;
            }
            break;
        case 1:
            if (o->cur + o->h12 >= o->max) {
                return 0;
            }
            o->f8.b8 = 1;
            for (i = 0; i < 0x10; i += 4) {
                func_ov115_020e28d4();
                o->off += 4;
            }
            o->cur++;
            o->f8.b8 = 0;
            if (o->cur + o->h12 >= o->max) {
                return 0;
            }
            break;
    }
    return 1;
}
