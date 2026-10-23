/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    s32 a;
    u8 pad0[4];
    s32 b;
    u8 pad[0x14];
    struct N *next;
} N;
typedef struct R {
    u8 pad[0x424];
    N *head;
} R;
s32 func_ov123_02081d84(R **p) {
    N *n = (*p)->head;
    for (; n != 0; n = n->next) {
        if (n->b != 0 && n->a != 3) {
            return 1;
        }
    }
    return 0;
}
