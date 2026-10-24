/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 used : 1;
    u16 rest : 15;
} K;
extern u8 *data_0203673c;
K *GetBlank_KEYWORD_INFO(void) {
    s32 i;
    K *k = (K *) (*(u8 **) (data_0203673c + 0x2C) + 0xA00);
    for (i = 0; i < 100; i++, k++) {
        if (k->used == 0) {
            return k;
        }
    }
    return 0;
}
