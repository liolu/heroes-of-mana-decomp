/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Ana {
    s32 a;
    s32 count;
    u8 items[1];
} Ana;
Ana *ReadAnaFile(s32, s32 *, s32 *);
void SetDropItemByData(void *);
void func_0200fddc(void);
void OS_FreeToHeap(u32, s32, void *);
void DropItemByNO(s32 no) {
    s32 args[4];
    s32 out;
    Ana *a;
    args[0] = 5;
    args[1] = 2;
    args[2] = 9;
    a       = ReadAnaFile(3, args, &out);
    if (a != 0) {
        if (no < a->count) {
            SetDropItemByData(a->items + no * 12);
        } else {
            func_0200fddc();
        }
        if (a != 0) {
            OS_FreeToHeap(0, -1, a);
        }
    } else {
        func_0200fddc();
    }
}
