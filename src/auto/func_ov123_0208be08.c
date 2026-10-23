extern int func_ov123_0207acf4(void *, void *, int *);
unsigned short func_ov123_0208be08(void *a) {
    int n = 8;
    unsigned short b[4];
    if (func_ov123_0207acf4(a, b, &n) == -1) {
        return 0;
    }
    return b[1];
}
