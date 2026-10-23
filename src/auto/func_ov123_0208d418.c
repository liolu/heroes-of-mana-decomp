typedef unsigned char u8;
typedef int s32;
void func_ov123_0208d418(u8 *p, s32 v) {
    s32 n = *(s32 *) (p + 0x100);
    if (n >= 0xFE || v < 1 || v > 0xFE) {
        return;
    }
    *(s32 *) (p + 0x100) = n + 1;
    p[n]                 = v;
}