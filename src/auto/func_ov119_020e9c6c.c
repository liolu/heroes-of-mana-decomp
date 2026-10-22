#include "m2c.h"

void OS_FreeToHeap(s32, s32, s32);
s32 func_0200ed38(s32, s32, s32);
typedef struct {
    u8 pad[0x20];
    s32 a[5];
} Arr;
extern Arr data_ov119_020f2258;
extern u8 data_ov119_020f1e40[];

s32 func_ov119_020e9c6c(void) {
    s32 i;
    s32 j;
    i = 0;
    do {
        data_ov119_020f2258.a[i] = func_0200ed38(0, -1, 0x800);
        i += 1;
    } while (i < 5);
    if ((*(s32 *) (data_ov119_020f1e40 + 0x438) == 0) || (*(s32 *) (data_ov119_020f1e40 + 0x43C) == 0) ||
        (*(s32 *) (data_ov119_020f1e40 + 0x440) == 0) || (*(s32 *) (data_ov119_020f1e40 + 0x444) == 0) ||
        (*(s32 *) (data_ov119_020f1e40 + 0x448) == 0)) {
        j = 0;
        do {
            if (data_ov119_020f2258.a[j] != 0) {
                OS_FreeToHeap(0, -1, data_ov119_020f2258.a[j]);
            }
            j += 1;
        } while (j < 5);
        return 0;
    }
    *(s32 *) (data_ov119_020f1e40 + 0x860) = func_0200ed38(0, -1, 0x19000);
    *(s32 *) (data_ov119_020f1e40 + 0x864) = func_0200ed38(0, -1, 0x19000);
    *(s32 *) (data_ov119_020f1e40)         = func_0200ed38(0, -1, 0x2080);
    return 1;
}
