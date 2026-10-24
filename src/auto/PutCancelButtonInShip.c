/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct G {
    u8 *x;
    char p[0x14];
    int w18;
    char q[0x20];
    u8 d3c[1];
} G;
typedef struct S {
    char p[8];
    u8 b8;
    char q[0x69];
    u16 h72;
} S;
extern G *data_ov109_020ea340;
extern S *SetStatusIcon(int, int, int, int, int, int, int, void *, int, int);
void PutCancelButtonInShip(int a) {
    S *s   = SetStatusIcon(a, 0x4d, 0xf4, 0xb0, *((u8 *) data_ov109_020ea340 + 0x34c), 0, 0, (u8 *) data_ov109_020ea340 + 0x3c,
                           data_ov109_020ea340->w18, 0);
    s->h72 = 0x4d;
    s->b8  = 0xb;
    *(unsigned int *) data_ov109_020ea340 |= 0x400;
}
