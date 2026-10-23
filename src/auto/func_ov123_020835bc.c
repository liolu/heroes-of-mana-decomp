typedef unsigned char u8;
typedef int s32;
extern void func_ov123_02083618(s32, void *, s32 *);
extern void func_ov123_020835ec(void);
s32 func_ov123_020835bc(s32 a, s32 v) {
    s32 s[3];
    s[0] = v;
    s[1] = 0;
    func_ov123_02083618(a, func_ov123_020835ec, s);
    return s[1];
}