/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov003_020b0cf0[];
extern s32 GetBetterDireForAttack(void *a, void *b, s32 c);
s32 distanceForBattle(s32 a, u8 *b) {
    return GetBetterDireForAttack(b, data_ov003_020b0cf0 + a * 0x110, *(u16 *) (b + 0xd6)) != -1;
}
