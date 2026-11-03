/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0200fa98(void);
void func_0200faac(s32);
void MI_CpuCopy8(void *, void *, u32);
extern void *data_ov123_020e46e8;

s32 func_ov123_020c57b8(s32 arg0) {
    u16 buf[7];
    u16 mask;
    s32 r5;
    u16 *p;

    r5   = func_0200fa98();
    p    = (u16 *) data_ov123_020e46e8;
    mask = (u16) (1 << arg0);
    if ((p[1] & mask) == 0) {
        func_0200faac(r5);
        return 0;
    }
    MI_CpuCopy8(p, buf, 0xE);
    func_0200faac(r5);
    if ((buf[2] & mask) != 0) {
        return 2;
    }
    if ((buf[3] & mask) != 0) {
        return 3;
    }
    if ((buf[4] & mask) != 0) {
        return 4;
    }
    if ((buf[5] & mask) != 0) {
        return 5;
    }
    if ((buf[6] & mask) != 0) {
        return 6;
    }
    return 1;
}
