/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad : 13;
    u32 kind : 2;
} W4;

typedef struct {
    u32 pad : 8;
    u32 val : 10;
} W8;

typedef struct {
    u8 pad0[4];
    W4 w4;
    W8 w8;
    u32 sel : 8;
} Info;

typedef struct {
    u8 pad0[0x3a];
    u8 idx;
    u8 pad1[0xd6 - 0x3b];
    u16 s;
    u8 pad2[0xe4 - 0xd8];
    Info *info;
} Unit;

typedef struct {
    u8 pad[272];
} Ent;

extern Ent data_ov003_020b0cf0[];
void WazaRingSound(s32);
void SetYUMIwork(Unit *, Ent *, s32);
void SetBOWGUNwork(Unit *, Ent *, s32);
void SetSLASHwork(Unit *, Ent *, s32);
void SetAroundwork(Unit *, Ent *, s32);
void Set3DireWazawork(Unit *, Ent *, s32);
void SetKAKUTOUwork(Unit *, Ent *, s32);
void SetBOMBwork(Unit *, Ent *, s32);
void SetAikyoWaza(Unit *, s32);

void OutPutFlyArm(Unit *u) {
    Info *i;
    WazaRingSound(u->s);
    i = u->info;
    if (i->w4.kind == 1) {
        switch (i->sel) {
            case 0:
                SetYUMIwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 1:
                SetBOWGUNwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 2:
            case 3:
                SetSLASHwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 4:
                SetAroundwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 5:
                Set3DireWazawork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 6:
                SetKAKUTOUwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
            case 7:
                SetBOMBwork(u, &data_ov003_020b0cf0[u->idx], i->w8.val);
                break;
        }
    } else if (i->w4.kind == 2) {
        SetAikyoWaza(u, u->s);
    }
}
