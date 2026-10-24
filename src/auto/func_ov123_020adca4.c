/* compiler: 1.2/sp3 */
typedef struct {
    void *a[2];
    void *b;
    int pad;
    int c;
} G;
extern G *data_ov123_020e4568;
extern void func_ov123_020cb5f8(int, int);
extern void func_ov123_020c8f8c(void *);
extern void func_ov123_020ca49c(void *);
void func_ov123_020adca4(int x) {
    int i;
    int t;
    func_ov123_020cb5f8(0, x);
    t = ((int *) data_ov123_020e4568)[4];
    if (t != 0) {
        func_ov123_020cb5f8(0, t);
    }
    for (i = 0; i < 2; i++) {
        if (((void **) data_ov123_020e4568)[i] != 0) {
            func_ov123_020c8f8c(((void **) data_ov123_020e4568)[i]);
        }
    }
    func_ov123_020c8f8c(((void **) data_ov123_020e4568)[2]);
    func_ov123_020ca49c(&data_ov123_020e4568);
}
