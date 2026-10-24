/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Icon {
    u8 pad0[0xc];
    u32 f0c;
    u8 pad10[0x2e];
    u8 f3e;
} Icon;

typedef struct Tbl {
    s32 first;
    s32 pad4;
    u8 b8;
} Tbl;

typedef struct G1 {
    u8 pad[0x20];
    u32 f20;
    u8 pad2[0x76c];
    u8 area[4];
} G1;

typedef struct G2 {
    u8 pad[0x160];
    u8 *f160;
    u8 pad2[0x40c];
    u16 f570;
} G2;

extern G1 *data_ov000_02051548;
extern G2 *data_ov000_0205154c;
extern Tbl *LoadNclNceNcg2Table(s32 *, s32, s32);
extern Icon *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
extern s32 getNameString(s32, s32, s32 *);
extern void PutStringByObj(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern void SetPaletteDataToVram(void *, s32);

void PutSyouriHaibokuBoard(s32 a, s32 *list, s32 count) {
    s32 info[4];
    s32 len;
    Tbl *tbl;
    Icon *ic;
    s32 p;
    s32 y;
    s32 i;
    data_ov000_02051548->f20 |= 0x20000;
    info[0] = 5;
    info[1] = 0xb;
    info[2] = 1;
    info[3] = 1;
    tbl     = LoadNclNceNcg2Table(info, 0, 4);
    if (tbl != 0) {
        y = 0x68;
        y -= ((count - 1) * 0x18) / 2;
        for (i = 0; i < count; i++) {
            if (i == 0) {
                ic =
                    SetStatusIcon(0xffa5, 0, 0x44, y - 0x17, tbl->b8, 0, 0, (u8 *) data_ov000_02051548 + 0x78c, tbl->first, 0);
                ic->f3e |= 0x80;
                ic->f0c &= ~0x200000;
                p = getNameString(7, a + 0xf, &len);
                PutStringByObj(p, p + len, 0, 0x3c, y - 0x1b, 0, 1, 0, 0, 1, 0);
                if (p != 0) {
                    OS_FreeToHeap(0, -1, (void *) p);
                }
            }
            ic = SetStatusIcon(0xffa5, 1, 0x80, y, tbl->b8, 1, 0, (u8 *) data_ov000_02051548 + 0x78c, tbl->first, 0);
            ic->f3e |= 0x80;
            ic->f0c &= ~0x200000;
            p = getNameString(a + 0xc, list[i], &len);
            PutStringByObj(p, p + len, 0, 0x80, y - 6, 0, 1, 0, 0, 1, 0);
            if (p != 0) {
                OS_FreeToHeap(0, -1, (void *) p);
            }
            y += 0x18;
        }
        SetPaletteDataToVram(data_ov000_0205154c->f160 + data_ov000_0205154c->f570 * 32, 0);
    }
}
