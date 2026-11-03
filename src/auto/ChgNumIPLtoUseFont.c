/* compiler: 2.0/sp1p5 -profile */
/* near start: 6 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

extern void MIi_CpuClear16(s32, u16 *, s32);
extern u16 *func_0200ed38(s32, s32, s32);
extern u16 data_ov000_02050ae0[];

u16 *ChgNumIPLtoUseFont(u16 *src, u16 *end, s32 *outLen) {
    u16 *var_r1;
    u16 *temp_r0;
    s32 var_r2;
    s32 var_r8;
    u16 fb;
    u16 *var_r6;
    s32 temp_r9;
    u16 temp_r9_2;
    u32 var_r4;

    var_r6 = src;
    var_r8 = 0;
    do {
        if (data_ov000_02050ae0[var_r8] == 0x3F) {
            break;
        }
        var_r8 += 1;
    } while (var_r8 < 0x2E0);
    var_r4  = (u32) ((u8 *) end - (u8 *) var_r6) >> 1;
    temp_r9 = var_r4 * 2;
    temp_r0 = func_0200ed38(0, -1, temp_r9 + 2);
    MIi_CpuClear16(0, temp_r0, temp_r9 + 2);
    var_r1 = temp_r0;
    if (var_r4 != 0) {
        fb = ((var_r8 & 0xFF) << 8) | ((var_r8 >> 8) & 0xFF);
        do {
            temp_r9_2 = *var_r6;
            if (temp_r9_2 == 0) {
                break;
            }
            var_r2 = 0;
            do {
                if (temp_r9_2 == data_ov000_02050ae0[var_r2]) {
                    *var_r1 = ((var_r2 & 0xFF) << 8) | ((var_r2 >> 8) & 0xFF);
                    var_r1++;
                    break;
                }
                var_r2 += 1;
            } while (var_r2 < 0x2E0);
            if (var_r2 >= 0x2E0) {
                *var_r1 = fb;
                var_r1++;
            }
            var_r6++;
            var_r4 -= 1;
        } while (var_r4 != 0);
    }
    *outLen = (u8 *) var_r1 - (u8 *) temp_r0;
    return temp_r0;
}
