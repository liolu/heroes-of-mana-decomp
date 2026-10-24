/* compiler: 1.2/sp3 */
typedef struct Hdr {
    int magic;
    int ver;
    unsigned char a;
    unsigned char len;
    unsigned short c;
    int d;
    int e;
} Hdr;
extern void MI_CpuCopy8(void *, void *, unsigned int);
extern int func_02024ea0(void *, void *, int);
extern int func_ov123_0209ab40(void);
extern unsigned char *func_ov123_0209d368(void);
extern int func_ov123_020a09ec(int, int, int, int, void *, int);
extern unsigned char data_ov123_020dd3c0[];

void func_ov123_0209d7e8(unsigned char *src, unsigned int size) {
    Hdr h;
    unsigned char buf[0x80];
    unsigned int off = 0;
    if (func_ov123_0209ab40() != 5) {
        if (func_ov123_0209ab40() != 6) {
            return;
        }
        if (func_ov123_0209d368()[0x15] != 2 && func_ov123_0209d368()[0x15] != 3) {
            return;
        }
    }
    if (size < 0x14) {
        return;
    }
    while (1) {
        MI_CpuCopy8(src, &h, 0x14);
        if (func_02024ea0(&h, data_ov123_020dd3c0, 4) != 0) {
            return;
        }
        if (h.ver != 3) {
            return;
        }
        MI_CpuCopy8(src + 0x14, buf, h.len);
        if (func_ov123_020a09ec(h.a, h.e, h.d, h.c, buf, h.len >> 2) == 0) {
            return;
        }
        off += h.len + 0x14;
        if (off + 0x14 > size) {
            return;
        }
    }
}
