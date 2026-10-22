#include "m2c.h"

M2C_UNK MI_CpuFill8(u8 *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_ov123_0209d354(M2C_UNK);               /* extern */
s32 *func_ov123_0209d368();                         /* extern */
M2C_UNK func_ov123_0209d378();                      /* extern */
M2C_UNK func_ov123_0209e5c4();                      /* extern */
M2C_UNK func_ov123_020a23a8();                      /* extern */

typedef struct {
    u8 a;
    u8 b;
    s16 c;
} Data_020e18e8;

extern Data_020e18e8 data_ov123_020e18e8;

void func_ov123_020a4398(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 *temp_r0;

    func_ov123_0209d378();
    *func_ov123_0209d368()                        = arg1;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 4)    = arg2;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 8)    = arg3;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x10) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1C) = 0;
    M2C_FIELD(func_ov123_0209d368(), s16 *, 0x1A) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0xE4) = 0;
    func_ov123_0209d354(0);
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0xF)    = 0;
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x19)   = 0;
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1AF)  = 0;
    M2C_FIELD(func_ov123_0209d368(), s16 *, 0x1B6) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1DC) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x200) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x2F4) = arg4;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x2F8) = arg5;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x2FC) = arg6;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x300) = arg7;
    MI_CpuFill8((u8 *) func_ov123_0209d368() + 0x304, 0, 0x40);
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x344) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x464) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x468) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x474) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x478) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x47C) = 0;
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x480) = 0;
    temp_r0                                        = func_ov123_0209d368();
    M2C_FIELD(temp_r0, s32 *, 0x174)               = 0;
    M2C_FIELD(temp_r0, s32 *, 0x178)               = 0;
    func_ov123_0209e5c4();
    {
        u8 *p            = (u8 *) &data_ov123_020e18e8;
        p[0]             = 0;
        p[1]             = 0;
        *(s16 *) (p + 2) = 0;
    }
    func_ov123_020a23a8();
}
