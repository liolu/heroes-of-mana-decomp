/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK changePutObjByRect();                      /* extern */
M2C_UNK ClearPolWork();                      /* extern */
M2C_UNK SetCheckMtx();                      /* extern */
M2C_UNK CutAndMakePolygonType(M2C_UNK);               /* extern */
M2C_UNK SetCameraPoint();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aaee4;

void changeAreaCenterPos(void *arg0, void *arg1) {
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s32 var_r0;
    s32 var_r1;

    var_r0  = arg0;
    var_r1  = arg1;
    temp_r3 = M2C_FIELD(data_ov000_02051548, s16 *, 0x1D4);
    if (var_r0 < (s32) temp_r3) {
        var_r0 = (s32) temp_r3;
    }
    temp_r3_2 = M2C_FIELD(data_ov000_02051548, s16 *, 0x1D8);
    if (var_r0 > (s32) temp_r3_2) {
        var_r0 = (s32) temp_r3_2;
    }
    temp_r3_3 = M2C_FIELD(data_ov000_02051548, s16 *, 0x1D6);
    if (var_r1 < (s32) temp_r3_3) {
        var_r1 = (s32) temp_r3_3;
    }
    temp_r3_4 = M2C_FIELD(data_ov000_02051548, s16 *, 0x1DA);
    if (var_r1 > (s32) temp_r3_4) {
        var_r1 = (s32) temp_r3_4;
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1B4) = (s32) ((var_r0 << 0xE) - 0x4E000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1BC) = (s32) ((var_r1 << 0xE) - 0x4E000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1CC) = 0;
    SetCameraPoint();
    SetCheckMtx();
    ClearPolWork();
    CutAndMakePolygonType(1);
    changePutObjByRect();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) & ~1) | 1);
}
