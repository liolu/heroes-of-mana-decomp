/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "1.2/sp3" */
typedef struct {
    long long a;
    long long b;
    int c;
    int d;
} S;
extern void func_ov123_020a60ec(S *);
extern long long func_ov123_02094b28(void *);
int func_ov123_02094660(void *p) {
    S s;
    long long t;
    func_ov123_020a60ec(&s);
    if (s.c != 0) {
        t = func_ov123_02094b28(p);
        return s.a == t;
    } else {
        t = func_ov123_02094b28(p);
        return s.b == t;
    }
}
