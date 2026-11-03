/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 used;
    s32 a, b, c;
} U;
typedef struct {
    u8 pad[0xEC];
    U u[4][8];
} W;
extern W *data_ov109_020ea340;
s32 GetEmptyUnitWorkInShipWithPos(s32 pos) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (data_ov109_020ea340->u[i][pos].used == 0) {
            return i;
        }
    }
    return -1;
}
