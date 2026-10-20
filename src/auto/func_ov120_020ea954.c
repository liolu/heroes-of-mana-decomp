#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_ov120_020ea9e8();                      /* extern */
extern M2C_UNK data_ov120_020f4200;

typedef struct {
    u8 pad[0xA18];
    s32 arr[11];
} Data46dc;

extern Data46dc data_ov120_020f46dc;

void func_ov120_020ea954(void) {
    s32 i;

    func_ov120_020ea9e8();
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0xC));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 4));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 8));
    for (i = 0; i < 0xB; i++) {
        OS_FreeToHeap(0, -1, data_ov120_020f46dc.arr[i]);
    }
}
