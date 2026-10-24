/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
void *Get_aONEOBJadrsByCharno(void);
s32 ChangeScriptAlphaChg(void *);
void OS_SleepThread(s32);
void WaitSyncAlphaChange(void) {
    void *o = Get_aONEOBJadrsByCharno();
    if (o != 0) {
        if (ChangeScriptAlphaChg(o) != 1) {
            do {
                *(u32 *) (data_ov000_02051548 + 0x760) &= ~1;
                OS_SleepThread(0);
            } while (ChangeScriptAlphaChg(o) != 1);
        }
    }
}
