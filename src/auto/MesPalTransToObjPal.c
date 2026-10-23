/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s16 SearchCanUseObjPalNo(s32, u16);
void SetPaletteDataToVram(s32, s32);
extern u8 *data_ov000_0205154c;
void MesPalTransToObjPal(void) {
    s32 i;
    s32 off;
    s16 n;
    u8 *t;
    i   = 0;
    off = 0;
    do {
        n                                            = SearchCanUseObjPalNo(1, i);
        *(s16 *) (data_ov000_0205154c + off + 0x570) = n;
        t                                            = (u8 *) (off + (s32) data_ov000_0205154c);
        *(u16 *) (t + 0x602) |= 1 << n;
        SetPaletteDataToVram(*(s32 *) (data_ov000_0205154c + off + 0x160) + (n << 5), 0);
        i++;
        off += 0x4B0;
    } while (i < 2);
}
