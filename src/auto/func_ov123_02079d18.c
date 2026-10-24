extern char data_ov123_020d9b14[];
extern char data_ov123_020d9b18[];
extern void func_02020d04(void *, void *, int, int);
extern void *func_ov123_0207a194(void *, int);
void *func_ov123_02079d18(int *list, int (*cb)(void *, void *), void *arg) {
    int i;
    void *e;
    if (cb == 0) {
        func_02020d04(data_ov123_020d9b14, data_ov123_020d9b18, 0, 0x121);
    }
    for (i = *list - 1; i >= 0; i--) {
        e = func_ov123_0207a194(list, i);
        if (cb(e, arg) == 0) {
            return e;
        }
    }
    return 0;
}
