/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_0200cdbc(char *, s32, char *, char *, char *);
extern void *func_02021338(void *, const void *, u32);
extern s32 func_02024c28(char *);
extern char *func_02024f10(s32, char *);
extern s32 func_ov123_020967ac(u8 *, s32 *, s32);
extern char data_ov123_020dc1a0[];
extern char data_ov123_020dc2a8[];

s32 func_ov123_02096af4(u8 *arg0, char *arg1, char *arg2) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r9;
    s8 temp_r9_2;
    char *temp_r8;
    char *temp_r0;
    s32 *temp_r5;

    temp_r5   = (s32 *) (arg0 + 0x19F8);
    temp_r4   = func_02024c28(arg2);
    temp_r9   = func_02024c28(data_ov123_020dc2a8);
    temp_r4_2 = temp_r4 + ((temp_r9 - 4) + func_02024c28(arg1));
    temp_r1   = temp_r5[2] - temp_r5[1];
    if ((temp_r4_2 + 1 > temp_r1) && (func_ov123_020967ac(arg0, temp_r5, (temp_r4_2 - temp_r1) + 1) == 0)) {
        return 1;
    }
    temp_r0   = func_02024f10(temp_r5[0], data_ov123_020dc1a0);
    temp_r8   = temp_r0 + 2;
    temp_r9_2 = temp_r0[2];
    func_02021338(temp_r8 + temp_r4_2, temp_r8, func_02024c28(temp_r8) + 1);
    temp_r8[func_0200cdbc(temp_r8, temp_r4_2 + 1, data_ov123_020dc2a8, arg1, arg2)] = temp_r9_2;
    temp_r5[1]                                                                      = temp_r5[1] + temp_r4_2;
    return 0;
}
