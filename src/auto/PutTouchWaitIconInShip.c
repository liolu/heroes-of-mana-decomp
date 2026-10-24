/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct S {
    u8 pad[0x18];
    s32 f18;
} S;
extern u8 *data_ov109_020ea340;

void SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void PutTouchWaitIconInShip(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p = data_ov109_020ea340;
    SetStatusIcon(0xFF03, 0x4F, arg1, arg2, p[arg0 * 8 + 0x34C], 0, 0, (s32) (p + 0x3C), *(s32 *) (p + 0x18), arg0);
}
