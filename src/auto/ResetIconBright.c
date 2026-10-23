/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x3c];
} G;
extern u8 *data_ov109_020ea340;
extern u8 *SearchComObjByComno(u8 *p, s32 n);
void ResetIconBright(s32 n) {
    u8 *o = SearchComObjByComno(data_ov109_020ea340 + 0x3c, n);
    if (o != 0) {
        *(s16 *) (o + 0x2e) = 0;
        *(s16 *) (o + 0x2a) = *(s16 *) (o + 0x72);
        *(u16 *) (o + 0x36) = 0x8000;
    }
}
