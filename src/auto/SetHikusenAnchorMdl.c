/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s16 x, y, z;
} W;
typedef struct {
    u16 f : 1;
    u16 rest : 15;
} Fl;
typedef struct {
    u8 pad[4];
    Fl fl;
} M;
M *AddModel(u8 *p, s32 a, V *b, V *c, W *d, s32 e, s32 f, s32 g);
void SetHikusenAnchorMdl(u8 *obj) {
    V scale;
    V pos;
    W rot;
    M *m;
    scale.x = 0x199;
    scale.y = 0x199;
    scale.z = 0x199;
    pos.x   = 0;
    pos.y   = 0;
    pos.z   = 0;
    rot.x   = 0;
    rot.y   = 0;
    rot.z   = 0;
    m       = AddModel(obj + 4, 0, &scale, &pos, &rot, 0, 0, 0);
    m->fl.f = 0;
}
