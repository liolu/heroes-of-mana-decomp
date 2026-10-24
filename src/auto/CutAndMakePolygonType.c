/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 v[12];
} Mtx;
typedef struct Node {
    u32 a : 4;
    u32 kind : 2;
    u32 rest : 26;
    u16 f4 : 1;
    u16 fn : 7;
    u16 f4r : 8;
    u8 pad6[6];
    struct Node *next;
    s32 w10;
    s32 sx, sy, sz;
    s32 tx, ty, tz;
    s16 rx, ry, rz;
} Node;
typedef struct {
    u8 pad[0x14];
    u32 flags;
    u8 pad2[0x2b4];
    Node *head;
} Glob;

extern Glob *data_ov000_02051548;
extern void (*data_ov003_020a9b44[])(Node *);
extern s32 data_ov003_020aea84;
extern Node *data_ov003_020aea80;

void mtx_Scale(Mtx *, s32, s32, s32);
void mtx_RotateZ(Mtx *, u16);
void mtx_RotateY(Mtx *, u16);
void mtx_RotateX(Mtx *, u16);
void mtx_Concat(Mtx *, Mtx *, Mtx *);
void CutAndMakePolygon(s32, Mtx *);

void CutAndMakePolygonType(s32 type) {
    Mtx r;
    Mtx m;
    Node *n;
    s32 k;
    n = data_ov000_02051548->head;
    for (;;) {
        if (n == 0) {
            break;
        }
        k = n->kind != 0;
        if (n->f4 != 0 && k == type) {
            data_ov003_020aea84 = n->w10;
            data_ov003_020aea80 = n;
            if (n->fn != 0) {
                data_ov003_020a9b44[n->fn](n);
            }
            mtx_Scale(&m, n->sx, n->sy, n->sz);
            m.v[9]  = n->tx / 10;
            m.v[10] = n->ty / 10;
            m.v[11] = n->tz / 10;
            if (n->rz != 0) {
                mtx_RotateZ(&r, n->rz);
                mtx_Concat(&m, &r, &m);
            }
            if (n->ry != 0) {
                mtx_RotateY(&r, n->ry);
                mtx_Concat(&m, &r, &m);
            }
            if (n->rx != 0) {
                mtx_RotateX(&r, n->rx);
                mtx_Concat(&m, &r, &m);
            }
            if (n->a != 0) {
                data_ov000_02051548->flags |= 0x10;
            } else {
                data_ov000_02051548->flags &= ~0x10;
            }
            CutAndMakePolygon(n->kind, &m);
        }
        n = n->next;
    }
}
