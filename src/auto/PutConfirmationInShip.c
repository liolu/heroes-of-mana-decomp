/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 b0 : 1;
    u8 pad : 7;
} B;
typedef struct {
    u32 pad0 : 5;
    u32 b5 : 1;
    u32 pad1 : 26;
} F0;
typedef struct {
    F0 f0;
    u8 pad0[0x18 - 4];
    s32 s18;
    u8 pad1[0x3c - 0x1c];
    u8 s3c[0x34c - 0x3c];
    u8 c34c;
    u8 pad2;
    B b34e;
    u8 pad3;
    u16 *p350;
} G;
typedef struct {
    u8 pad[0x72];
    u16 h72;
} Icon;

extern G *data_ov109_020ea340;

u16 *ReadShipsCompFile(s32, s32, s32 *);
void OS_FreeToHeap(s32, s32, void *);
u8 *getNameString(s32, s32, s32 *);
void PutStringByObj(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
Icon *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);

void PutConfirmationInShip(s32 a, s32 b, s32 flag) {
    u16 *orig;
    G *g;
    s32 size;
    Icon *ic;
    u16 *src;
    u8 *name;
    u16 *dst;
    s32 col;
    s32 len;
    s32 i;

    orig = src                   = ReadShipsCompFile(2, 6, &size);
    data_ov109_020ea340->b34e.b0 = 1;
    dst                          = data_ov109_020ea340->p350;
    for (i = 0; i < size / 2; i++) {
        if (*src & 0x3ff) {
            *dst |= *src;
        }
        src++;
        dst++;
    }
    if (orig != NULL) {
        OS_FreeToHeap(0, -1, orig);
    }
    name = getNameString(a, b, &len);
    PutStringByObj(name, name + len, 0, 0x80, 0x50, 0, 1, 0, 0, 1, 0);
    if (name != NULL) {
        OS_FreeToHeap(0, -1, name);
    }
    if (flag == 0) {
        col     = data_ov109_020ea340->c34c;
        ic      = SetStatusIcon(0xff34, 0x49, 0x50, 0x68, col, 0, 0, data_ov109_020ea340->s3c, data_ov109_020ea340->s18, 0);
        ic->h72 = 0x49;
        ic      = SetStatusIcon(0xff35, 0x4b, 0xb0, 0x68, col, 0, 0, data_ov109_020ea340->s3c, data_ov109_020ea340->s18, 0);
        ic->h72 = 0x4b;
    } else {
        g       = data_ov109_020ea340;
        ic      = SetStatusIcon(0xff34, 0x76, 0x80, 0x68, g->c34c, 0, 0, g->s3c, g->s18, 0);
        ic->h72 = 0x76;
    }
    data_ov109_020ea340->f0.b5 = 1;
}
