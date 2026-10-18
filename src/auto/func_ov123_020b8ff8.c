/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
M2C_UNK func_ov123_020b2398(s32 *, s32 *);          /* extern */
M2C_UNK func_ov123_020b23c0(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020ca49c(void **);               /* extern */
M2C_UNK func_ov123_020cae80(s32);                   /* extern */
extern M2C_UNK GX_LoadOBJPltt;
extern M2C_UNK data_ov123_020dde94;
extern void *data_ov123_020e4658;
extern M2C_UNK func_ov123_020b8a48;
extern M2C_UNK func_ov123_020bd1bc;
extern M2C_UNK func_ov123_020c0dec;

void func_ov123_020b8ff8(void) {
    s32 sp0;
    s32 sp4;

    func_ov123_020ae260();
    func_ov123_020cae80(M2C_FIELD(data_ov123_020e4658, s32 *, 4));
    func_ov123_020c9af4(0);
    func_ov123_020ae580(&data_ov123_020dde94, &GX_LoadOBJPltt);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x15);
    func_ov123_020b2398(&sp0, &sp4);
    if (sp4 == 0) {
        func_ov123_020b23fc(2, 1);
        func_ov123_020b23c0(0, sp0);
        func_ov123_020b2410(&func_ov123_020bd1bc);
    } else if (M2C_FIELD(data_ov123_020e4658, u8 *, 0x2A) == 0) {
        func_ov123_020b23fc(0, 1);
        func_ov123_020b23c0(1, 0);
        func_ov123_020b2410(&func_ov123_020b8a48);
    } else {
        func_ov123_020b23fc(0, 0);
        func_ov123_020b23c0(0, 1);
        func_ov123_020b2410(&func_ov123_020c0dec);
    }
    func_ov123_020ca49c(&data_ov123_020e4658);
}
