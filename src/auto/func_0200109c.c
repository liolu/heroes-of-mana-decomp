#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02001598(M2C_UNK, s32 *);                  /* extern */
extern void *data_0203673c;

void func_0200109c(s32 arg0) {
    s32 sp0;
    s32 temp_r2;
    s32 temp_r2_2;

    temp_r2 = M2C_FIELD(data_0203673c, s32 *, 4);
    if (temp_r2 != 0) {
        if (temp_r2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2);
            M2C_FIELD(data_0203673c, s32 *, 4) = 0;
        }
        M2C_FIELD(data_0203673c, s32 *, 4) = 0;
    }
    temp_r2_2 = M2C_FIELD(data_0203673c, s32 *, 8);
    if (temp_r2_2 != 0) {
        if (temp_r2_2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2_2);
            M2C_FIELD(data_0203673c, s32 *, 8) = 0;
        }
        M2C_FIELD(data_0203673c, s32 *, 8) = 0;
    }
    if ((arg0 != 0) && (arg0 == 1)) {
        M2C_FIELD(data_0203673c, s32 *, 4)    = func_02001598(0xD, &sp0);
        M2C_FIELD(data_0203673c, u32 *, 0x1C) = (u32) ((u32) (sp0 - 8) >> 5);
        M2C_FIELD(data_0203673c, s32 *, 8)    = func_02001598(0xE, &sp0);
        return;
    }
    M2C_FIELD(data_0203673c, s32 *, 4)    = func_02001598(0, &sp0);
    M2C_FIELD(data_0203673c, u32 *, 0x1C) = (u32) ((u32) (sp0 - 8) >> 5);
    M2C_FIELD(data_0203673c, s32 *, 8)    = func_02001598(2, &sp0);
}
