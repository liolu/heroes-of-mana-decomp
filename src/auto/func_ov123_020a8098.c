/* compiler: 1.2/sp2p3 -thumb */
typedef unsigned int u32;

u32 func_ov123_020a8098(u32 a, u32 b) {
    u32 hi = a & b;
    u32 x  = hi | ((a & ~b) + 1);
    u32 y  = hi | ~b;
    if (x >= y) {
        x = hi | 1;
    }
    return x;
}
