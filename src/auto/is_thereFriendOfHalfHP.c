/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 11;
    u32 idx : 8;
    u32 rest : 13;
    u32 w4;
    u32 pad2 : 23;
    u32 flag : 1;
    u32 rest2 : 8;
    u32 w0c;
    u16 h10;
    u16 h12;
} I;
typedef struct O {
    u32 act : 1;
    u32 p0 : 31;
    u32 w4;
    u32 a : 23;
    u32 f : 4;
    u32 b : 5;
    u32 low8 : 8;
    u32 hi24 : 24;
    u8 pad[0x1c];
    u16 side : 1;
    u16 rest : 15;
    u8 pad1[0x12];
    s32 x;
    s32 y;
    s32 z;
    u8 pad2[0x9c];
    I *ip;
    u8 pad3[0x24];
} O;
extern O data_ov003_020b0cf0[];
extern s32 CheckCanTargetting(O *);
extern s32 FX_Sqrt(s32);

s32 is_thereFriendOfHalfHP(O *o, s32 side) {
    O *p      = data_ov003_020b0cf0;
    s32 range = (o->low8 << 14) + 0x7000;
    s32 i;
    s32 best  = 0x2710000;
    s32 found = -1;
    for (i = 0; i < 0x42; i++, p++) {
        if (p->act != 0 && p->f < 4 && side == p->side && p != o) {
            if (CheckCanTargetting(p) != 0 && p->ip != 0 && p->ip->flag == 0 && p->ip->h10 * 2 <= p->ip->h12) {
                s32 dx = ((p->x - o->x) << 8) / 0x4000;
                s32 dy = ((p->y - o->y) << 8) / 0x4000;
                s32 dz = ((p->z - o->z) << 8) / 0x4000;
                s32 d  = FX_Sqrt(dx * dx + dy * dy + dz * dz);
                if (d <= range && best > d) {
                    best  = d;
                    found = i;
                }
            }
        }
    }
    return found;
}
