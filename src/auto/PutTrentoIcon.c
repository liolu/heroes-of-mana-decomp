/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x3e];
    u8 f3e;
} IconObj;
typedef struct {
    u8 pad[0x210];
    u32 a : 14;
    u32 kz : 14;
    u8 pad2[0x2d0 - 0x214];
} Ent;
typedef struct {
    u8 pad[0x28];
    Ent *ents;
} G2;
typedef struct {
    u8 pad[0x12c];
    s32 v12c;
    u8 pad2[0x1f4 - 0x130];
    void *r1f4;
    u8 pad3[0x200 - 0x1f8];
    u32 kz;
} G1;
typedef struct {
    u8 pad[0x500 + 0x6c];
    u16 v;
    u8 pad2[0x4b0 - 0x6c - 2];
} Pl;
extern Pl *data_ov000_0205154c;
extern G1 *data_ov000_02051548;
extern G2 *data_0203673c;
void deleteTrentoIcon(void);
IconObj *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void *SetKazuByObj(u32, s32, s32, s32, s32, s32, s32, s32);
void PutTrentoIcon(s32 a, s32 b, s32 x, s32 y) {
    IconObj *o;
    deleteTrentoIcon();
    o = SetStatusIcon(0xffb9, 0x16, x, y, ((u16 *) ((u8 *) data_ov000_0205154c + a * 0x4b0 + 0x500))[0x6c / 2], 0, 0,
                      (s32) ((u8 *) data_ov000_02051548 + 0x78c), data_ov000_02051548->v12c, a);
    o->f3e |= 0x80;
    data_ov000_02051548->r1f4 = SetKazuByObj(data_0203673c->ents[b].kz, x + 0x14, y, 0, 0, 0, a, 0);
    data_ov000_02051548->kz   = data_0203673c->ents[b].kz;
}
