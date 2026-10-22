/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);    /* extern */
M2C_UNK ResetVramMapX(s16, s16, u32);         /* extern */
extern void *data_ov000_02051548;
extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020a9a24;

void NoAnimeObjIncCount(s32 arg8) {
    s16 temp_r1;
    s32 temp_r3;
    u8 temp_r1_2;
    void **var_r4;
    void *temp_r2;
    void *temp_r5;
    void *var_r0;

    var_r0 = M2C_FIELD(data_ov000_02051548, void **, 0x79C);
    var_r4 = data_ov000_02051548 + 0x79C;
    if (var_r0 != NULL) {
        do {
            temp_r3 = M2C_FIELD(var_r0, s32 *, 0x10);
            M2C_FIELD(var_r0, s32 *, 0x10) =
                (s32) ((temp_r3 & 0xFFFFFE01) |
                       ((u32) ((((u32) (temp_r3 << 0x17) >> 0x18) + M2C_FIELD(data_ov000_0205154c, s32 *, 0xAF4)) << 0x18) >>
                        0x17));
            temp_r2 = *var_r4;
            temp_r1 = M2C_FIELD(temp_r2, s16 *, 0xC);
            if (temp_r1 != 0) {
                M2C_FIELD(temp_r2, s16 *, 0xC) = (s16) (temp_r1 - M2C_FIELD(data_ov000_0205154c, s32 *, 0xAF4));
                temp_r5                        = *var_r4;
                if ((s32) M2C_FIELD(temp_r5, s16 *, 0xC) <= 0) {
                    *var_r4   = M2C_FIELD(temp_r5, void **, 0x20);
                    temp_r1_2 = M2C_FIELD(temp_r5, u8 *, 0xB);
                    if (((u32) (temp_r1_2 << 0x1B) >> 0x1F) == 0) {
                        ResetVramMapX(M2C_FIELD(temp_r5, s16 *, 4), M2C_FIELD(temp_r5, s16 *, 6),
                                      (u32) (temp_r1_2 << 0x1F) >> 0x1F);
                    }
                    if (temp_r5 != NULL) {
                        OS_FreeToHeap(0, -1, temp_r5);
                    }
                } else {
                    var_r4 = temp_r5 + 0x20;
                }
            } else {
                var_r4 = temp_r2 + 0x20;
            }
            var_r0 = *var_r4;
        } while (var_r0 != NULL);
    }
}
