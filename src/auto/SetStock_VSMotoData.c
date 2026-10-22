/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void ReleaseStock_VSMotoData(void);
extern void *func_0200ed38(u32, s32, s32);
extern void MIi_CpuCopy16(void *, void *, s32);
typedef struct {
    u32 used : 1;
    u32 r0 : 31;
    u32 w1;
    u32 pad[11];
} Ent;
typedef struct {
    u8 pad[0x24];
    Ent *tab;
    void *raw;
} Src;
typedef struct {
    u8 pad[0x764];
    void *a;
    void *b;
    u32 cnt : 8;
    u32 rest : 24;
} Dst;
extern Src *data_0203673c;
extern Dst *data_ov000_02051548;
void SetStock_VSMotoData(void) {
    Ent *e;
    s32 i;
    ReleaseStock_VSMotoData();
    data_ov000_02051548->a = func_0200ed38(0, -1, 0x2D0);
    MIi_CpuCopy16(data_0203673c->raw, data_ov000_02051548->a, 0x2D0);
    i = 0;
    e = data_0203673c->tab;
    for (;;) {
        if (!e->used) {
            break;
        }
        i++;
        e->w1 = (e->w1 & ~0xC0) | 0x20;
        e++;
        if (i >= 0x58) {
            break;
        }
    }
    data_ov000_02051548->cnt = i;
    if (data_ov000_02051548->cnt != 0) {
        data_ov000_02051548->b = func_0200ed38(0, -1, data_ov000_02051548->cnt * 0x34);
        MIi_CpuCopy16(data_0203673c->tab, data_ov000_02051548->b, data_ov000_02051548->cnt * 0x34);
    }
}
