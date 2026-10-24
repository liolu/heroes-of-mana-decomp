#include "m2c.h"

typedef struct {
    s32 secs;
    u32 d : 10;
    u32 rest4 : 22;
    s32 pad8;
    u32 z : 1;
    u32 k : 1;
    u32 rest : 30;
} Save;

typedef struct {
    s32 vt;
    u32 a : 8;
    u32 b : 8;
    u32 c : 8;
    u32 d : 8;
    u32 h : 8;
    u32 m : 8;
    u32 s : 8;
    u32 e : 1;
    u32 g : 2;
    u32 k : 1;
    u32 rest8 : 4;
    u32 len : 16;
    u32 x : 8;
    u32 rest12 : 8;
} Obj;

void MI_CpuCopy8(void *, void *, s32);
void OS_FreeToHeap(s32, s32, void *);
Save *GetSaveGameData(s32 *);
s32 func_ov122_02055634(s32);
void func_ov122_0205d06c(void *);
u8 func_ov122_0205d0bc(void *);
u8 func_ov122_0205d0f8(void *);

void func_ov122_0205d128(Obj *o, s32 arg1) {
    s32 sz;
    Save *sv;
    s32 secs;
    u32 d;
    s32 t;

    sv     = GetSaveGameData(&sz);
    secs   = sv->secs;
    d      = sv->d;
    o->vt  = 0x204D6F48;
    o->a   = 2;
    o->b   = 0;
    o->c   = (u8) func_ov122_02055634(0x100);
    o->e   = 0;
    o->g   = arg1;
    o->k   = sv->k;
    t      = secs / 3600;
    o->h   = t / 60;
    o->m   = t % 60;
    o->s   = (secs / 60) % 60;
    o->d   = d;
    o->len = (u16) sz;
    MI_CpuCopy8(sv, (u8 *) o + 0x10, sz);
    if (sv != NULL) {
        OS_FreeToHeap(0, -1, sv);
    }
    o->b = func_ov122_0205d0bc(o);
    o->x = func_ov122_0205d0f8(o);
    func_ov122_0205d06c(o);
}
