/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a20c();                      /* extern */
s32 func_ov123_0207a27c(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207a62c(s32, void **);          /* extern */
s32 func_ov123_0207b3f4();                          /* extern */
s32 func_ov123_020875f8(void *, s32);               /* extern */
void *func_ov123_0208ab78();                        /* extern */
s32 func_ov123_0208ae00(void *, s32, s16);          /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */

s32 func_ov123_0208a954(void *arg0, s32 *arg1, s32 arg2, s16 arg3) {
    void *sp0;
    void *temp_r0;

    sp0 = NULL;
    if (func_ov123_0208ae00(arg0, arg2, arg3) != 0) {
        return 5;
    }
    temp_r0 = func_ov123_0208ab78();
    sp0     = temp_r0;
    if (temp_r0 != NULL) {
        memset(temp_r0, 0, 0xA0);
        M2C_FIELD(sp0, s32 *, 0)    = arg2;
        M2C_FIELD(sp0, s16 *, 4)    = arg3;
        M2C_FIELD(sp0, void **, 8)  = arg0;
        M2C_FIELD(sp0, s32 *, 0x1C) = func_ov123_0207b3f4();
        M2C_FIELD(sp0, s32 *, 0x88) = (s32) M2C_FIELD(sp0, s32 *, 0x1C);
        M2C_FIELD(sp0, s16 *, 0x64) = 0;
        M2C_FIELD(sp0, s16 *, 0x66) = 0;
        if ((func_ov123_020875f8(sp0 + 0x44, M2C_FIELD(arg0, s32 *, 0x3C)) != 0) &&
            (func_ov123_020875f8(sp0 + 0x50, M2C_FIELD(arg0, s32 *, 0x38)) != 0)) {
            M2C_FIELD(sp0, s32 *, 0x5C) = func_ov123_0207a27c(0x10, 0x40, 0);
            if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
                M2C_FIELD(sp0, s32 *, 0x60) = func_ov123_0207a27c(0x10, 0x40, 0);
                if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
                    M2C_FIELD(sp0, s32 *, 0x98) = func_ov123_0207a27c(4, 2, 0);
                    if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
                        M2C_FIELD(sp0, s32 *, 0x9C) = func_ov123_0207a27c(4, 2, 0);
                        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
                            func_ov123_0207a62c(M2C_FIELD(arg0, s32 *, 0xC), &sp0);
                            *arg1 = func_ov123_0208ae00(arg0, arg2, arg3);
                            if (*arg1 != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (sp0 != NULL) {
        func_ov123_020996a0(M2C_FIELD(sp0, void **, 0x44));
        func_ov123_020996a0(M2C_FIELD(sp0, void **, 0x50));
        if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
            func_ov123_0207a20c();
        }
        if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
            func_ov123_0207a20c();
        }
        if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
            func_ov123_0207a20c();
        }
        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
            func_ov123_0207a20c();
        }
        func_ov123_020996a0(sp0);
    }
    return 1;
}
