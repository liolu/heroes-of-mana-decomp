/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);            /* extern */
M2C_UNK EndMessageScreenForDS(M2C_UNK);               /* extern */
M2C_UNK ResetObjPalMapX(u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK deleteComObjByComno(void *, s32);           /* extern */
M2C_UNK deleteTrentoIcon();                      /* extern */
M2C_UNK deleteGaiaIcon();                      /* extern */
M2C_UNK deleteSelectCancelBtn();                      /* extern */
M2C_UNK deleteShipIcon();                      /* extern */
M2C_UNK deleteGetRECTIcon();                      /* extern */
M2C_UNK DeleteUnitStatusParam();                      /* extern */
M2C_UNK ReleaseKaoGraCommonSub(s32);                   /* extern */
M2C_UNK DeleteUnitRaceIcon();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab3e4;

s32 CloseNowInputScMode(void) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r0;

    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F;
    if (var_r0 == 0) {
        temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, u32 *, 0x18) << 0xF) >> 0x18;
        if ((temp_r0 != 1) && (temp_r0 != 2)) {

        } else {
            EndMessageScreenForDS(0);
            EndMessageScreenForDS(1);
            deleteShipIcon();
            deleteTrentoIcon();
            deleteGaiaIcon();
            deleteSelectCancelBtn();
            deleteGetRECTIcon();
            deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFB1);
            deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFB6);
            deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFB7);
            deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFB8);
            ReleaseKaoGraCommonSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4D4));
            DeleteUnitRaceIcon();
            DeleteUnitStatusParam();
            M2C_FIELD(data_ov000_02051548, s32 *, 0x4D4) = 0;
            if (M2C_FIELD(data_ov000_02051548, s32 *, 0x138) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(data_ov000_02051548, s32 *, 0x138));
                M2C_FIELD(data_ov000_02051548, s32 *, 0x138) = 0;
            }
            temp_r0_2 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x19) >> 0x1C;
            if (temp_r0_2 != 0) {
                ResetObjPalMapX(temp_r0_2, 1, 0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) & ~0x78);
            }
            *(s32 *) 0x04000000 &= ~0xE000;
        }
        var_r0                                      = M2C_FIELD(data_ov000_02051548, u32 *, 0x18) & 0xFFFE01FF;
        M2C_FIELD(data_ov000_02051548, u32 *, 0x18) = var_r0;
    }
    return var_r0;
}
