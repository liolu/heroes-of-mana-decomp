/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f0 : 1;
    u32 rest : 31;
    u32 pad[0x43];
} OW;
extern OW data_ov003_020b0cf0[];
void ReleaseFlyArmWork(void);
void StopAllAikyoEffect(void);
void releaseUnitIconWorkOne(OW *);
void ReleaseObjWorkOne(OW *);
void CloseNowInputScMode(void);
void ObjSet_allclear(void) {
    OW *p = data_ov003_020b0cf0;
    s32 i;
    ReleaseFlyArmWork();
    StopAllAikyoEffect();
    i = 0;
    do {
        if (p->f0 != 0) {
            releaseUnitIconWorkOne(p);
            ReleaseObjWorkOne(p);
            p->f0 = 0;
        }
        i++;
        p++;
    } while (i < 0x42);
    CloseNowInputScMode();
}
