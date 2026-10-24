/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u32 sel : 2;
    u32 rest : 30;
} A;

typedef struct {
    s32 n;
    s32 items[1];
} L;

typedef struct {
    u8 pad[0x100];
    u8 *tbl[4];
} G;

extern G *data_ov000_02051548;

s32 *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
void OS_FreeToHeap(s32, s32, void *);
s32 GetRnd(void);

s32 DecideBuildHouse(A *a, L *l) {
    s32 *buf;
    s32 sel;
    s32 k;
    s32 i;
    s32 j;
    s32 v;
    s32 r;
    s32 cnt;

    if (l->n == 0) {
        return 9;
    }
    buf = func_0200ed38(0, -1, 0x18);
    MIi_CpuClear16(0, buf, 0x18);
    cnt = 0;
    for (i = 0; i < l->n; i++) {
        v = l->items[i];
        if (v <= 5) {
            s32 x = data_ov000_02051548->tbl[a->sel][v + 9];
            if (x != 0) {
                buf[v] = x;
                cnt++;
            }
        }
    }
    if (cnt == 0) {
        if (buf != 0) {
            OS_FreeToHeap(0, -1, buf);
        }
        return 9;
    }
    for (i = 0; i <= 5; i++) {
        if (buf[i] == 0) {
            j = i;
            do {
                if (j == 0) {
                    j = 5;
                } else {
                    j--;
                }
            } while (buf[j] == 0);
            buf[j] += data_ov000_02051548->tbl[a->sel][i + 9];
        }
    }
    sel = 0;
    r   = GetRnd() % 100;
    for (k = 0; k <= 5; k++) {
        if (buf[k] != 0) {
            if (buf[k] > r) {
                break;
            }
            sel = k;
            r -= buf[k];
        }
    }
    if (k > 5) {
        k = sel;
    }
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    return k;
}
