/* compiler: 1.2/sp3 */
/* MATCH 1.2/sp3 */
/* near start: 9 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern void func_ov123_020ae628(void);
extern void func_ov123_020c8cb8(s32, s32, s32);
extern void func_ov123_020c8d2c(s32, s32, s32, s32);
extern s32 func_ov123_020c92b0(s32, s32, s32);
extern s32 *data_ov123_020e45b0;

void func_ov123_020ae668(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 j;
    s32 i;

    j = 6;
    func_ov123_020ae628();
    i = 0;
    do {
        data_ov123_020e45b0[i] = func_ov123_020c92b0(0, j, 1);
        func_ov123_020c8cb8(data_ov123_020e45b0[i], -1, 1);
        i += 1;
        j += 1;
    } while (i < 4);
    func_ov123_020c8d2c(data_ov123_020e45b0[0], -1, arg0, arg2);
    func_ov123_020c8d2c(data_ov123_020e45b0[1], -1, arg1, arg2);
    func_ov123_020c8d2c(data_ov123_020e45b0[2], -1, arg0, arg3);
    func_ov123_020c8d2c(data_ov123_020e45b0[3], -1, arg1, arg3);
}
