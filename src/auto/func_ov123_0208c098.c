typedef struct {
    int a;
    int b;
    int c;
} I;
extern void *data_ov123_020e12f0;
extern int func_ov123_0207a204(void *);
extern I *func_ov123_0207a194(void *, int);
I *func_ov123_0208c098(int key) {
    int i;
    if (data_ov123_020e12f0 == 0) {
        return 0;
    }
    for (i = 0; i < func_ov123_0207a204(data_ov123_020e12f0); i++) {
        I *p = func_ov123_0207a194(data_ov123_020e12f0, i);
        if (p->c == key) {
            return p;
        }
    }
    return 0;
}
