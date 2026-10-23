/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct PalObj {
    void *a;
    void *b;
    u32 size : 31;
    u32 flag : 1;
    struct PalObj *next;
} PalObj;
typedef struct Root {
    u8 pad[0x4b4];
    PalObj *head;
} Root;
extern Root *data_ov000_02051548;
PalObj *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
void SetExtObjPaletteData(void *p, void *q, u32 sz, u32 flag) {
    PalObj *o = func_0200ed38(0, -1, 0x10);
    MIi_CpuClear16(0, o, 0x10);
    o->flag                   = flag;
    o->a                      = p;
    o->b                      = q;
    o->size                   = sz;
    o->next                   = data_ov000_02051548->head;
    data_ov000_02051548->head = o;
}
