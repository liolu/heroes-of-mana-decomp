/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 sel : 2;
    u32 pad1 : 30;
} W4;
typedef struct {
    u32 pad0 : 14;
    u32 lv : 14;
    u32 pad1 : 4;
} W210;
typedef struct {
    u8 pad0[4];
    W4 w4;
    u8 pad1[0x210 - 8];
    W210 w210;
} O;
typedef struct {
    u8 pad[0x100];
    u8 *p[4];
} G;
typedef struct {
    u8 pad[4];
    u8 *tbl;
} T;

extern u8 data_ov003_020a7b7c[];
extern G *data_ov000_02051548;
extern T *data_0203673c;

void *func_0200ed38(u32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
void OS_FreeToHeap(u32, s32, void *);
s32 GetRnd(void);

u8 DecideMakeUnitFromType(O *o, s32 type) {
    s32 *w;
    s32 base;
    s32 i, j, sel, k, cnt, r;
    s32 t7;
    u8 *q;

    if (type >= 8) {
        return 0;
    }
    t7 = data_ov003_020a7b7c[type];
    if (t7 == 6) {
        return 0;
    }
    w = func_0200ed38(0, -1, 12);
    MIi_CpuClear16(0, w, 12);
    base = t7 * 6;
    cnt  = 0;
    for (i = 0; i < 3; i++) {
        q = (u8 *) ((s32) data_ov000_02051548->p[o->w4.sel] + base);
        if (data_0203673c->tbl[q[i * 2 + 0x14] * 32 + 0x15] <= o->w210.lv) {
            w[i] = q[i * 2 + 0x15];
            cnt++;
        }
    }
    if (cnt == 0) {
        if (w != NULL) {
            OS_FreeToHeap(0, -1, w);
        }
        return 0;
    }
    for (i = 0; i < 3; i++) {
        if (w[i] == 0) {
            j = i;
            do {
                if (j == 0) {
                    j = 2;
                } else {
                    j--;
                }
            } while (w[j] == 0);
            w[j] += data_ov000_02051548->p[o->w4.sel][base + i * 2 + 0x15];
        }
    }
    sel = 0;
    r   = GetRnd() % 100;
    for (k = sel; k < 3; k++) {
        if (w[k] != 0) {
            if (w[k] > r) {
                break;
            }
            sel = k;
            r -= w[k];
        }
    }
    if (k >= 3) {
        k = sel;
    }
    if (w != NULL) {
        OS_FreeToHeap(0, -1, w);
    }
    return data_ov000_02051548->p[o->w4.sel][base + k * 2 + 0x14];
}
