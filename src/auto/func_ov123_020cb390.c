/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK GX_SetBankForBG(s32);                       /* extern */
M2C_UNK GX_SetBankForBGExtPltt(s32);                /* extern */
M2C_UNK GX_SetBankForClearImage(s32);               /* extern */
M2C_UNK GX_SetBankForLCDC(s32);                     /* extern */
M2C_UNK GX_SetBankForOBJ(s32);                      /* extern */
M2C_UNK GX_SetBankForOBJExtPltt(s32);               /* extern */
M2C_UNK GX_SetBankForSubBG(s32);                    /* extern */
M2C_UNK GX_SetBankForSubBGExtPltt(s32);             /* extern */
M2C_UNK GX_SetBankForSubOBJ(s32);                   /* extern */
M2C_UNK GX_SetBankForSubOBJExtPltt(s32);            /* extern */
M2C_UNK GX_SetBankForTex(s32);                      /* extern */
M2C_UNK GX_SetBankForTexPltt(s32);                  /* extern */
M2C_UNK PM_SetLCDPower(M2C_UNK);                    /* extern */
M2C_UNK func_0200a66c();                            /* extern */
M2C_UNK func_0200a680();                            /* extern */
M2C_UNK func_0200a740();                            /* extern */
M2C_UNK func_0200a754();                            /* extern */
M2C_UNK func_ov123_020cb304();                      /* extern */
extern M2C_UNK data_ov123_020e4758;

void func_ov123_020cb390(void) {
    func_0200a66c();
    func_0200a680();
    func_0200a740();
    func_0200a754();
    func_ov123_020cb304();
    GX_SetBankForBG(M2C_FIELD(&data_ov123_020e4758, s32 *, 0));
    GX_SetBankForOBJ(M2C_FIELD(&data_ov123_020e4758, s32 *, 4));
    GX_SetBankForBGExtPltt(M2C_FIELD(&data_ov123_020e4758, s32 *, 8));
    GX_SetBankForOBJExtPltt(M2C_FIELD(&data_ov123_020e4758, s32 *, 0xC));
    GX_SetBankForTex(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x10));
    GX_SetBankForTexPltt(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x14));
    GX_SetBankForClearImage(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x18));
    GX_SetBankForSubBG(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x1C));
    GX_SetBankForSubOBJ(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x20));
    GX_SetBankForSubBGExtPltt(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x24));
    GX_SetBankForSubOBJExtPltt(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x28));
    GX_SetBankForLCDC(M2C_FIELD(&data_ov123_020e4758, s32 *, 0x30));
    *(volatile s16 *) 0x04000050 = 0;
    *(volatile s16 *) 0x04001050 = 0;
    *(volatile s32 *) 0x04000010 = 0;
    *(volatile s32 *) 0x04000014 = 0;
    *(volatile s32 *) 0x04000018 = 0;
    *(volatile s32 *) 0x0400001C = 0;
    *(volatile s32 *) 0x04001010 = 0;
    *(volatile s32 *) 0x04001014 = 0;
    *(volatile s32 *) 0x04001018 = 0;
    *(volatile s32 *) 0x0400101C = 0;
    PM_SetLCDPower(1);
}
