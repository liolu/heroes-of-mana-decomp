/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 *base;
    s32 arr[10];
    s32 x2c;
    u32 x30;
} Mat;

typedef struct {
    s16 a0;
    s8 t;
    u8 pad[0x14 - 3];
} Info;

typedef struct {
    s8 p0;
    s8 b1;
    s8 b2;
    u8 b3;
    s16 s4;
    s16 s6;
    u8 pad[0x2c - 8];
} Node;

typedef struct {
    u32 w0;
    u32 w4;
    u8 pad[0x20];
} Dl;

typedef struct {
    u8 pad[0x14];
    Info *x14;
    Dl *x18;
    Node *x1c;
    u8 pad2[4];
    s16 *x24;
} M;

typedef struct {
    u32 l4 : 4;
    u32 m : 2;
    u32 n : 8;
    u32 r : 18;
    u8 pad[0x3c - 4];
    Mat *x3c;
} P;

typedef struct {
    P *p;
    M *m;
} D;

typedef struct {
    u8 pad[0x14];
    u32 l : 14;
    u32 b14 : 1;
    u32 r : 17;
    u8 pad2[0x3b8 - 0x18];
    u32 x3b8;
} K;

extern D data_ov003_020aea80;
extern K *data_ov000_02051548;
s32 SetMaterial(s16, s32, s32);
void MI_WaitDma(u32);
void func_01ff82ec(s32, u32, u32);
void DrawModel(s32, s32);

void DrawModel(s32 idx, s32 arg) {
    s32 i;
    Node *node;
    s16 *list;
    node = &data_ov003_020aea80.m->x1c[idx];
    if (node->s4 > 0 && node->b3 == 1) {
        list = &data_ov003_020aea80.m->x24[node->s6];
        for (i = 0; i < node->s4; i++, list += 2) {
            Mat *mat = &data_ov003_020aea80.p->x3c[list[1]];
            if (mat->x2c != 0) {
                s32 t = data_ov003_020aea80.m->x14[list[0]].t;
                if (t != 0x1f && !data_ov000_02051548->b14) {
                    continue;
                }
                if (t == 0x1f && data_ov000_02051548->b14) {
                    continue;
                }
                if (SetMaterial(list[0], idx, t) == 1) {
                    if (data_ov003_020aea80.p->m == 0 && data_ov003_020aea80.p->n == 5) {
                        s32 off;
                        Mat *mt;
                        s32 k;
                        mt  = &data_ov003_020aea80.p->x3c[list[1]];
                        k   = 0;
                        off = 0;
                        if (mt->x2c > 0) {
                            do {
                                if (mt->arr[k] != 0) {
                                    s32 m;
                                    s32 words = mt->arr[k] / 4;
                                    u32 *src  = (u32 *) ((u8 *) mt->base + (off / 4) * 4);
                                    for (m = 0; m < words; m++) {
                                        *(u32 *) 0x4000400 = *src++;
                                    }
                                    data_ov000_02051548->x3b8 = data_ov000_02051548->x3b8 + mt->x30;
                                    off += mt->arr[k];
                                }
                                k++;
                            } while (k < mt->x2c);
                        }
                    } else {
                        Dl *dl;
                        MI_WaitDma(3);
                        dl = &data_ov003_020aea80.m->x18[list[1]];
                        func_01ff82ec(3, dl->w0, dl->w4);
                    }
                }
            }
        }
    }
    MI_WaitDma(3);
    if (node->b1 != -1) {
        DrawModel(node->b1, arg);
    }
    if (node->b2 != -1) {
        DrawModel(node->b2, arg);
    }
}
