typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct I {
    u8 a[7];
    u8 b;
    u8 c;
    u8 pad;
    s16 sum;
} I;
typedef struct O {
    u8 pad[8];
    s8 v;
} O;
typedef struct G {
    I *i;
    int unk;
    O *o;
} G;
extern G data_ov120_020f4200;
u8 func_ov120_020f169c(void);
s8 func_ov120_020f171c(u8, int);
u8 func_ov120_020f17c8(int, int, O *);
void func_ov120_020ea3c8(int arg0) {
    int total = 0;
    u8 r;
    r                           = func_ov120_020f17c8(0, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[0] = r;
    total += data_ov120_020f4200.i->a[0];
    r                           = func_ov120_020f17c8(1, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[1] = r;
    total += data_ov120_020f4200.i->a[1];
    r                           = func_ov120_020f17c8(2, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[2] = r;
    total += data_ov120_020f4200.i->a[2];
    r                           = func_ov120_020f17c8(3, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[3] = r;
    total += data_ov120_020f4200.i->a[3];
    r                           = func_ov120_020f17c8(4, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[4] = r;
    total += data_ov120_020f4200.i->a[4];
    r                           = func_ov120_020f17c8(5, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[5] = r;
    total += data_ov120_020f4200.i->a[5];
    r                           = func_ov120_020f17c8(6, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->a[6] = r;
    total += data_ov120_020f4200.i->a[6];
    data_ov120_020f4200.i->c   = func_ov120_020f17c8(7, arg0, data_ov120_020f4200.o);
    data_ov120_020f4200.i->sum = total + data_ov120_020f4200.i->c;
    data_ov120_020f4200.i->b   = func_ov120_020f169c();
    data_ov120_020f4200.o->v   = func_ov120_020f171c(data_ov120_020f4200.i->b, arg0);
}
