/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void OS_FreeToHeap(u32, s32, void *);
void OnlyDeleteDelTexOne(s32 *p) {
    if (p != 0) {
        if (p[1] != 0) {
            OnlyDeleteDelTexOne((s32 *) p[1]);
        }
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
