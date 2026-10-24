/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct R {
    char p[0x2e0];
    u8 *tbl;
} R;
extern R *data_ov000_02051548;
u32 GetTakasaXZ(u32 mask, int a, int b) {
    u8 *t;
    u16 off;
    u32 w, bit, res;
    int k;
    int i = (b * 0x28 + a) * 2;
    t     = data_ov000_02051548->tbl;
    off   = *(u16 *) (t + i);
    w     = *(u32 *) (t + off);
    bit   = 1;
    for (k = 0; k < 24; k++) {
        if ((mask & bit) && (w & bit)) {
            break;
        }
        bit <<= 1;
    }
    res = 1;
    if (w != 0) {
        do {
            if (k == 0) {
                break;
            }
            if (w & 1) {
                res++;
            }
            k--;
            w >>= 1;
        } while (w != 0);
    }
    return ((u32 *) (t + off))[res];
}
