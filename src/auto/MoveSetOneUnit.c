/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct U {
    u32 a0 : 25;
    u32 ismove : 1;
    u32 a1 : 6;
    u32 w4;
    u32 b0 : 29;
    u32 c8 : 1;
    u32 b1 : 2;
    u32 c0 : 16;
    u32 cf : 2;
    u32 c1 : 14;
    u8 pad10[0x1C];
    u16 h2c_0 : 1;
    u16 h2c : 1;
    u16 h2c_r : 14;
    u8 pad2e[0x38];
    u8 x66;
    u8 z67;
    u8 pad68[0x40];
    u16 h_a8_0 : 14;
    u16 h_a8 : 2;
    u8 flg : 7;
    u8 hi : 1;
} U;
void ChainAndAnchorSetOFF(void *);
s32 GetCanMoveDisPos(void *, s32 *, s32 *, s32 *, s32);
void changeAnchoMode(void *);
void setConsiderTypeByXZ(void *, s32, s32);

void MoveSetOneUnit(U *unit, s32 x, s32 z) {
    s32 tmp;

    if (unit->ismove) {
        setConsiderTypeByXZ(unit, x, z);
    } else {
        if (GetCanMoveDisPos(unit, &x, &z, &tmp, 1) != 0) {
            unit->x66 = x;
            unit->z67 = z;
            if (unit->h2c) {
                unit->cf = 3;
            }
            if (unit->c8) {
                unit->h_a8 = 0;
                unit->hi   = 1;
                ChainAndAnchorSetOFF(unit);
                changeAnchoMode(unit);
            }
        }
        setConsiderTypeByXZ(unit, x, z);
    }
}
