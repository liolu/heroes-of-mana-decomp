/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct P {
    char p[0x74];
    u16 h;
} P;
extern u32 func_ov123_02073078(P *);
int func_ov123_02073a50(P *p, u8 *out) {
    u32 x;
    int h;
    if (p == 0) {
        return -0x27;
    }
    x = func_ov123_02073078(p);
    h = p ? p->h : 0;
    if (x == 0) {
        h = 0;
    }
    h                  = (u16) h;
    out[0]             = 8;
    out[1]             = 2;
    *(u16 *) (out + 2) = ((h >> 8) & 0xff) | ((h << 8) & 0xff00);
    *(u32 *) (out + 4) = ((x >> 24) & 0xff) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | ((x << 24) & 0xff000000);
    return 0;
}
