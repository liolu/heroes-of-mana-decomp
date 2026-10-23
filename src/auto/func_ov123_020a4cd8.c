extern void MI_CpuCopy8(void *, void *, int);
extern int func_020213f0(void *, void *, int);
extern char data_ov123_020dd4c0;
unsigned short func_ov123_020a4cd8(void *a) {
    unsigned short s[6];
    MI_CpuCopy8(a, s, 8);
    if (func_020213f0(&s[3], &data_ov123_020dd4c0, 2) == 0) {
        return s[2];
    }
    return 0;
}
