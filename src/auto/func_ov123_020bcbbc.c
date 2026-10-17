/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020baee4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020bc9b8(u8);                    /* extern */
s32 func_ov123_020bcb38();                          /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020ca898(M2C_UNK);                   /* extern */
s32 func_ov123_020ca8bc(M2C_UNK);                   /* extern */
s32 func_ov123_020ca8e0(M2C_UNK);                   /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_ov123_020e4664;
extern u16 data_ov123_020e4670;
extern void *data_ov123_020e4674;
extern M2C_UNK func_ov123_020bb4ac;
extern M2C_UNK func_ov123_020bb558;
extern M2C_UNK func_ov123_020bc62c;

void func_ov123_020bcbbc(void) {
    if (M2C_FIELD(data_ov123_020e4674, s32 *, 0x38) != 0) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e4674, u8 *, 0x45) != 0) {
        return;
    }
    if (func_ov123_020bcb38() != 0) {
        return;
    }
    if (func_ov123_020ca8e0(1) != 0) {
        func_ov123_020bc9b8(data_ov123_020e4664);
        return;
    }
    if (func_ov123_020ca8e0(2) != 0) {
        func_ov123_020c36bc(7);
        M2C_FIELD(data_ov123_020e4674, s8 *, 0x40) = 0xD;
        func_ov123_020b2410(&func_ov123_020bc62c);
        return;
    }
    if (func_ov123_020ca8bc(0x200) != 0) {
        if (data_ov123_020e4670 == 0x91) {
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) != 0) {
                return;
            }
            func_ov123_020c36bc(9);
            M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 1U;
            return;
        }
        func_ov123_020c36bc(0x13);
        M2C_FIELD(data_ov123_020e4674, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020bb4ac, 0, 0x78);
        return;
    }
    if (func_ov123_020ca898(0x200) != 0) {
        M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 0U;
        return;
    }
    if (func_ov123_020ca8bc(0x100) != 0) {
        if (data_ov123_020e4670 == 0) {
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) != 0) {
                return;
            }
            func_ov123_020c36bc(9);
            M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 1U;
            return;
        }
        func_ov123_020c36bc(0x13);
        M2C_FIELD(data_ov123_020e4674, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020bb558, 0, 0x78);
        return;
    }
    if (func_ov123_020ca898(0x100) != 0) {
        M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 0U;
        return;
    }
    if (func_ov123_020ca8bc(0x40) != 0) {
        func_ov123_020baee4(1);
        return;
    }
    if (func_ov123_020ca898(0x40) != 0) {
        M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 0U;
        return;
    }
    if (func_ov123_020ca8bc(0x80) != 0) {
        func_ov123_020baee4(3);
        return;
    }
    if (func_ov123_020ca898(0x80) != 0) {
        M2C_FIELD(data_ov123_020e4674, u8 *, 0x47) = 0U;
        return;
    }
    if (func_ov123_020ca8bc(0x20) != 0) {
        func_ov123_020baee4(0);
        return;
    }
    if (func_ov123_020ca8bc(0x10) == 0) {
        return;
    }
    func_ov123_020baee4(2);
}
