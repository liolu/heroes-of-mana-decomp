/* compiler: 1.2/sp2p3 -thumb */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 a;
    s32 b;
} P;
s32 func_0202d478(s32, s32);
void func_ov123_020734ac(void *, s32, s32, s32);
void func_ov123_020a6864(s32 a0, P *p, s32 a2, s32 a3, s32 *q) {
    P v;
    s64 sum;
    sum = 0;
    v   = *p;
    sum += func_0202d478(q[0] * 0x01FF6210, 0x40);
    sum += func_0202d478(q[1] * 0x01FF6210, 0x40);
    func_ov123_020734ac(&v, 1, (s32) sum, (s32) (sum >> 32));
}
