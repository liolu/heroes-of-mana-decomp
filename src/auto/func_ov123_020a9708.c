/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void *func_ov123_02068dcc(u16 idx);
void func_ov123_02068e44(s32 v);
s32 func_ov123_02068ee0(void);
void MIi_CpuCopy32(void *src, void *dst, s32 size);

s32 func_ov123_020a9708(u8 *dst, s32 lim) {
    s32 cnt;
    s32 i;

    func_ov123_02068e44(1);
    cnt = func_ov123_02068ee0();
    if (cnt > 0) {
        i = 0;
        if (cnt > 0) {
            do {
                if (i >= lim) {
                    break;
                }
                MIi_CpuCopy32(func_ov123_02068dcc((u16) i), dst, 0xC0);
                i++;
                dst += 0xC0;
            } while (i < cnt);
        }
    }
    func_ov123_02068e44(0);
    return cnt;
}
