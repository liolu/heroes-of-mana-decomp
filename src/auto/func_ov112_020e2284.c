#include "m2c.h"

typedef struct {
    u8 p0[0x440];
    void *arr[0x10];
} S1;

typedef struct {
    u8 p0[0x20];
    s32 f20;
} S3;

extern S1 data_ov112_020ec588;
extern u8 *data_0203673c;
extern u8 data_ov112_020ec580[];

void *func_0200ed38(u32 a, s32 b, s32 c);
void OS_FreeToHeap(u32 a, s32 b, void *p);

s32 func_ov112_020e2284(void) {
    s32 i;
    s32 n;

    for (i = 0; i < 0x10; i++) {
        data_ov112_020ec588.arr[i] = func_0200ed38(0, -1, 0x800);
    }
    n = 0;
    for (i = 0; i < 0x10; i++) {
        if (data_ov112_020ec588.arr[i] == NULL) {
            n += 1;
        }
    }
    if (n != 0) {
        for (i = 0; i < 0x10; i++) {
            if (data_ov112_020ec588.arr[i] != NULL) {
                OS_FreeToHeap(0, -1, data_ov112_020ec588.arr[i]);
            }
        }
        return 0;
    }
    *(void **) (data_ov112_020ec580) = func_0200ed38(0, -1, (((S3 *) data_0203673c)->f20 + 1) * 0x108);
    return 1;
}
