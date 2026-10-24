/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 20;
    u32 f : 4;
    u32 rest : 8;
} B;
extern s32 GetMakingUnit(s32, s32);
extern void SetUpUnit256Data(s32, s32);
extern void DeleteMakingGageByPos(s32);
extern u8 *data_ov000_02051548;
void FinishMakeUnit(s32 a, s32 b, s32 c) {
    if (a == (*(u32 *) (data_ov000_02051548 + 0x14) << 20) >> 28) {
        s32 r = GetMakingUnit(a, b);
        if (r != 0) {
            SetUpUnit256Data(c, r);
        }
        DeleteMakingGageByPos(c);
    }
}
