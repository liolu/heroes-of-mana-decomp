/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad : 11;
    u32 st : 8;
} S0;

typedef struct {
    u32 pad : 23;
    u32 flag : 1;
} S8;

typedef struct {
    S0 w0;
    u8 pad[4];
    S8 w8;
    u8 pad1[0x2c - 0xc];
    u16 t2c;
} S;

typedef struct {
    u32 pad : 3;
    u32 sub : 3;
} U0;

typedef struct {
    u32 pad : 29;
    u32 b29 : 1;
} U8;

typedef struct {
    U0 w0;
    u8 pad0[4];
    U8 w8;
    u8 pad1[0x38 - 0xc];
    u8 b38;
    u8 pad2[0xe8 - 0x39];
    S *s;
} U;

typedef struct {
    u32 v : 9;
    u32 pad : 8;
    u32 bit17 : 1;
} T;

typedef struct {
    u8 pad[0x10];
    u8 *tbl;
} C;

typedef struct {
    u32 pad : 18;
    u32 b : 8;
} G10;

typedef struct {
    u32 pad : 15;
    u32 f : 5;
} G14;

typedef struct {
    u32 pad : 9;
    u32 f : 8;
} G18;

typedef struct {
    u8 pad0[0x10];
    G10 w10;
    G14 w14;
    G18 w18;
} G;

extern C *data_0203673c;
extern G *data_ov000_02051548;
void Status2Normal(U *);
void PutStatusGra(U *);
s32 IsThereMagicIcom(void);
void DeleteMagicIcom(void);
void deleteHataIcon(void);

void SetUnitStatus(U *u, s32 st) {
    if (u->s != NULL && u->s->w8.flag == 0 && u->w8.b29 == 0) {
        Status2Normal(u);
        u->s->w0.st = st;
        u->s->t2c   = ((T *) (data_0203673c->tbl + 8))[st].v;
        if (u->s->t2c == 0) {
            u->s->w0.st = 0;
            return;
        }
        u->s->t2c = ((T *) (data_0203673c->tbl + 8))[st].v * 60;
        PutStatusGra(u);
        if (((T *) (data_0203673c->tbl + 8))[u->s->w0.st].bit17 != 0) {
            if (data_ov000_02051548->w18.f == 2 && u->b38 == data_ov000_02051548->w10.b) {
                if (IsThereMagicIcom() == 1) {
                    DeleteMagicIcom();
                }
            }
            if (u->w0.sub == 1 && u->b38 == data_ov000_02051548->w10.b) {
                deleteHataIcon();
                data_ov000_02051548->w14.f = 2;
            }
        }
    }
}
