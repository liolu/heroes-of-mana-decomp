/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov109_020ea340;
void OS_FreeToHeap(s32, s32, void *);
void deleteComObjByComno(u8 *, s32);
void ReleaseUpFactoryData(s32 a) {
    s32 off = a * 0x14;
    void *p = *(void **) (data_ov109_020ea340 + off + 0x4C);
    if (p != 0) {
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
            *(s32 *) (data_ov109_020ea340 + off + 0x4C) = 0;
        }
        p = *(void **) (data_ov109_020ea340 + off + 0x50);
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
            *(s32 *) (data_ov109_020ea340 + off + 0x50) = 0;
        }
        *(s32 *) (data_ov109_020ea340 + off + 0x4C) = 0;
        *(s32 *) (data_ov109_020ea340 + off + 0x50) = 0;
        deleteComObjByComno(data_ov109_020ea340 + 0x3C, a + 0xFF38);
    }
}
