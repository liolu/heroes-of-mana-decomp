/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 ReadAnaFile(s32, s32 *, s32 *);
extern void DropItemBySetNoOne(s32, s32);
extern void OS_FreeToHeap(s32, s32, s32);
extern void func_0200fddc(void);

void DropItemBySetNo(s32 setno) {
    struct {
        s32 out;
        s32 cfg[3];
        s32 pad;
    } L;
    s32 r;

    L.cfg[0] = 5;
    L.cfg[1] = 2;
    L.cfg[2] = 9;
    r        = ReadAnaFile(3, L.cfg, &L.out);
    if (r != 0) {
        DropItemBySetNoOne(r, setno);
        if (r != 0) {
            OS_FreeToHeap(0, -1, r);
        }
    } else {
        func_0200fddc();
    }
}
