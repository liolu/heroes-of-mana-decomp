/* compiler: 1.2/sp2p3 */
extern void (*data_ov123_020e0a7c)(int, int *, int);
void func_ov123_02073844(int *p) {
    if (p == 0) {
        return;
    }
    data_ov123_020e0a7c(0, p - 1, p[-1]);
}
