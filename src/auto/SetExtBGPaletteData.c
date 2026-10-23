/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct E {
    s32 a;
    s32 b;
    u32 f;
    struct E *next;
} E;
typedef struct G {
    u8 pad[0x4B8];
    E *head;
} G;
extern G *data_ov000_02051548;
extern E *func_0200ed38(u32, s32, s32);
extern void MIi_CpuClear16(s16, E *, s32);
void SetExtBGPaletteData(s32 a, s32 b, u32 c, u32 d) {
    E *e = func_0200ed38(0, -1, 16);
    MIi_CpuClear16(0, e, 16);
    e->f                      = (e->f & 0x7FFFFFFF) | (d << 31);
    e->a                      = a;
    e->b                      = b;
    e->f                      = (e->f & 0x80000000) | (c & 0x7FFFFFFF);
    e->next                   = data_ov000_02051548->head;
    data_ov000_02051548->head = e;
}
