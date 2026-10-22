/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u32 SortieCheckFromShip();
M2C_UNK CountingTimeInShip(M2C_UNK *, M2C_UNK *);
M2C_UNK Logic_createHouseAndUnitInShip(void *);
extern u8 *data_0203673c;
extern u8 *data_ov000_02051548;
extern M2C_UNK data_ov003_020abb70;
extern M2C_UNK FinishMakeUnit;
extern M2C_UNK FinishMakeUnitBefore;
void MakeHouseAndUnitInShip(void) {
    u8 *p = data_ov000_02051548;
    u8 *q;
    s32 i;
    if ((((u32) (*(u32 *) (p + 0x10) << 2)) >> 31) != 0 && (((u32) (*(u32 *) (p + 0x10) << 3)) >> 31) != 0) {
        return;
    }
    if ((((u32) (*(u32 *) (p + 4) << 14)) >> 31) != 0) {
        return;
    }
    if ((((u32) (*(u32 *) (p + 0x24) << 23)) >> 31) != 0 && (((u32) (*(u32 *) (p + 0x20) << 18)) >> 31) == 0) {
        return;
    }
    q = *(u8 **) (data_0203673c + 0x28);
    for (i = 0; i < 4; i++, q += 0x2d0) {
        if ((((u32) (*(u32 *) q << 15)) >> 31) != 0 && *(u16 *) (q + 0x2ae) != 0xFFFF) {
            if ((((u32) (*(u32 *) (q + 0x210) << 3)) >> 31) != 0) {
                Logic_createHouseAndUnitInShip(q);
            }
        }
    }
    if ((((u32) (*(u32 *) (data_ov000_02051548 + 0x20) << 19)) >> 31) != 0) {
        CountingTimeInShip(&FinishMakeUnit, &FinishMakeUnitBefore);
    } else {
        CountingTimeInShip(NULL, NULL);
    }
    SortieCheckFromShip();
}
