typedef struct {
    unsigned char b[256];
} T;
extern void MIi_CpuClear16(int, void *, int);
extern void func_ov123_020a6378(void *);
extern void *func_ov123_020a4f04(void *);
extern void MI_CpuCopy8(void *, void *, int);
int func_ov123_020a5be4(T *p) {
    int s[5];
    int i;
    int j;
    void *r;
    MIi_CpuClear16(0, p, 0x400);
    for (i = 0; i < 3; i++) {
        p[i].b[0xe7] = 0xff;
    }
    func_ov123_020a6378(s);
    r = func_ov123_020a4f04(s);
    for (j = 0; j < 2; j++) {
        MI_CpuCopy8(r, &p->b[0xf0], 0xe);
        p++;
    }
    return 0;
}
