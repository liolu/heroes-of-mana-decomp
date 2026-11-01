typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u32 w[6];
} Blk24;

void func_ov123_020cfab0(u8 *dst, u8 *src) {
    *(Blk24 *) dst = *(Blk24 *) (src + 4);
}
