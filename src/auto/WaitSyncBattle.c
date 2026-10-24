/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020ac328;
int CountEnemyUnit(void);
void OS_SleepThread(int);
typedef struct {
    u8 p0[0x1c];
    u32 f1c;
    u8 p1[4];
    u32 f24;
    u8 p2[0x738];
    u32 f760;
} G;
extern G *data_ov000_02051548;

void WaitSyncBattle(void) {
    if (CountEnemyUnit() != 0) {
        do {
            data_ov000_02051548->f760 &= ~1;
            OS_SleepThread(0);
        } while (CountEnemyUnit() != 0);
    }
    data_ov000_02051548->f24 |= 0x100;
    data_ov000_02051548->f1c &= ~0x20000000;
}
