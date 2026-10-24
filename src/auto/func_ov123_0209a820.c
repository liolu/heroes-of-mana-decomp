extern int func_ov123_020a2980(unsigned char **);
extern int func_ov123_020a2a0c(int, int);
int func_ov123_0209a820(int key) {
    unsigned char *p[2];
    int n = func_ov123_020a2980(p);
    int i = 0;
    if (n > 0) {
        unsigned char *q = p[0];
        do {
            if (key == *q) {
                break;
            }
            i++;
            q++;
        } while (i < n);
    }
    if (i == n) {
        return 0;
    }
    return func_ov123_020a2a0c(i, n);
}
