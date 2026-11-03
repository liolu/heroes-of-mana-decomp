/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov109_020ea340;
extern void DeleteNoAnimeObjOnlyOne(s32);
extern s32 SetKazuByObj(s32, s32, s32, s32, s32, s32, s32, s32);

void RedrawCoseByKazu(s32 a0) {
    if (*(s32 *) (data_ov109_020ea340 + 0x38) != 0) {
        DeleteNoAnimeObjOnlyOne(*(s32 *) (data_ov109_020ea340 + 0x38));
        *(s32 *) (data_ov109_020ea340 + 0x38) = 0;
    }
    *(s32 *) (data_ov109_020ea340 + 0x38) =
        SetKazuByObj(*(u16 *) (data_ov109_020ea340 + 0x36) * a0, 0xE2, 0x98, 0, 0, 0, 0, 0);
}
