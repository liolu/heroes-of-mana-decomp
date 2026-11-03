/* compiler: 2.0/sp1p5 -profile */
/* near start: 13 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u8 pad[0x1000 + 0x8c];
    u32 pad2 : 6;
    u32 idx : 3;
} B;
typedef struct {
    u8 pad[0x2c];
    u8 *p;
} G;
extern G *data_0203673c;
extern u8 data_ov000_02050718[];
void BGM_volume(s32, s32);

void Routine_BGMvolChange(s32 vol, s32 b2) {
    B *b = (B *) data_0203673c->p;
    BGM_volume(data_ov000_02050718[b->idx] * vol / 100, b2);
}
