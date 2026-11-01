typedef unsigned int u32;
typedef unsigned char u8;

u8 *func_ov123_020d01a0(u8 *p, u32 i) {
    u32 *t = *(u32 **) (p + 0x4000 + 0xd54);
    return p + 0x9c + 0x800 + t[i] * 0x1b8;
}
