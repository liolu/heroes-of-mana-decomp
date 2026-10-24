/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned int u32;
extern void MIi_CpuClear16(int, void *, int);
void convertPlane1bitToVC(u32 *dst, u8 *src) {
    int i;
    MIi_CpuClear16(0, dst, 0x6000);
    for (i = 0; i < 0xc000; i++) {
        int bit = i & 7;
        if (src[i >> 3] & (1 << bit)) {
            int idx = ((i >> 8) & 7) + (((i & 0xf800) >> 3) + (i & 0xf8));
            dst[idx] |= 2 << (bit * 4);
        }
    }
}
