/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef unsigned int u32;

extern s32 func_ov123_020ca49c(void *ap);

s32 func_ov123_020c94c8(u32 a, u32 b, u32 c, u32 d, ...) {
    return func_ov123_020ca49c(&a);
}
