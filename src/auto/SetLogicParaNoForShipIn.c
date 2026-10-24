/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u32 p0;
    u32 pad : 2;
    u32 f : 6;
    u32 rest : 24;
    u8 pad2[0x2C8];
} R;
typedef struct {
    u8 pad[0x28];
    R *recs;
} B;
extern B *data_0203673c;
void SetCreateInShipPara(s32);

void SetLogicParaNoForShipIn(s32 idx, u32 v) {
    if (idx < 4) {
        R *r = &data_0203673c->recs[idx];
        r->f = v;
        SetCreateInShipPara(idx);
    }
}
