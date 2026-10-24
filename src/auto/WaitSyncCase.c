/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x760];
    u32 f760;
} G;
extern G *data_ov000_02051548;
void OS_SleepThread(s32);

void WaitSyncCase(s32 (*fn)(void)) {
    if (fn != 0) {
        do {
            data_ov000_02051548->f760 &= ~1;
            OS_SleepThread(0);
        } while (fn() == 0);
    }
}
