/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 x : 7;
    u16 y : 7;
    u16 z : 2;
} HB;
typedef struct {
    u32 w0_lo : 8;
    u32 anim : 3;
    u32 w0_hi : 21;
    u8 p4[0x34];
    u8 f38;
    u8 p39[0x60 - 0x39];
    s8 x60;
    s8 y61;
    u8 p62[4];
    s8 x66;
    s8 y67;
    u8 p68[0xa8 - 0x68];
    HB hb;
    u8 fAA;
    s8 fAB;
    u8 pAC[0xc4 - 0xac];
    s32 heap;
    s16 fC8;
} O;
s32 searchHookSamePosObj(u32, u32);
s32 checkHookStatus(s32);
s32 GetHookObjNo(u32, u32);
void SetHookCondSt(O *);
void changeAnimationObj(O *, s32, u32);
void SetObjActionToNONE(O *);
void SetConsiderFromData(O *, s32, s32, s32);
void SetOrderUnit(O *);
void OS_FreeToHeap(s32, s32, s32);
void changeAnchoMode(O *);

void SetShipAnchor(O *o) {
    s32 r;
    s32 h;
    r       = searchHookSamePosObj(o->hb.x, o->hb.y);
    o->hb.z = 0;
    if (r != -1) {
        r = checkHookStatus(r);
        if (r == -1 || r == o->f38) {
            o->hb.z = 2;
            o->fAB  = GetHookObjNo(o->hb.x, o->hb.y);
            SetHookCondSt(o);
        }
    }
    o->fAA |= 0x80;
    changeAnimationObj(o, 0, o->anim);
    SetObjActionToNONE(o);
    o->x66 = o->x60;
    o->y67 = o->y61;
    SetConsiderFromData(o, 0, 0, 0);
    SetOrderUnit(o);
    h = o->heap;
    if (h != 0) {
        if (h != 0) {
            OS_FreeToHeap(0, -1, h);
            o->heap = 0;
        }
        o->fC8 = 0;
    }
    changeAnchoMode(o);
}
