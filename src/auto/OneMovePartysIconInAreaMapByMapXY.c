/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} Pt;

typedef struct {
    u32 act : 1;
    u32 p0 : 22;
    u32 kind : 4;
    u32 p1 : 5;
    u32 pad4;
    u32 f8;
    u32 col : 8;
    u32 colr : 24;
    u8 pad10[0x1c];
    u16 f2c : 1;
    u16 f2cr : 15;
    u8 pad2e[0x12];
    s32 x;
    u8 pad44[4];
    s32 y;
    u8 pad4c[0x14];
    s8 ex;
    s8 ey;
    u8 pad62[0x1a];
    Pt *pt;
} Icon;

typedef struct {
    u8 pad[0x10];
    u32 f : 28;
    u32 b : 1;
    u32 q : 3;
    u8 pad2[0x30 - 0x14];
    u32 fl;
} G;

extern G *data_ov000_02051548;

void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
void SetAreaMapMaskDot(s32, s32, u32);
void SetAreaMapMaskForEnemy(s8, s8, u32);

void OneMovePartysIconInAreaMapByMapXY(Icon *ic) {
    s32 x;
    s32 y;

    if (ic->act != 0) {
        x = ic->x;
        y = ic->y;
        ChangeXYtoAreaMapScreenXY2(&x, &y);
        if (ic->pt != 0) {
            ic->pt->x = x;
            ic->pt->y = y;
        }
        if (((ic->f8 << 5) >> 28) < 4) {
            u32 a = ic->f2c;
            if ((a != 0 && data_ov000_02051548->b != 0) || (a == 0 && data_ov000_02051548->b == 0)) {
                if (data_ov000_02051548->fl & 2) {
                    SetAreaMapMaskDot(x, y, ic->col);
                }
            } else {
                SetAreaMapMaskForEnemy(ic->ex, ic->ey, ic->col);
            }
        }
    }
}
