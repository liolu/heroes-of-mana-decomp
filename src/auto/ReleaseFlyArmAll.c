/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_FreeToHeap(s32, s32, void *);
void ReleaseFlyArmWork(void);
extern u8 *data_ov000_02051548;
void ReleaseFlyArmAll(void) {
    void *p = *(void **) (data_ov000_02051548 + 0x248);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
        *(void **) (data_ov000_02051548 + 0x248) = 0;
    }
    ReleaseFlyArmWork();
    p = *(void **) (data_ov000_02051548 + 0x254);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
        *(void **) (data_ov000_02051548 + 0x254) = 0;
    }
}
