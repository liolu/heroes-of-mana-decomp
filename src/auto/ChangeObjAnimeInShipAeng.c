/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u8 *SearchComObjByComno(u8 *, s32);
extern M2C_UNK data_ov109_020e9fb0;
extern u8 *data_ov109_020ea340;

void ChangeObjAnimeInShipAeng(s32 no, s32 add) {
    u8 *o = SearchComObjByComno(data_ov109_020ea340 + 0x3C, no);
    if (o != 0) {
        *(s16 *) (o + 0x2E) = 0;
        *(s16 *) (o + 0x2A) = *(s16 *) (o + 0x72) + add;
        *(u16 *) (o + 0x36) = (u16) 0x8000;
    }
}
