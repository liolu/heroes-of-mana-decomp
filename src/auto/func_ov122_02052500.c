/* MATCH 2.0/sp1p5 */
/* near start: 9 diffs with profile "2.0/sp1p5" */
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct R0 {
    u32 lo : 8;
    u32 m : 8;
    u32 h : 8;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 b30 : 1;
    u32 b31 : 1;
} R0;
typedef struct R1 {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 b5 : 1;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 b12 : 1;
    u32 b13 : 1;
    u32 rest : 18;
} R1;
typedef struct R2 {
    u32 pad : 24;
    u32 top : 8;
} R2;
typedef struct A {
    char pad[0x8bc];
    R2 w8bc;
    R0 w8c0;
    R1 w8c4;
    u32 w8c8, w8cc;
} A;
typedef struct R3 {
    u32 lo : 16;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 rest : 14;
} R3;
typedef struct B {
    char pad[4];
    u16 h4;
    R3 w8;
    u32 wc;
} B;
typedef struct C {
    char pad[0x44];
    u32 tab[0x20];
} C;
typedef struct D {
    char pad[0xd64];
    u32 w64, w68;
} D;
typedef struct E {
    char pad[0x2c];
    char *p2c;
} E;
extern A data_ov122_02065b20;
extern B data_ov122_02062b20;
extern C data_ov122_020647c0;
extern D data_ov122_02063b20;
extern E *data_0203673c;
extern int func_0201509c(void *);
extern void func_02015130(void *);

void func_ov122_02052500(void) {
    int sp0[2];
    int i;
    int j;
    data_ov122_02065b20.w8c0.b25 = 1;
    data_ov122_02065b20.w8c0.b26 = 1;
    data_ov122_02065b20.w8c0.b24 = 0;
    data_ov122_02065b20.w8c4.b0  = 0;
    data_ov122_02065b20.w8c0.b29 = 0;
    data_ov122_02065b20.w8c0.b30 = 0;
    data_ov122_02065b20.w8c4.b1  = 0;
    data_ov122_02065b20.w8c4.b2  = 0;
    data_ov122_02065b20.w8c0.b31 = 0;
    data_ov122_02062b20.h4       = 0;
    data_ov122_02062b20.w8.b17   = 0;
    data_ov122_02062b20.w8.b16   = 0;
    data_ov122_02062b20.wc       = 0;
    data_ov122_02065b20.w8c0.b27 = 0;
    data_ov122_02065b20.w8c0.b28 = 0;
    data_ov122_02065b20.w8c4.b3  = 0;
    data_ov122_02065b20.w8c4.b4  = 0;
    data_ov122_02065b20.w8c8     = 0;
    data_ov122_02065b20.w8cc     = 0;
    data_ov122_02065b20.w8c0.m   = 0;
    data_ov122_02065b20.w8c0.h   = 0;
    data_ov122_02065b20.w8c4.b6  = 1;
    data_ov122_02065b20.w8c4.b7  = 0;
    data_ov122_02065b20.w8c4.b10 = 0;
    data_ov122_02065b20.w8bc.top = 0x34;
    data_ov122_02065b20.w8c0.lo  = 0x34;
    data_ov122_02062b20.w8.lo    = 0x34;
    data_ov122_02065b20.w8c4.b12 = 0;
    data_ov122_02065b20.w8c4.b13 = 0;
    i                            = 0x32;
    j                            = 0x3e8;
    do {
        u32 *r;
        r    = (u32 *) (data_0203673c->p2c + j);
        r[4] = (r[4] & ~0x3FC00000) | ((u32) ((u8) i << 24) >> 2);
        i++;
        j += 0x14;
    } while (i <= 0x5c);
    if (func_0201509c(sp0) != 0) {
        func_02015130(sp0);
    }
    j = 0;
    do {
        data_ov122_020647c0.tab[j] = 0;
        j++;
    } while (j < 0x20);
    data_ov122_02063b20.w64 = 0;
    data_ov122_02063b20.w68 = 0;
}
