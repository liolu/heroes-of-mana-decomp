/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Pal {
    u32 a;
    u32 b;
    u32 val : 31;
    u32 flag : 1;
    struct Pal *next;
} Pal;

typedef struct {
    u8 pad[0x4bc];
    Pal *head;
} G;

extern G *data_ov000_02051548;
Pal *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);

void SetObjPaletteData(u32 a, u32 b, u32 val, u32 flag) {
    Pal *p = func_0200ed38(0, -1, 0x10);
    MIi_CpuClear16(0, p, 0x10);
    p->flag                   = flag;
    p->a                      = a;
    p->b                      = b;
    p->val                    = val;
    p->next                   = data_ov000_02051548->head;
    data_ov000_02051548->head = p;
}
