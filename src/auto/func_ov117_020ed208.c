#include "m2c.h"

extern u16 data_ov117_020f02c4[];

void *func_ov117_020ed208(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        u16 id = data_ov117_020f02c4[i * 16 + 1];
        if (id == 0xFF) {
            return NULL;
        }
        if (id == arg0) {
            return &data_ov117_020f02c4[i * 16];
        }
    }
    return NULL;
}
