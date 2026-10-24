/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov123_020d98b0;
void MI_CpuCopy8(void *, void *, s32);
void func_ov123_02073574(u32, u8 *);
void func_0200cdbc(u8 *, s32, void *, s32, s32, s32, s32);

u8 *func_ov123_02073594(s32 mode, void *src, u8 *dst, u32 len) {
    u32 w;
    u8 b[4];
    if (mode != 2) {
        return 0;
    }
    if (len < 0x10) {
        return 0;
    }
    MI_CpuCopy8(src, &w, 4);
    func_ov123_02073574(w, b);
    func_0200cdbc(dst, 0x10, &data_ov123_020d98b0, b[3], b[2], b[1], b[0]);
    return dst;
}
