/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 p0;
    u32 a : 4;
    u32 b : 4;
    u32 c : 4;
    u32 pad : 20;
} SA;
typedef struct {
    u32 x[8];
    u32 f0 : 19;
    u32 f1 : 1;
    u32 f2 : 12;
} SB;
typedef struct {
    u32 w0;
    u32 g0 : 27;
    u32 g1 : 4;
    u32 g2 : 1;
} SC;
extern SB *data_ov000_02051548;
extern SC *data_ov109_020ea340;
void GetShipDamageWhenInShip(u32 a) {
    u32 v = *(u32 *) ((u8 *) data_ov000_02051548 + 0x14);
    if (a == ((v << 20) >> 28)) {
        if (((*(u32 *) ((u8 *) data_ov000_02051548 + 0x20) << 19) >> 31) != 0) {
            SC *c = data_ov109_020ea340;
            c->g1 = 7;
        }
    }
}
