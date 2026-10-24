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

void func_ov123_020c2e94(unsigned char *a) {
    Q *q;
    int n;
    int i;
    unsigned char *d;
    unsigned char *s;
    q = (Q *) (data_ov123_020e46d0 + 0x400);
    MI_CpuFill8(q, 0, 0xEF);
    MI_CpuCopy8(a, q->b + 0x40, 0x20);
    switch (*(int *) (a + 0x20)) {
        case 1:
            n     = 5;
            q->lo = 1;
            break;
        case 2:
            n     = 0xD;
            q->lo = 2;
            break;
        case 3:
            n     = 0x10;
            q->lo = 3;
            break;
        default:
            n     = 0;
            q->lo = 0;
            break;
    }
    d     = q->b + 0x80;
    s     = a + 0x28;
    q->hi = 0;
    i     = 0;
    do {
        MI_CpuCopy8(s, d, n);
        i++;
        d += 0x10;
        s += 0x20;
    } while (i < 4);
    q->c7 = 2;
    MI_CpuFill8((unsigned char *) q + 0xF0, 0, 4);
    q->cf5 = 1;
    q->cf6 = 1;
    func_ov123_020c2fac();
}
