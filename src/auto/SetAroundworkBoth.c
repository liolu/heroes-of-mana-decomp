/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    u8 pad[8];
    s16 x8;
    s16 xa;
    s16 xc;
    s16 xe;
    u8 pad2[2];
    s16 x12;
} O;
typedef struct {
    u8 pad[8];
    u8 *tbl;
} G;

s32 FX_Atan2Idx(s32, s32);
void MIi_CpuCopy16(void *, void *, s32);
void SetFlyArmAOM(void *, void *, u32);
void SetOneFlyArmWork(V3 *, u16, s32, s32, s32, u32, void *);
void *func_0200ed38(s32, s32, s32);
s32 func_0202d478(s32, s32);
extern G *data_0203673c;

void SetAroundworkBoth(O *arg0) {
    V3 v;
    s16 r5;
    void *r5b;
    s32 cnt;
    void *r7;
    s16 r4;
    s32 r8;
    u16 ang;

    r5  = arg0->xe;
    r4  = arg0->x12;
    r7  = func_0200ed38(0, -1, 0xC);
    v.x = arg0->x8 * 0x10;
    v.y = arg0->xa * 0x10;
    v.z = arg0->xc * 0x10;
    ang =
        (u16) ((u32) ((u16) (FX_Atan2Idx((s32) (0 - ((r5 * 0x10) - v.x)) >> 0xC, (s32) ((r4 * 0x10) - v.z) >> 0xC) + 0x8000) *
                      0x4B0) >>
               0x10);
    SetFlyArmAOM(r7, arg0, (u32) (*(s32 *) ((u8 *) arg0 + 4) << 0x17) >> 0x17);
    cnt = ((u32) (*(s32 *) (data_0203673c->tbl + ((u32) (*(s32 *) ((u8 *) arg0 + 4) << 0x17) >> 0x17) * 0x14 + 8) << 0x15) >>
           0x1C) +
          1;
    if (cnt == 0) {
        cnt += 1;
    }
    r8 = func_0202d478(0x4B0, cnt);
    if (cnt != 0) {
        do {
            r5b = r7;
            SetOneFlyArmWork(&v, ang, 0x12C, 0x400, 0x3C, (u32) (*(s32 *) arg0 << 0x12) >> 0x17, r7);
            cnt -= 1;
            if (cnt == 0) {
                break;
            }
            r7 = func_0200ed38(0, -1, 0xC);
            MIi_CpuCopy16(r5b, r7, 0xC);
            ang += r8;
        } while (cnt != 0);
    }
}
