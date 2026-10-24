typedef struct B {
    int w[8];
} B;
typedef struct O {
    char p[0xc];
    int state;
    char q[0x58];
    B m;
} O;
extern int func_ov123_0208a4c8();
extern void func_ov123_020870d0();
extern void func_ov123_02087208(B *);
extern int func_ov123_02088dec(O *, B *, B *);
int func_ov123_0208a1b0(O *o, int a, int b) {
    B y, x;
    int s = o->state;
    if (s != 2) {
        return func_ov123_0208a4c8(o, a, b, s) != 0;
    }
    if (b < 32) {
        return func_ov123_0208a4c8(o, a, b, s) != 0;
    }
    func_ov123_020870d0(&x);
    func_ov123_02087208(&y);
    func_ov123_020870d0(&o->m, &y);
    if (func_ov123_02088dec(o, &x, &y) == 0) {
        return 0;
    }
    o->state = 3;
    return 1;
}
