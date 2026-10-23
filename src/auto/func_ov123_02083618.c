typedef int s32;
extern s32 func_ov123_0207a3fc(s32 a, void *fn, void *p);
extern void func_ov123_02083658(void);
s32 func_ov123_02083618(s32 **a, s32 b, s32 c) {
    void *sp[3];
    s32 *t = *a;
    sp[1]  = (void *) b;
    sp[2]  = (void *) c;
    sp[0]  = a;
    if (func_ov123_0207a3fc(t[0x428 / 4], func_ov123_02083658, sp) == 0) {
        return 1;
    }
    return 0;
}
