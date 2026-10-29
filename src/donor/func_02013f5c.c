/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ProcessBlock from https://github.com/7ucina/acww-decomp src/autoload_2/unk_0211a8d4.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed long long s64 __attribute__((aligned(4)));
typedef unsigned long long u64 __attribute__((aligned(4)));
typedef signed int s32;
typedef struct {
    u32 a, b, c, d;
    u64 total;
    u8 buffer[64];
} MD5Context;
typedef struct {
    u32 h[5];
    u32 totalLo;
    u32 totalHi;
    s32 blockLen;
    u8 block[64];
    u32 reserved[2];
} SHA1Context;
typedef void (*SHA1Compress)(SHA1Context *ctx, const void *data, u32 len);
extern u32 data_02035b9c[64];
extern u32 data_02035adc[48];
extern u8 data_0213c004[1];
extern SHA1Compress data_0213c1c8;
extern void MIi_CpuClear32(u32 data, void *dest, u32 size);
extern void MI_CpuFill8(void *dest, u32 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern void DGT_Hash2Reset(SHA1Context *ctx);
extern void DGT_Hash2SetSource(SHA1Context *ctx, const void *data, u32 len);
extern void DGT_Hash2GetDigest(SHA1Context *ctx, u8 *hash, ...);
extern void DGT_Hash2CalcHmac(u8 *out, const u8 *data, u32 dataLen, const u8 *key, s32 keyLen);
extern void DGT_Hash1Reset(MD5Context *ctx);
extern void DGT_Hash1SetSource(MD5Context *ctx, const void *data, u32 len);
extern void DGT_Hash1GetDigest_R(u8 *out, MD5Context *ctx);
extern void func_02013f5c(MD5Context *ctx);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
void DGT_Hash1GetDigest_R(u8 *out, MD5Context *ctx);
static inline u32 RotL(u32 x, int n) {
    return (x << n) | (x >> (32 - n));
}
static inline u32 FF(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) {
    a = a + ((b & c) | (~b & d)) + x + t;
    return b + RotL(a, s);
}
static inline u32 GG(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) {
    a = a + ((b & d) | (c & ~d)) + x + t;
    return b + RotL(a, s);
}
static inline u32 HH(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) {
    a = a + (b ^ c ^ d) + x + t;
    return b + RotL(a, s);
}
static inline u32 II(u32 a, u32 b, u32 c, u32 d, u32 x, u32 t, int s) {
    a = a + (c ^ (b | ~d)) + x + t;
    return b + RotL(a, s);
}
void func_02013f5c(MD5Context *ctx) {
    const u32 *p;
    s32 i;
    const u32 *t;
    u32 a        = ctx->a;
    u32 b        = ctx->b;
    u32 c        = ctx->c;
    u32 d        = ctx->d;
    const u32 *x = (const u32 *) ctx->buffer;
    const u32 *k = data_02035b9c;
    p            = x;
    for (i = 0; i < 4; i++) {
        a = FF(a, b, c, d, *p++, *k++, 7);
        d = FF(d, a, b, c, *p++, *k++, 12);
        c = FF(c, d, a, b, *p++, *k++, 17);
        b = FF(b, c, d, a, *p++, *k++, 22);
    }
    t = data_02035adc;
    for (i = 0; i < 4; i++) {
        a = GG(a, b, c, d, x[*t++], *k++, 5);
        d = GG(d, a, b, c, x[*t++], *k++, 9);
        c = GG(c, d, a, b, x[*t++], *k++, 14);
        b = GG(b, c, d, a, x[*t++], *k++, 20);
    }
    for (i = 0; i < 4; i++) {
        a = HH(a, b, c, d, x[*t++], *k++, 4);
        d = HH(d, a, b, c, x[*t++], *k++, 11);
        c = HH(c, d, a, b, x[*t++], *k++, 16);
        b = HH(b, c, d, a, x[*t++], *k++, 23);
    }
    for (i = 0; i < 4; i++) {
        a = II(a, b, c, d, x[*t++], *k++, 6);
        d = II(d, a, b, c, x[*t++], *k++, 10);
        c = II(c, d, a, b, x[*t++], *k++, 15);
        b = II(b, c, d, a, x[*t++], *k++, 21);
    }
    ctx->a += a;
    ctx->b += b;
    ctx->c += c;
    ctx->d += d;
}
extern u8 data_0213c004[1];
extern u32 data_02035adc[48];
extern u32 data_02035b9c[64];
