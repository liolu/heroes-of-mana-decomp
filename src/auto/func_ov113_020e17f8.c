#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_ov113_020e4940;

typedef struct {
    u8 pad[0x418];
    s32 arr[4];
} Data4944;

extern Data4944 data_ov113_020e4944;

u32 func_ov113_020e17f8(void) {
    s32 i;
    u32 temp;

    for (i = 0; i < 4; i++) {
        OS_FreeToHeap(0, -1, data_ov113_020e4944.arr[i]);
    }
    temp = (u32) (M2C_FIELD(&data_ov113_020e4940, s32 *, 0x414) << 0x13) >> 0x1F;
    if (temp == 0) {
        return temp;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov113_020e4940, s32 *, 0xA2C));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov113_020e4940, s32 *, 0xA30));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov113_020e4940, s32 *, 0xA34));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov113_020e4940, s32 *, 0xA38));
    M2C_FIELD(&data_ov113_020e4940, s32 *, 0x414) = (s32) (M2C_FIELD(&data_ov113_020e4940, s32 *, 0x414) & ~0x1000);
    return (u32) &data_ov113_020e4940;
}
