#include "m2c.h"

s32 OS_FreeToHeap(s32, s32, void *);
s32 func_0200ed38(s32, s32, s32);

typedef struct {
    u8 pad[0x418];
    void *arr[4];
} S;

extern S data_ov113_020e4944;

s32 func_ov113_020e1740(void) {
    s32 i;
    s32 n;

    for (i = 0; i < 4; i++) {
        data_ov113_020e4944.arr[i] = (void *)func_0200ed38(0, -1, 0x800);
    }
    n = 0;
    for (i = 0; i < 4; i++) {
        if (data_ov113_020e4944.arr[i] == NULL) {
            n += 1;
        }
    }
    if (n != 0) {
        for (i = 0; i < 4; i++) {
            void *v = data_ov113_020e4944.arr[i];
            if (v != NULL) {
                OS_FreeToHeap(0, -1, v);
            }
        }
        return 0;
    }
    return 1;
}



