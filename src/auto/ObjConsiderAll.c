/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 p0 : 11;
    u32 id : 8;
    u32 r0 : 13;
    u32 pad4;
    u32 p8 : 23;
    u32 flag : 1;
    u32 r8 : 8;
} Obj;
typedef struct {
    u32 a : 1;
    u32 p0 : 13;
    u32 g : 8;
    u32 r0 : 10;
    u32 pad4;
    u32 p8 : 23;
    u32 f : 4;
    u32 r8 : 5;
    u8 pad[0x54];
    s8 x;
    s8 y;
    u8 pad2[0x86];
    Obj *obj;
    u8 pad3[0x24];
} Ent;
typedef struct {
    u32 pad0;
    u32 p4 : 17;
    u32 q : 1;
    u32 r4 : 14;
    u8 pad[0x1c];
    u32 p24 : 8;
    u32 z : 1;
    u32 r24 : 23;
} Hdr;
typedef struct {
    u32 p8 : 18;
    u32 k : 5;
    u32 r8 : 9;
} Bits;
typedef struct {
    u8 pad[0x10];
    u8 *tab;
} Tab;
s32 CheckCanTargetting(Ent *);
s32 GetRnd(void);
void Logic_separate(Ent *);
void changeOccasion(s32, void *, Ent *, s32, s32);
extern Tab *data_0203673c;
extern Hdr *data_ov000_02051548;
extern Ent data_ov003_020b0cf0[];

void ObjConsiderAll(void) {
    Ent *e;
    s32 i;
    s32 r;
    Obj *o;

    e = data_ov003_020b0cf0;
    if (data_ov000_02051548->z == 0) {
        if (data_ov000_02051548->q == 0) {
            i = 0;
            do {
                if (e->a != 0) {
                    if (CheckCanTargetting(e) != 0 && (o = e->obj, o != 0)) {
                        if (o->flag == 0 && e->f < 4 && e->g == 0) {
                            if (((Bits *) (data_0203673c->tab + o->id * 4 + 8))->k == 7) {
                                r = GetRnd();
                                changeOccasion(1, (u8 *) e + 0xCC, e, e->x + 5 - (r & 3), e->y + 5 - (GetRnd() & 3));
                            } else {
                                Logic_separate(e);
                            }
                        }
                    }
                }
                i += 1;
                e += 1;
            } while (i < 0x42);
        }
    }
}
