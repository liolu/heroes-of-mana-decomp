#include "m2c.h"

s32 OS_FreeToHeap(s32, s32, void *);
s32 func_0200ed38(s32, s32, s32);

typedef struct {
    u8 pad[0xA50];
    void *arr[0xB];
} S;

extern S data_ov121_020f6d60;
extern void *data_ov121_020f5b80[];

s32 func_ov121_020ea420(void) {
    s32 i;
    s32 n;

    for (i = 0; i < 0xB; i++) {
        data_ov121_020f6d60.arr[i] = (void *) func_0200ed38(0, -1, 0x800);
    }
    n = 0;
    for (i = 0; i < 0xB; i++) {
        if (data_ov121_020f6d60.arr[i] == NULL) {
            n += 1;
        }
    }
    if (n != 0) {
        for (i = 0; i < 0xB; i++) {
            void *v = data_ov121_020f6d60.arr[i];
            if (v != NULL) {
                OS_FreeToHeap(0, -1, v);
            }
        }
        return 0;
    }
    data_ov121_020f5b80[1] = (void *) func_0200ed38(0, -1, 0xA00);
    return 1;
}
