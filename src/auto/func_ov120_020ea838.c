#include "m2c.h"

extern s32 data_ov120_020f46dc[];
extern u8 data_ov120_020f4200[];
s32 func_0200ed38(u32 a, s32 b, s32 c);
void OS_FreeToHeap(u32 a, s32 b, void *c);

s32 func_ov120_020ea838(void) {
    s32 i;
    s32 k;
    s32 n;
    s32 v;

    i = 0;
    do {
        v                            = func_0200ed38(0, -1, 0x800);
        data_ov120_020f46dc[646 + i] = v;
        i += 1;
    } while (i < 0xB);

    n = 0;
    i = 0;
    do {
        v = data_ov120_020f46dc[646 + i];
        i += 1;
        if (v == 0) {
            n += 1;
        }
    } while (i < 0xB);

    if (n != 0) {
        k = 0;
        do {
            v = data_ov120_020f46dc[646 + k];
            if (v != 0) {
                OS_FreeToHeap(0, -1, (void *) v);
            }
            k += 1;
        } while (k < 0xB);
        return 0;
    }

    *(s32 *) (data_ov120_020f4200 + 4)   = func_0200ed38(0, -1, 0xA00);
    *(s32 *) (data_ov120_020f4200 + 0xC) = func_0200ed38(0, -1, 0x600);
    *(s32 *) (data_ov120_020f4200 + 8)   = func_0200ed38(0, -1, 0x14);
    *(s32 *) (data_ov120_020f4200 + 0)   = func_0200ed38(0, -1, 0xC);
    return 1;
}
