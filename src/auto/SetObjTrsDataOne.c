/* compiler: 2.0/sp1p5 -profile */
typedef struct Src {
    unsigned int pad0 : 8;
    unsigned int m : 3;
    unsigned int pad1 : 20;
    unsigned int top : 1;
    unsigned char pad2[0x34];
    unsigned char b38;
    unsigned char b39;
    unsigned char pad3[6];
    int i40;
    int i44;
    int i48;
    unsigned char pad4[0x20];
    int i6c;
    int i70;
    unsigned char pad5[0x24];
    unsigned short s98;
} Src;
typedef struct Dst {
    unsigned int a : 5;
    unsigned int b : 3;
    unsigned int c : 4;
    unsigned int d : 6;
    unsigned int e : 8;
    unsigned int f : 1;
    unsigned int pad : 5;
    int i4;
    int i8;
    short sc;
    short se;
    short s10;
} Dst;
typedef struct Gd {
    unsigned char pad[0x4C4];
    unsigned char *buf;
    unsigned char pad2[8];
    int off;
} Gd;
extern Gd *data_ov000_02051548;

void SetObjTrsDataOne(Src *s) {
    Dst *d = (Dst *) (data_ov000_02051548->buf + data_ov000_02051548->off);
    d->a   = 0;
    d->sc  = s->i40 >> 4;
    d->se  = s->i48 >> 4;
    d->s10 = s->i44 >> 4;
    d->b   = s->m;
    d->c   = s->b39;
    d->d   = s->b38;
    d->i4  = s->i6c;
    d->i8  = s->i70;
    d->e   = s->s98 >> 8;
    d->f   = s->top;
    data_ov000_02051548->off += 0x14;
}
