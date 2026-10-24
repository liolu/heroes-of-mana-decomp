/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *ReadAnaFile(s32, s32 *, s32 *);
void DeleteEventObjPosOne(void *, s32);
void func_0200fddc(void);
void OS_FreeToHeap(u32, s32, void *);
extern u8 *data_ov000_02051548;

void DeleteEventObjPos(s32 arg) {
    s32 args[4];
    s32 out;
    void *a;
    args[0] = 7;
    args[1] = 1;
    args[2] = *(s16 *) (data_ov000_02051548 + 0x38);
    a       = ReadAnaFile(3, args, &out);
    if (a != 0) {
        DeleteEventObjPosOne(a, arg);
        if (a != 0) {
            OS_FreeToHeap(0, -1, a);
        }
    } else {
        func_0200fddc();
    }
}
