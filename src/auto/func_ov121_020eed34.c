#include "m2c.h"
void func_ov121_020ee6d8(s32, s32);
void func_ov121_020ec77c(void);
typedef struct {
    u8 max;
    u8 cur;
    s16 off;
    u32 pad0;
    u32 flags;
    u8 pad[6];
    s16 base;
} Obj;
s32 func_ov121_020eed34(s32 arg0, Obj *p) {
    s32 i;
    switch (arg0) {
        case 0:
            if (p->cur == 0) {
                return 0;
            }
            p->flags |= 0x100;
            p->cur--;
            func_ov121_020ee6d8(0, 0);
            p->off = -0x30;
            for (i = 0; i < 0x30; i += 4) {
                func_ov121_020ec77c();
                p->off += 4;
            }
            p->flags &= ~0x100;
            p->off = 0;
            if (p->cur == 0) {
                return 0;
            }
            break;
        case 1:
            if (p->cur + p->base >= p->max) {
                return 0;
            }
            p->flags |= 0x100;
            func_ov121_020ee6d8(3, 0);
            for (i = 0; i < 0x30; i += 4) {
                func_ov121_020ec77c();
                p->off -= 4;
            }
            p->cur++;
            p->off = 0;
            p->flags &= ~0x100;
            if (p->cur + p->base >= p->max) {
                return 0;
            }
            break;
        default:
            break;
    }
    return 1;
}
