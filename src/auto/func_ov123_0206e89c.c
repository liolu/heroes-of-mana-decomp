/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Th {
    u8 pad[0x68];
    struct Th *next;
    u8 pad2[0x38];
    s32 *ctx;
} Th;
typedef struct TI {
    u32 a, b;
    Th *first;
} TI;
extern TI OSi_ThreadInfo;
s32 func_ov123_0206e918(void *, void *, s32 *);
s32 *func_ov123_0206e89c(void *a, void *b) {
    s32 *c;
    Th *t = OSi_ThreadInfo.first;
    if (t != 0) {
        do {
            c = t->ctx;
            if (c != 0 && *c != 0 && func_ov123_0206e918(a, b, c) != 0) {
                return c;
            }
            t = t->next;
        } while (t != 0);
    }
    return 0;
}
