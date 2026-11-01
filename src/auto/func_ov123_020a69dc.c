/* compiler: 1.2/sp2p3 -thumb */
typedef unsigned int u32;

extern u32 func_0202d478(u32 a, u32 b);
extern void func_ov123_020a68d8(u32 a, u32 b, u32 c);

void func_ov123_020a69dc(u32 a, u32 b, u32 c) {
    u32 r7 = func_0202d478(b, 2);
    func_ov123_020a68d8(c, a + r7, r7);
    func_ov123_020a68d8(c + r7, a, r7);
    func_ov123_020a68d8(a, c, b);
}
