/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_0207af34(s32);                      /* extern */
void func_ov123_02090688(void *);                   /* extern */
void func_ov123_020906f8(void *);                   /* extern */
void func_ov123_020996a0(s32);                      /* extern */

void func_ov123_02090624(void *arg0) {
    s32 zero = 0;
    s32 f;

    if (M2C_FIELD(arg0, s32 *, 0x7C) != 0) {
        func_ov123_020996a0(M2C_FIELD(arg0, s32 *, 0x7C));
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = zero;
    M2C_FIELD(arg0, s32 *, 0x80) = zero;
    f                            = M2C_FIELD(arg0, s32 *, 0x4B0);
    if (f != -1) {
        func_ov123_0207af34(f);
    }
    M2C_FIELD(arg0, s32 *, 0x4B0) = -1;
    M2C_FIELD(arg0, s32 *, 0)     = 1;
    func_ov123_02090688(arg0);
    M2C_FIELD(arg0, s32 *, 0x484) = -1;
    func_ov123_020906f8(arg0);
}
