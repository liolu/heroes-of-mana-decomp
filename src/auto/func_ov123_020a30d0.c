/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020a18d8(void *buf, u8 *p, s32 i);
s32 func_02026aec(void *buf, s32 a, s32 b);
void func_ov123_020a09ec(u8 c, s32 v, s32 a, s32 b, s32 *arr, s32 n);

void func_ov123_020a30d0(s32 unused, s32 arg1, u8 *arg2) {
    u8 buf[16];
    s32 arr[128];
    s32 i;

    i = 0;
    for (;;) {
        if (func_ov123_020a18d8(buf, arg2 + 1, i) == -1) {
            break;
        }
        arr[i] = func_02026aec(buf, 0, 10);
        i++;
        if (i >= 0x80) {
            break;
        }
    }
    func_ov123_020a09ec(*arg2, arg1, 0, 0, arr, i);
}
