/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
extern void MI_CpuFill8(void *, int, int);
extern void func_ov123_0206e76c(void *, int, int);
extern u8 data_ov123_020df358[];

void func_ov123_0206e608(u8 *a, u8 *b, s32 c, s32 d) {
    u8 *p = data_ov123_020df358;
    u16 t, t2;
    MI_CpuFill8(p, 0, 0x64);
    t                   = *(u16 *) (b + 2);
    *(s16 *) (p + 0xA)  = (s16) ((t >> 8) | (t << 8));
    t                   = *(u16 *) (b + 0);
    *(s16 *) (p + 0x18) = (s16) ((t >> 8) | (t << 8));
    t                   = *(u16 *) (a + 0xC);
    t2                  = *(u16 *) (a + 0xE);
    *(u32 *) (p + 0x1C) = ((u16) ((t >> 8) | (t << 8)) << 16) | (u16) ((t2 >> 8) | (t2 << 8));
    if (b[0xD] & 0x10) {
        t                   = *(u16 *) (b + 8);
        t2                  = *(u16 *) (b + 0xA);
        *(u32 *) (p + 0x28) = ((u16) ((t >> 8) | (t << 8)) << 16) | (u16) ((t2 >> 8) | (t2 << 8));
        func_ov123_0206e76c(p, 4, d);
        return;
    }
    *(u32 *) (p + 0x28) = 0;
    t                   = *(u16 *) (b + 4);
    t2                  = *(u16 *) (b + 6);
    *(u32 *) (p + 0x24) = c + (((u16) ((t >> 8) | (t << 8)) << 16) | (u16) ((t2 >> 8) | (t2 << 8)));
    if (b[0xD] & 3) {
        *(u32 *) (p + 0x24) = *(u32 *) (p + 0x24) + 1;
    }
    func_ov123_0206e76c(p, 0x14, d);
}
