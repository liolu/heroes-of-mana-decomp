/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_SleepThread(s32);
typedef struct {
    u32 f : 1;
    u32 a : 13;
    u32 id : 8;
    u32 b : 10;
} U;
U *Get_aONEOBJadrsByCharno(void);
extern u8 *data_ov000_02051548;
void WaitSyncUnit(void) {
    U *u = Get_aONEOBJadrsByCharno();
    if (u != NULL) {
        for (;;) {
            if (!u->f || !u->id) {
                break;
            }
            *(u32 *) (data_ov000_02051548 + 0x760) &= ~1;
            OS_SleepThread(0);
        }
    }
}
