/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 w10;
} Sub;

typedef struct {
    u32 pad0 : 8;
    u32 a : 1;
    u32 b : 1;
    u32 c : 1;
    u32 pad1 : 21;
    u8 padx[8];
    Sub *p0c;
    u8 pad2[0x54 - 0x10];
    u8 *p54;
    u8 pad3[4];
    s32 w5c;
    u16 w60;
    u16 w62;
    u16 w64;
    s16 s66;
    u16 w68;
    u16 w6a;
    u16 w6c;
    u8 pad4[0x78 - 0x6E];
    u8 data[4];
} Obj;

typedef struct {
    u8 pad0[0x20];
    u32 pad20a : 12;
    u32 f : 1;
    u32 pad20b : 19;
} G1;

typedef struct {
    u8 pad0[0xAF4];
    s32 dt;
} G2;

extern void getAnimation(s32, u16, u16, s32 *);
extern void setP_ObjTextureFlyArm(Obj *, u16);
extern s32 GetTexArea(s32);
extern void SetTex(u8 *, s32, s32, u8 *);
extern G1 *data_ov000_02051548;
extern G2 *data_ov000_0205154c;

void Animation_FLYARMWORK(Obj *o, s32 tex) {
    s32 sp[3];
    s32 idx;

    if (o->a == 0) {
        if (o->s66 != 0) {
            o->s66 = o->s66 - data_ov000_0205154c->dt;
        }
        if (o->s66 <= 0) {
            if (o->w62 + 1 >= o->w64) {
                if (o->b != 0) {
                    o->a = 1;
                } else {
                    o->w62 = 0;
                }
            } else {
                o->w62 = o->w62 + 1;
            }
            if (o->a == 0) {
                getAnimation(o->p0c->w10, o->w60, o->w62, sp);
                o->s66 = sp[0];
                if (o->w68 != sp[2]) {
                    o->c   = 1;
                    o->w68 = sp[2];
                }
            }
        }
    }
    if (data_ov000_02051548->f == 0 && o->c != 0 && o->w5c == -1) {
        setP_ObjTextureFlyArm(o, o->w68);
        idx = o->w5c = GetTexArea((o->w6a * o->w6c) / 2);
        if (idx != -1) {
            SetTex(o->p54 + 0xC, idx, (o->w6a * o->w6c) / 2, o->data);
            o->c = 0;
        }
    }
}
