/* compiler: 1.2/sp2p3 */
/* near start: 3 diffs with profile "1.2/sp2p3" */
/* near start: 32 diffs with profile "1.2/sp3" */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct {
    u8 p0[0x30];
    u8 b30;
    u8 p31;
    u16 h32;
    u8 p34[0x421];
    u8 b455;
} T;
int func_ov123_02076634(int, int);
void MI_CpuCopy8(void *, void *, int);
void func_ov123_02077798(T *);
int func_ov123_02076644(void *, int, int);
void func_ov123_020764b8(T *self, u8 *buf) {
    u8 *p;
    u16 r;
    int n;
    u8 *q;
    if (func_ov123_02076634(buf[0], buf[1]) == 0) {
        return;
    }
    MI_CpuCopy8(buf + 2, (u8 *) self + 0x34, 0x20);
    n = buf[0x22];
    p = buf + 0x23;
    if (n != 0x20) {
        self->b30 = 0;
    } else {
        MI_CpuCopy8(p, (u8 *) self + 0x74, 0x20);
        func_ov123_02077798(self);
    }
    q = p + n;
    {
        int lo = q[1];
        int hi = p[n];
        r      = func_ov123_02076644(q + 2, ((hi << 8) + lo) / 2, 2);
    }
    self->h32 = r;
    if (r != 0) {
        self->b455 = 1;
    }
}
