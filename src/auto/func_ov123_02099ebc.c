/* compiler: 1.2/sp3 */
/* near start: 1 diffs with profile "1.2/sp3" */
extern int func_02024c28(char *);
extern void func_02024d0c(char *, int, int);
extern int func_02024ea0(int, char *, int);
extern int func_02024ed4(int, int);

int func_ov123_02099ebc(char *s, char *out, int in, int ch) {
    int p;
    int q;
    int len;
    if (out == 0) {
        return -1;
    }
    p = func_02024ed4(in, ch);
    if (p == 0) {
        return -1;
    }
    while (1) {
        if (func_02024ea0(p + 1, s, func_02024c28(s)) != 0 || ch != ((signed char *) ((char *) func_02024c28(s) + p))[1]) {
            q = func_02024ed4(p + 1, ch);
            if (q == 0) {
                return -1;
            }
            p = func_02024ed4(q + 1, ch);
            if (p == 0) {
                return -1;
            }
        } else {
            break;
        }
    }
    q = func_02024ed4(p + 1, ch);
    if (q == 0) {
        return -1;
    }
    p = func_02024ed4(q + 1, ch);
    if (p != 0) {
        len = p - (q + 1);
    } else {
        len = func_02024c28((char *) (q + 1));
    }
    func_02024d0c(out, q + 1, len);
    out[len] = 0;
    return len;
}
