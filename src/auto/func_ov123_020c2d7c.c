/* compiler: 1.2/sp3 */
typedef struct Q {
    unsigned char b[0xE6];
    unsigned char lo : 2;
    unsigned char hi : 6;
    unsigned char c7;
    unsigned char pad[0xD];
    unsigned char cf5;
    unsigned char cf6;
} Q;
extern void MI_CpuCopy8(void *, void *, int);
extern void MI_CpuFill8(void *, int, int);
extern void func_ov123_020c2fac(void);
extern unsigned char *data_ov123_020e46d0;

void func_ov123_020c2d7c(unsigned char *a) {
    Q *q = (Q *) (data_ov123_020e46d0 + 0x400);
    MI_CpuFill8(q, 0, 0xEF);
    MI_CpuCopy8(a, q->b + 0xD1, 5);
    MI_CpuCopy8(a + 6, q->b + 0xD6, 5);
    MI_CpuCopy8(a + 0xC, q->b + 0xDB, 5);
    MI_CpuCopy8(a + 0x12, q->b + 0xE0, 5);
    MI_CpuCopy8(a + 0x18, q->b + 0x60, 0x20);
    MI_CpuCopy8(a + 0x39, q->b + 0x80, 0xD);
    MI_CpuCopy8(a + 0x47, q->b + 0x90, 0xD);
    MI_CpuCopy8(a + 0x55, q->b + 0xA0, 0xD);
    MI_CpuCopy8(a + 0x63, q->b + 0xB0, 0xD);
    MI_CpuCopy8(a + 0x71, q->b + 0x40, 0x20);
    q->lo = 2;
    q->hi = 0;
    q->c7 = 1;
    MI_CpuFill8((unsigned char *) q + 0xF0, 0, 4);
    q->cf5 = 1;
    q->cf6 = 1;
    func_ov123_020c2fac();
}
