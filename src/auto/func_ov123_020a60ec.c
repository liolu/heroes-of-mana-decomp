/* compiler: 1.2/sp3 */
typedef struct {
    int a, b;
} P;
typedef struct {
    P p0;
    P p1;
    int flag;
} O;
typedef struct {
    P p0;
    P p1;
    P p2;
} T;
void func_ov123_020a5a9c(T *);
void func_ov123_020a60ec(O *o) {
    T t;
    func_ov123_020a5a9c(&t);
    *(long long *) &o->p0 = *(long long *) &t.p0;
    *(long long *) &o->p1 = *(long long *) &t.p1;
    if (*(long long *) &t.p0 == 0) {
        o->flag = 0;
    } else {
        o->flag = 1;
    }
}
