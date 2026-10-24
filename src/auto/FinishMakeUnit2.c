/* compiler: 2.0/sp1p5 -profile */
/* near start: 1 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    u32 f0 : 8;
    u32 side : 4;
    u32 rest : 20;
} G;
typedef struct {
    u32 lo : 2;
    u32 n : 9;
    u32 hi : 21;
    u32 pad[12];
} U;
typedef struct {
    u8 pad[0x24];
    U *units;
} H;
extern G *data_ov000_02051548;
extern H *data_0203673c;
void SetUpUnit256Data(s32 u, s32 n);
void DeleteMakingGageByPos(s32 u);
void FinishMakeUnit2(s32 side, s32 idx, s32 u) {
    if (side == data_ov000_02051548->side) {
        U *p = &data_0203673c->units[idx];
        if (p->n != 0) {
            SetUpUnit256Data(u, p->n);
        }
        DeleteMakingGageByPos(u);
    }
}
