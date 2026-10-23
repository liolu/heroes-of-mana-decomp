/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x3e];
    u8 f0 : 7;
    u8 f7 : 1;
} Ic;
typedef struct {
    u8 pad[0x20];
    u32 g0 : 12;
    u32 inShip : 1;
    u32 rest : 19;
} A;
extern A *data_ov000_02051548;
extern u8 *data_ov000_0205154c;
void PutTouchWaitIconInShip(s32, s32, s32);
Ic *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void PutTouchWaitIcon(s32 idx, s32 x, s32 y) {
    A *a = data_ov000_02051548;
    if (a->inShip) {
        PutTouchWaitIconInShip(idx, x, y);
    } else {
        u8 *b  = data_ov000_0205154c + idx * 0x4b0;
        Ic *ic = SetStatusIcon(0xffbc, 0x46, x, y, *(u16 *) (b + 0x56c), 0, 0, (s32) ((u8 *) a + 0x38c + 0x400),
                               *(s32 *) ((u8 *) a + 0x12c), idx);
        ic->f7 = 1;
    }
}
