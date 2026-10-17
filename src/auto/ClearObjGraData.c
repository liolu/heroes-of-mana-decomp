/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);            /* extern */
M2C_UNK DeleteTexPalMap(s32, u32);              /* extern */
M2C_UNK ReleaseTexBefore(s32);                   /* extern */
M2C_UNK CancelTransTex2Vram(void *);                /* extern */
M2C_UNK DeleteObjPatOne(u16, u32);              /* extern */
M2C_UNK DeleteObjPalOne(u16, u32);              /* extern */
M2C_UNK ModelWorkReleaseOne(u32);                   /* extern */
extern M2C_UNK data_ov003_020a7ea8;

void ClearObjGraData(void *arg0) {
    s32 *temp_r0_6;
    s32 *temp_r0_7;
    s32 *temp_r0_8;
    s32 temp_r2;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    temp_r0_2 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r0_2 != NULL) {
        DeleteTexPalMap(M2C_FIELD(arg0, s32 *, 0xC0), (u32) M2C_FIELD(temp_r0_2, u32 *, 8) >> 5);
    }
    if (((u32) (M2C_FIELD(arg0, s32 *, 8) * 4) >> 0x1F) == 0) {
        temp_r0_3 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_r0_3 != NULL) {
            DeleteObjPatOne(M2C_FIELD(temp_r0_3, u16 *, 0), (u32) (M2C_FIELD(temp_r0_3, u16 *, 2) << 0x10) >> 0x1E);
        }
        temp_r0_4 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_r0_4 != NULL) {
            DeleteObjPalOne(M2C_FIELD(arg0, u16 *, 0x1C), (u32) (M2C_FIELD(temp_r0_4, u16 *, 2) << 0x10) >> 0x1E);
        }
        temp_r0_5 = M2C_FIELD(arg0, void **, 0x10);
        if ((temp_r0_5 != NULL) && (M2C_FIELD(temp_r0_5, s32 *, 4) != 0) && (M2C_FIELD(arg0, s32 **, 0xAC) != NULL)) {
            OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 **, 0xAC));
            M2C_FIELD(arg0, s32 **, 0xAC) = NULL;
        }
    } else {
        temp_r0_6 = M2C_FIELD(arg0, s32 **, 0xAC);
        if (temp_r0_6 != NULL) {
            ModelWorkReleaseOne((u32) (*temp_r0_6 << 0xA) >> 0x18);
            M2C_FIELD(arg0, s32 **, 0xAC) = NULL;
        }
        temp_r0_7 = M2C_FIELD(arg0, s32 **, 0xA0);
        if (temp_r0_7 != NULL) {
            ModelWorkReleaseOne((u32) (*temp_r0_7 << 0xA) >> 0x18);
            M2C_FIELD(arg0, s32 **, 0xA0) = NULL;
        }
        temp_r0_8 = M2C_FIELD(arg0, s32 **, 0xA4);
        if (temp_r0_8 != NULL) {
            ModelWorkReleaseOne((u32) (*temp_r0_8 << 0xA) >> 0x18);
            M2C_FIELD(arg0, s32 **, 0xA4) = NULL;
        }
    }
    CancelTransTex2Vram(arg0);
    if (M2C_FIELD(arg0, u16 *, 0xDC) != 0) {
        M2C_FIELD(arg0, u16 *, 0xDC) = 0U;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_r2 != 0) {
        if (temp_r2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2);
            M2C_FIELD(arg0, s32 *, 0xC4) = 0;
        }
        M2C_FIELD(arg0, s16 *, 0xC8) = 0;
    }
    if (M2C_FIELD(arg0, void **, 0x10) != NULL) {
        ReleaseTexBefore(M2C_FIELD(arg0, s32 *, 0xB4));
        ReleaseTexBefore(M2C_FIELD(arg0, s32 *, 0xB8));
    }
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    M2C_FIELD(arg0, s32 *, 0xB4)   = -1;
    M2C_FIELD(arg0, s32 *, 0xB8)   = -1;
    CancelTransTex2Vram(arg0);
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
}
