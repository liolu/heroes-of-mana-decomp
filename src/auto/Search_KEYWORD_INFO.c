/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct {
    u16 a : 1;
    u16 b : 1;
    u16 id : 8;
    u16 c : 6;
} K;
typedef struct {
    u8 pad[0x2c];
    u8 *p;
} G;
extern G *data_0203673c;
K *Search_KEYWORD_INFO(s32 key) {
    s32 i;
    K *k = (K *) (data_0203673c->p + 0xa00);
    for (i = 0; i < 100; i++, k++) {
        if (k->a && key == k->id) {
            return k;
        }
    }
    return NULL;
}
