extern int *func_ov123_0207a4f0(int, void *);
struct S {
    int *p;
    int k;
    short s;
    char pad[0x9a];
};
int func_ov123_0208ae00(char *a, int b, short c) {
    struct S x;
    int *r;
    x.k = b;
    x.s = c;
    x.p = &x.k;
    r   = func_ov123_0207a4f0(*(int *) (a + 0xc), &x);
    if (r) {
        return *r;
    }
    return 0;
}
