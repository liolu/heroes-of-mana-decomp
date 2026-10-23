#include "m2c.h"
typedef struct S {
    u8 pad[0x590];
    void *buf[3];
} S;
typedef struct T {
    u8 pad[0x5b0];
    void *a;
    void *b;
    void *c;
} T;
extern S data_ov116_020e71a8;
extern T data_ov116_020e7188;
extern void *func_0200ed38(u32, s32, s32);
extern void OS_FreeToHeap(u32, s32, void *);
s32 func_ov116_020e2088(void) {
    s32 i;
    for (i = 0; i < 3; i++) {
        data_ov116_020e71a8.buf[i] = func_0200ed38(0, -1, 0x800);
    }
    if (data_ov116_020e7188.a != 0 && data_ov116_020e7188.b != 0 && data_ov116_020e7188.c != 0) {
    } else {
        for (i = 0; i < 3; i++) {
            if (data_ov116_020e71a8.buf[i] != 0) {
                OS_FreeToHeap(0, -1, data_ov116_020e71a8.buf[i]);
            }
        }
        return 0;
    }
    return 1;
}
