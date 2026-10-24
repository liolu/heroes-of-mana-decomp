/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02020d04(void *, void *, s32, s32);
void func_ov123_0207a62c(s32);
s32 func_ov123_02083774(s32 *, s32, s32 *);
extern u8 data_ov123_020dad88;
extern u8 data_ov123_020dad90;
typedef struct {
    s32 f0, f4, f8, fc, f10, f14, f18;
} S;
s32 func_ov123_020837b0(s32 *arg0, s32 arg1) {
    S s;
    s32 out;
    volatile s32 *q;
    u8 *temp_r6;

    temp_r6 = (u8 *) (*arg0 + 0x428);
    if (arg1 <= 0) {
        func_02020d04(&data_ov123_020dad88, &data_ov123_020dad90, 0, 0x2B5);
    }
    if (arg1 <= 0) {
        return 0;
    }
    if (func_ov123_02083774(arg0, arg1, &out) != 0) {
        return out;
    }
    q     = (volatile s32 *) &s;
    q[0]  = 0;
    q[1]  = 0;
    q[2]  = 0;
    q[3]  = 0;
    q[4]  = 0;
    q[5]  = 0;
    q[6]  = 0;
    s.f0  = arg1;
    s.f4  = 0;
    s.fc  = 0;
    s.f10 = 0;
    s.f18 = 0;
    s.f14 = 0;
    func_ov123_0207a62c(*(s32 *) temp_r6);
    *(s32 *) (temp_r6 + 4) = *(s32 *) (temp_r6 + 4) + 1;
    if (func_ov123_02083774(arg0, arg1, &out) != 0) {
        return out;
    }
    return 0;
}
