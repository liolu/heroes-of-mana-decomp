typedef int s32;
extern s32 func_ov123_02090f88(s32 a, s32 b);
extern void func_ov123_0207a62c(s32 a, s32 *p);
void func_ov123_0208ea78(s32 *o, s32 x, s32 y) {
    s32 s[3];
    s[0] = func_ov123_02090f88(0, x);
    s[1] = func_ov123_02090f88(0, y);
    func_ov123_0207a62c(o[6], s);
}
