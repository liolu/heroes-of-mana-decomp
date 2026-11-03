/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 f0 : 8;
    u32 dir : 3;
    u32 p1 : 3;
    u32 st : 8;
    u32 p2 : 2;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 kind : 3;
    u32 p3 : 3;
} W0;
typedef struct {
    W0 w0;
    u32 w4;
    u32 w8;
    u8 pad0[0x22];
    u16 f2e;
    u8 pad0b[0xC];
    s32 f3c;
    s32 f40;
    u8 pad1[4];
    s32 f48;
    u8 pad2[0xC];
    s32 f58;
    s32 f5c;
    s8 a60, a61, a62, a63, a64, a65;
    u8 a66, a67;
    u8 pad3[4];
    s32 f6c;
    s32 f70;
    u8 pad4[0x34];
    u16 fa8;
    u8 pad5[0x1A];
    s32 fc4;
    u16 fc8;
} Obj;
typedef struct {
    u8 pad[0x10];
    u32 f10;
} Sys;
extern Sys *data_ov000_02051548;
extern void OS_FreeToHeap(s32, s32, s32);
extern s32 CheckCanIsTherePos(s32, s32, s32);
extern void ObjAZtoAreaAZ(s32 *, s32 *);
extern s32 SetNowDownId_a2(s32, s32, Obj *);
extern s32 SetNowDownId_i2(s32, s32, Obj *);
extern s32 SetNowDownId_a(s32, s32, s32);
extern s32 SetNowDownId_i(s32, s32, s32);
extern s32 GetKisekiTable(s32, s32, s32, s32, s32, s32);
extern void SetNextKisekiPointAndDire(Obj *);
extern s32 CheckShipMoveTiming(Obj *);
extern void CheckAndSetGoingHook(Obj *, s32, s32);
extern void changeAnimationObj(Obj *, s32, s32);
extern s32 GetCanThroughKai(s32, s32, s32, s32, s32);
extern void changeDireForMove(Obj *, s32, s32);

s32 objSetDistance(Obj *o, s32 x, s32 z) {
    s32 tmp, zero;
    s32 t;
    s32 la, lb;
    if (o->fc4 != 0) {
        if (o->fc4 != 0) {
            OS_FreeToHeap(0, -1, o->fc4);
            o->fc4 = 0;
        }
        o->fc8 = 0;
        if (o->w0.st != 2) {
            o->w0.st = 0;
            o->f3c   = 0;
        }
    }
    o->a66 = x;
    o->a67 = z;
    if (o->a60 == x && o->a61 == z) {
        return 0;
    }
    if (CheckCanIsTherePos(o->w0.kind, x, z) == 0) {
        return 0;
    }
    if (o->f58 == o->f40 && o->f5c == o->f48) {
        la = o->f40;
        lb = o->f48;
        ObjAZtoAreaAZ(&la, &lb);
        o->a60 = la;
        o->a61 = lb;
        o->a62 = o->a60;
        o->a63 = o->a61;
        o->f6c = SetNowDownId_a2(la, lb, o);
        o->f70 = SetNowDownId_i2(la, lb, o);
        if (o->w0.b24 || o->w0.b25) {
            data_ov000_02051548->f10 |= 0x4000000;
        }
        t      = GetKisekiTable(o->w0.kind, o->a60, o->a61, x, z, o->f70);
        zero   = 0;
        o->f3c = zero;
        if (t != 0) {
            if (o->w0.st == 2) {
                o->fc4 = t;
                o->fc8 = *(u16 *) ((u8 *) data_ov000_02051548 + 0x2F4);
                return 1;
            }
            o->fc4   = t;
            o->fc8   = *(u16 *) ((u8 *) data_ov000_02051548 + 0x2F4);
            o->w0.st = 3;
            tmp      = ((u32) o->fa8 << 16) >> 30;
            SetNextKisekiPointAndDire(o);
            if (((o->w8 << 2) >> 31) != 0 && tmp != 2) {
                if ((((u32) o->fa8 << 16) >> 30) == 2) {
                    o->w0.st = 0;
                    o->f3c   = 0;
                    return 1;
                }
            }
            if (CheckShipMoveTiming(o) == 1) {
                CheckAndSetGoingHook(o, x, z);
            } else {
                changeAnimationObj(o, 0, o->w0.dir);
                o->w0.st = 5;
                o->f2e   = 0x3C;
                o->f3c   = 3;
            }
            return 1;
        }
    } else {
        s32 r2, dx, dz, ax, az;
        if (o->w0.b24 || o->w0.b25) {
            data_ov000_02051548->f10 |= 0x4000000;
        }
        if (o->w0.kind == 3 || o->w0.kind == 5) {
            r2 = GetCanThroughKai(o->a64, o->a65, o->f6c, o->a62, o->a63);
            if (r2 == 0) {
                r2 = GetCanThroughKai(o->a64, o->a65, -2, o->a62, o->a63);
            }
        } else {
            r2 = SetNowDownId_a(o->a62, o->a63, o->f70);
        }
        t   = SetNowDownId_i(o->a62, o->a63, r2);
        tmp = o->w0.kind;
        if (tmp != 3 && tmp != 5) {
            t &= ~1;
        }
        t = GetKisekiTable(tmp, o->a62, o->a63, x, z, t);
        if (t != 0) {
            o->fc4 = t;
            o->fc8 = *(u16 *) ((u8 *) data_ov000_02051548 + 0x2F4);
            if (o->w0.st == 2) {
                return 1;
            }
        } else {
            return 0;
        }
        CheckShipMoveTiming(o);
        o->f58   = (o->a62 << 14) - 0x4E000;
        o->f5c   = (o->a63 << 14) - 0x4E000;
        o->f3c   = 3;
        o->w0.st = 4;
        CheckAndSetGoingHook(o, x, z);
        dx = o->f58 - o->f40;
        dz = o->f5c - o->f48;
        if ((dx | dz) != 0) {
            az = dz < 0 ? -dz : dz;
            ax = dx < 0 ? -dx : dx;
            if (ax >= az) {
                dz = 0;
            } else {
                dx = 0;
            }
            changeDireForMove(o, dx, dz);
        }
        o->w4 |= 2;
        return 1;
    }
    return zero;
}
