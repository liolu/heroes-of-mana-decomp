/* compiler: 1.2/sp3 */
extern char data_ov123_020d9c24, data_ov123_020d9c54, data_ov123_020d9c60, data_ov123_020d9d18, data_ov123_020d9d28,
    data_ov123_020d9d34, data_ov123_020d9d44;
extern void func_ov123_02086078(void *, void *);
extern void func_ov123_02086568(char *, char *, int);
extern void func_ov123_0207e128(void *, void *, void *);
extern void func_ov123_0207e0f0(void *, void *, int);

int func_ov123_0207bb48(void **a0, int a1, char *a2) {
    char buf[0x408];
    char *p;
    char *t;
    if (a0 == 0 || (t = (char *) *a0) == 0) {
        return 2;
    }
    if (*(int *) (t + 0x108) != 0) {
        return 0;
    }
    if (*(int *) (t + 0x1d8) == 4) {
        func_ov123_02086078(a0, &data_ov123_020d9c24);
        return 2;
    }
    if (a2 == 0) {
        func_ov123_02086078(a0, &data_ov123_020d9d18);
        return 2;
    }
    func_ov123_02086568(buf, a2, 0x401);
    if (buf[0] != 0) {
        p = buf;
        do {
            if (*p == 0x5c) {
                *p = 0x2f;
            }
            p++;
        } while (*p != 0);
    }
    func_ov123_0207e128(a0, t + 0x1f4, &data_ov123_020d9d28);
    func_ov123_0207e128(a0, t + 0x1f4, &data_ov123_020d9c54);
    func_ov123_0207e0f0(a0, t + 0x1f4, *(int *) (t + 0x198));
    func_ov123_0207e128(a0, t + 0x1f4, &data_ov123_020d9d34);
    func_ov123_0207e0f0(a0, t + 0x1f4, a1);
    func_ov123_0207e128(a0, t + 0x1f4, &data_ov123_020d9d44);
    func_ov123_0207e128(a0, t + 0x1f4, buf);
    func_ov123_0207e128(a0, t + 0x1f4, &data_ov123_020d9c60);
    return 0;
}
