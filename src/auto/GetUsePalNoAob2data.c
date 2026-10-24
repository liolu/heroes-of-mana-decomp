/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 GetAnimeParasAob2Data(void *, s32, s32);
s32 GetUsePalNoAob2data(u8 *p, s32 id) {
    u32 n = (u8) GetAnimeParasAob2Data(p, (u16) id, 0);
    if (n >= *(u16 *) (p + 4)) {
        return 0;
    }
    return (*(u16 *) (p + *(u16 *) (p + 6 + n * 2) + 6) & 0xF000) >> 12;
}
