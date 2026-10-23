/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void MI_CpuCopy8(void *, void *, s32);
void func_ov123_02079028(u16 *, u16 *, u16 *, u16 *, s32, u16 *);
void func_ov123_020793f0(u16 *, u16 *, u16 *, s32);
void func_ov123_020795a4(u16 *, u16 *, u16 *, s32);
void func_ov123_02079718(u16 *, u16 *, u16 *, s32);
s32 func_ov123_020797c4(u16 *, s32);

void func_ov123_02078d14(u16 *a0, u16 *a1, u16 *a2, s32 n, u16 *buf) {
    u16 *p1 = buf + n;
    u16 *p2 = p1 + n;
    u16 *p3 = p2 + n;
    u16 *p4 = p3 + n;
    u16 *p5 = p4 + n;
    u16 *p6 = p5 + n;
    s32 sz  = n * 2;
    MI_CpuCopy8(a1, buf, sz);
    MI_CpuCopy8(a2, p2, sz);
    *(u16 *) ((u8 *) p2 + sz) = 1;
    if (func_ov123_020797c4(buf, n) > 0) {
        do {
            func_ov123_02079028(p1, p2, buf, p5, n, p6);
            MI_CpuCopy8(buf, p2, sz);
            MI_CpuCopy8(p5, buf, sz);
            func_ov123_020793f0(p5, p1, p3, n);
            func_ov123_020795a4(p5, p4, p5, n);
            MI_CpuCopy8(p3, p4, sz);
            MI_CpuCopy8(p5, p3, sz);
        } while (func_ov123_020797c4(buf, n) > 0);
    }
    func_ov123_02079718(p4, p4, a2, n);
    func_ov123_02079028(0, p4, a2, a0, n, p6);
}
