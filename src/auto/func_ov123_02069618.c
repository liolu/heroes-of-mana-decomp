/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 key;
    s32 size;
} R;
void *func_ov123_02069618(u8 *h, s32 key) {
    R *r = (R *) (h + *(u16 *) (h + 0xc));
    u16 i;
    u16 n = *(u16 *) (h + 0xe);
    for (i = 0; i < n; i++) {
        if (r->key == key) {
            return r;
        }
        r = (R *) ((u8 *) r + r->size);
    }
    return 0;
}
