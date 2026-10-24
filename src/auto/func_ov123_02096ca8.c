/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void func_ov123_020960bc(void *, void *, s32);
extern void func_ov123_0209686c(void *, void *);
extern void MI_CpuFill8(void *, u8, u32);
extern u8 data_ov123_020dc328;
extern u8 data_ov123_020dc340;

void func_ov123_02096ca8(u8 *arg0) {
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(arg0 + 0x1014);
    if (arg0 == 0) {
        return;
    }
    func_ov123_020960bc(arg0, arg0 + 0x1a38, 0x20);
    func_ov123_0209686c(arg0, arg0 + 0x1a08);
    func_ov123_0209686c(arg0, arg0 + 0x19f8);
    if (*(s32 *) (arg0 + 0x19cc) != 0) {
        fn(&data_ov123_020dc328, *(s32 *) (arg0 + 0x19cc), 0);
        *(s32 *) (arg0 + 0x19cc) = 0;
    }
    if (*(s32 *) (arg0 + 0x19d0) != 0) {
        fn(&data_ov123_020dc340, *(s32 *) (arg0 + 0x19d0), 0);
        *(s32 *) (arg0 + 0x19d0) = 0;
    }
    MI_CpuFill8(arg0, 0, 0x1c14);
}
