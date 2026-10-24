/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct H {
    u32 pad0 : 29;
    u32 going : 1;
    u32 pad1 : 2;
} HW;
typedef struct Hk {
    u8 p0[8];
    HW w8;
    u8 p0c[0x38 - 0xc];
    u8 f38;
    u8 p39[0xa8 - 0x39];
    u16 xlo : 7;
    u16 ylo : 7;
    u16 mode : 2;
    u8 pos : 7;
    u8 flag : 1;
} Hk;

extern void ChainAndAnchorSetOFF(Hk *);
extern s32 searchHookSamePosObj(s32, s32);
extern s32 checkHookStatus();
extern void changeAnchoMode(Hk *);

void CheckAndSetGoingHook(Hk *p, s32 x, s32 y) {
    if (p->w8.going) {
        if (p->mode != 0) {
            p->mode = 0;
            p->flag = 1;
            ChainAndAnchorSetOFF(p);
        }
        if (searchHookSamePosObj(x, y) != -1) {
            s32 r = checkHookStatus();
            if (r != -1 && r != p->f38) {
            } else {
                if (p->mode != 1) {
                    p->mode = 1;
                    p->flag = 1;
                }
                p->pos = 0;
                p->xlo = (u16) x;
                p->ylo = (u16) y;
            }
        }
        changeAnchoMode(p);
    }
}
