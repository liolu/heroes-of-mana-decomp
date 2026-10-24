/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p[0x10];
    u32 f : 1;
} G;
extern G *data_ov000_02051548;
extern void SetCutTrsMode(void);
extern void VBlankIntrWaitInGame(void);
extern s32 CallTrsForLoop(void);
void InformationCuttingTrs(void) {
    s32 i;
    for (i = 0; i < 0x3c; i++) {
        SetCutTrsMode();
        VBlankIntrWaitInGame();
        if (CallTrsForLoop() == 0) {
            data_ov000_02051548->f = 1;
        }
    }
}
