/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
} S;
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
} Q;
typedef struct {
    u8 p0[0x1a4];
    S s;
    u8 p1[0x418 - 0x1ac];
    s32 f418;
    s32 f41c;
} R;

extern void func_02020d04(void *, void *, s32, s32);
extern void func_ov123_0207e5e0(R **, S, Q *, s32, s32);
extern Q *func_ov123_020996d4(s32);
extern u8 data_ov123_020da294[];
extern u8 data_ov123_020da2c8[];
extern u8 data_ov123_020da2dc[];
extern u8 data_ov123_020da2f4[];

void func_ov123_0207e68c(R **arg0, s32 arg1, s32 arg2) {
    S sp8;
    Q *temp_r0;
    R *temp_r5;

    temp_r5 = *arg0;
    if (temp_r5 == NULL) {
        func_02020d04(data_ov123_020da2c8, data_ov123_020da294, 0, 0x23);
    }
    if (arg1 == 0) {
        func_02020d04(data_ov123_020da2dc, data_ov123_020da294, 0, 0x24);
    }
    if (arg2 != 1) {
        if (arg2 != 0) {
            func_02020d04(data_ov123_020da2f4, data_ov123_020da294, 0, 0x25);
        }
    }
    if (arg2 == 1) {
        temp_r5->f41c = 1;
    }
    sp8 = temp_r5->s;
    if (sp8.a == 0) {
        return;
    }
    temp_r0 = func_ov123_020996d4(0x10);
    if (temp_r0 != NULL) {
        temp_r0->f0 = arg1;
        temp_r0->fc = arg2;
        temp_r0->f4 = temp_r5->f418;
        temp_r0->f8 = (s32) temp_r5;
    }
    func_ov123_0207e5e0(arg0, sp8, temp_r0, 0, 1);
}
