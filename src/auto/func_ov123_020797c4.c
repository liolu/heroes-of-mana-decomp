/* compiler: 1.2/sp2p3 */
typedef unsigned short u16;
typedef int s32;
extern s32 func_ov123_02079808(s32 a, s32 b, s32 c);
s32 func_ov123_020797c4(u16 *p, s32 n) {
    s32 f = p[n - 1] & 0x8000;
    if (f != 0) {
        return -1;
    }
    if (func_ov123_02079808((s32) p, n, f) != 0) {
        return 1;
    }
    return 0;
}
