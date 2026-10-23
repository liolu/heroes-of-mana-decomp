/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct Ctx {
    u32 st[4];
    unsigned long long len;
    u8 buf[64];
} Ctx;
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern void func_02013f5c(Ctx *c);
void func_02014408(Ctx *ctx, const u8 *data, u32 len) {
    u32 off;
    u32 room;
    u32 n;
    const u8 *p;
    off = (u32) ctx->len & 0x3f;
    ctx->len += len;
    room = 64 - off;
    if (room > len) {
        if (len == 0) {
            return;
        }
        MI_CpuCopy8(data, ctx->buf + off, len);
        return;
    }
    MI_CpuCopy8(data, ctx->buf + off, room);
    func_02013f5c(ctx);
    len -= room;
    n = len >> 6;
    p = data + room;
    if ((int) n > 0) {
        do {
            MI_CpuCopy8(p, ctx->buf, 64);
            p += 64;
            func_02013f5c(ctx);
            n--;
        } while ((int) n > 0);
    }
    if ((len & 0x3f) == 0) {
        return;
    }
    MI_CpuCopy8(p, ctx->buf, len & 0x3f);
}
