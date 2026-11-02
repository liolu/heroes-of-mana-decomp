#include "m2c.h"

typedef struct {
    u8 p0[0xa94];
    void *arr[7];
} S1;

typedef struct {
    void *f0;
    void *f4;
} S2;

extern S1 data_ov117_020f23e0;
extern S2 data_ov117_020f0ee0;
extern u8 data_ov117_020f1ee0[];

void *func_0200ed38(u32 a, s32 b, s32 c);
void OS_FreeToHeap(u32 a, s32 b, void *p);

s32 func_ov117_020e353c(void) {
    s32 i;
    s32 n;

    n = 0;
    for (i = 0; i < 7; i++) {
        data_ov117_020f23e0.arr[i] = func_0200ed38(0, -1, 0x800);
        if (data_ov117_020f23e0.arr[i] == NULL) {
            n += 1;
        }
    }
    if (n != 0) {
        for (i = 0; i < 7; i++) {
            if (data_ov117_020f23e0.arr[i] != NULL) {
                OS_FreeToHeap(0, -1, data_ov117_020f23e0.arr[i]);
            }
        }
        return 0;
    }
    data_ov117_020f0ee0.f4                   = func_0200ed38(0, -1, 0xA00);
    data_ov117_020f0ee0.f0                   = func_0200ed38(0, -1, 0x600);
    *(void **) (data_ov117_020f1ee0 + 0x510) = func_0200ed38(0, -1, 0x800);
    return 1;
}
