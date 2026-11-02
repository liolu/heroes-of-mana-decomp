#include "m2c.h"

s32 OS_FreeToHeap(s32, s32, void *);
s32 func_0200ed38(s32, s32, s32);

typedef struct {
    u8 pad[0xdf4];
    void *arr[0xe];
} S;

extern S data_ov122_02065604;
extern void *data_ov122_02062b20[];

s32 func_ov122_02052680(void) {
    s32 i;
    s32 n;

    for (i = 0; i < 0xe; i++) {
        data_ov122_02065604.arr[i] = (void *) func_0200ed38(0, -1, 0x800);
    }
    n = 0;
    for (i = 0; i < 0xe; i++) {
        if (data_ov122_02065604.arr[i] == NULL) {
            n += 1;
        }
    }
    if (n != 0) {
        for (i = 0; i < 0xe; i++) {
            void *v = data_ov122_02065604.arr[i];
            if (v != NULL) {
                OS_FreeToHeap(0, -1, v);
            }
        }
        return 0;
    }
    data_ov122_02062b20[0] = (void *) func_0200ed38(0, -1, 0xA00);
    return 1;
}
