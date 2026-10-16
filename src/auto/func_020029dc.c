#include "m2c.h"

typedef struct {
    u32 count : 8;
    u32 rest : 24;
} QueueHeader;

void func_020029dc(u8 *param_1, u8 param_2) {
    s32 i;
    QueueHeader *hdr;

    for (i = 0; i < 8; i++) {
        if (param_1[i + 8] == param_2) {
            hdr = (QueueHeader *) param_1;
            if ((u32) i < hdr->count && hdr->count != 0) {
                hdr->count = hdr->count - 1;
            }
            for (; i < 7; i++) {
                param_1[i + 8] = param_1[i + 9];
            }
            param_1[0xF] = 8;
            return;
        }
    }
}
