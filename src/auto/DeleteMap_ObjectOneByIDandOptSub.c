/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void ReleaseObjWorkOne(u8 *);
void OS_FreeToHeap(u32, s32, u8 *);
void DeleteMap_ObjectOneByIDandOptSub(u8 **head, u32 id, u32 opt) {
    u8 *p = *head;
    while (p != 0) {
        if (*(u16 *) (p + 0xcc) == id && *(u16 *) (p + 0xce) == opt) {
            *head = *(u8 **) (p + 0xf0);
            ReleaseObjWorkOne(p);
            if (p != 0) {
                OS_FreeToHeap(0, -1, p);
            }
            break;
        }
        head = (u8 **) (p + 0xf0);
        p    = *(u8 **) (p + 0xf0);
    }
}
