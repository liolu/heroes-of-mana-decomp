/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[8];
    u32 p0 : 23;
    u32 kind : 4;
    u32 p1 : 5;
    u32 c : 8;
    u32 cp : 24;
    u8 pad2[0x1c];
    u16 flag : 1;
    u16 pad3 : 15;
    u8 pad4[0x12];
    s32 x;
    u8 pad5[4];
    s32 y;
    u8 pad6[0x14];
    s8 ex;
    s8 ey;
} U;
typedef struct {
    u8 pad[0x10];
    u32 p0 : 28;
    u32 mode : 1;
    u32 p1 : 3;
    u8 pad2[0xc];
    u32 q0 : 12;
    u32 shown : 1;
    u32 q1 : 19;
} G;
extern G *data_ov000_02051548;
void releaseUnitIconWorkOne(U *);
void PutOneAreaIcon(U *);
void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
void SetAreaMapMaskDot(s32, s32, u32);
void SetAreaMapMaskForEnemy(s8, s8, u32);
void SetUnitIconByAreaMap(U *u) {
    s32 sx;
    s32 sy;
    u32 f;
    releaseUnitIconWorkOne(u);
    if (data_ov000_02051548->shown == 0) {
        PutOneAreaIcon(u);
    }
    if (u->kind < 4) {
        f = u->flag;
        if ((f != 0 && data_ov000_02051548->mode != 0) || (f == 0 && data_ov000_02051548->mode == 0)) {
            sx = u->x;
            sy = u->y;
            ChangeXYtoAreaMapScreenXY2(&sx, &sy);
            SetAreaMapMaskDot(sx, sy, u->c);
        } else {
            SetAreaMapMaskForEnemy(u->ex, u->ey, u->c);
        }
    }
}
