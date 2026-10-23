/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef int s32;
typedef struct B {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
} B;
extern s32 func_ov123_02073d8c(s32 a, B *p);
extern void func_ov123_0207af6c(s32 a, s32 b);
void func_ov123_0207ae7c(s32 a, B *src, u8 c) {
    B buf;
    buf    = *src;
    buf.b0 = c;
    func_ov123_0207af6c(func_ov123_02073d8c(a, &buf), -1);
}
