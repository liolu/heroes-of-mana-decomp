#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_ov121_020ea54c();                      /* extern */
extern M2C_UNK data_ov121_020f5b80[];
extern M2C_UNK data_ov121_020f6d60[];

void func_ov121_020ea4f4(void) {
    s32 i;

    func_ov121_020ea54c();
    OS_FreeToHeap(0, -1, data_ov121_020f5b80[1]);
    for (i = 0; i < 0xB; i++) {
        OS_FreeToHeap(0, -1, data_ov121_020f6d60[0x294 + i]);
    }
}
