#include "m2c.h"

extern u16 data_ov120_020f35ec[];

void *func_ov120_020f16dc(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        u16 id = data_ov120_020f35ec[i * 16 + 1];
        if (id == 0xFF) {
            return NULL;
        }
        if (id == arg0) {
            return &data_ov120_020f35ec[i * 16];
        }
    }
    return NULL;
}
