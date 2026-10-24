/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void VBlankIntrWaitInGame(void);
void func_02003734(u8, s32);
typedef struct B {
    u8 pad[0x108C];
    u32 p0 : 6;
    u32 idx : 3;
    u32 p1 : 23;
} B;
typedef struct G {
    u8 pad[0x2C];
    B *b;
} G;
extern G *data_0203673c;
extern u8 data_ov000_02050718[];

void BGM_Fade(s32 arg0) {
    s32 n = 0x1E;
    if (arg0 != 0) {
        func_02003734(0, n);
        n--;
        do {
            VBlankIntrWaitInGame();
        } while (n-- != 0);
    } else {
        func_02003734(data_ov000_02050718[data_0203673c->b->idx], n);
    }
}
