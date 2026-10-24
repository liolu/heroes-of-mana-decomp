/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_0207b3f4(void);
void func_ov123_0208e308(void *, void *);
void func_ov123_0208e588(void *, void *, s32);
void func_ov123_0208ea78(void *, void *, void *);
s32 func_ov123_02090ed8(void *, s32);
extern void *data_ov123_020db93c[];

void func_ov123_0208dfd4(u8 *arg0, u8 *arg1, s8 *arg2, s32 arg3) {
    s32 i;
    s32 len;
    s32 fl;

    if (*arg2 != 0) {
        return;
    }
    arg2 += 5;
    arg3 -= 5;
    fl = arg1[0x14] & 4;
    if (fl) {
        i = 0;
        if (*(s32 *) (arg0 + 0x40) > 0) {
            do {
                len = func_ov123_02090ed8(arg2, arg3);
                if (len < 0) {
                    break;
                }
                func_ov123_0208ea78(arg1, data_ov123_020db93c[arg0[0x2C + i]], arg2);
                i++;
                arg2 += len;
                arg3 -= len;
            } while (i < *(s32 *) (arg0 + 0x40));
        }
        arg1[0x14] |= 0x41;
    } else {
        func_ov123_0208e588(arg1, arg2, arg3);
        arg1[0x14] |= 0x43;
    }
    arg1[0x14] &= 0xF3;
    *(u32 *) (arg1 + 0x1C) = func_ov123_0207b3f4() - *(u32 *) (arg1 + 0x1C);
    func_ov123_0208e308(arg0 + 8, arg1);
    (*(void (**)(void *, s32, void *, s32))(arg0 + 0x44))(arg0, 0, arg1, *(s32 *) (arg0 + 0x48));
}
