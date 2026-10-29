/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DGT_Hash1GetDigest_R from https://github.com/7ucina/acww-decomp src/autoload_2/unk_0211a8d4.c (license: MIT), reused by
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
extern u32 data_0213c0c8[64];
extern u32 data_0213c008[48];
extern u8 data_02035ad8[1];
extern SHA1Compress data_0213c1c8;
extern void MIi_CpuClear32(u32 data, void *dest, u32 size);
extern void MI_CpuFill8(void *dest, u32 data, u32 size);
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern void DGT_Hash2Reset(SHA1Context *ctx);
extern void DGT_Hash2SetSource(SHA1Context *ctx, const void *data, u32 len);
extern void DGT_Hash2GetDigest(SHA1Context *ctx, u8 *hash, ...);
extern void DGT_Hash2CalcHmac(u8 *out, const u8 *data, u32 dataLen, const u8 *key, s32 keyLen);
extern void DGT_Hash1Reset(MD5Context *ctx);
extern void func_02014408(MD5Context *ctx, const void *data, u32 len);
extern void func_02014344(u8 *out, MD5Context *ctx);
extern void func_02013f5c(MD5Context *ctx);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
void func_02014344(u8 *out, MD5Context *ctx) {
    u64 t = ctx->total << 3;
    u32 idx;
    u32 room;
    func_02014408(ctx, data_02035ad8, 1);
    idx  = (u32) (ctx->total & 63);
    room = 64 - idx;
    if (room < 8) {
        MI_CpuClear8(ctx->buffer + idx, room);
        func_02013f5c(ctx);
        idx  = 0;
        room = 64;
    }
    if (room > 8) {
        MI_CpuClear8(ctx->buffer + idx, room - 8);
    }
    *(u32 *) (ctx->buffer + 56) = (u32) t;
    *(u32 *) (ctx->buffer + 60) = (u32) (t >> 32);
    func_02013f5c(ctx);
    MI_CpuCopy8(ctx, out, 16);
    MI_CpuClear8(ctx, 88);
}
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
void func_02013f5c(MD5Context *ctx);
extern u8 data_02035ad8[1];
extern u32 data_0213c008[48];
extern u32 data_0213c0c8[64];
