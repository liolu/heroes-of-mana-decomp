/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct N {
    u16 lo;
    u16 hi;
    u32 p4;
    struct N *next;
} N;
typedef struct {
    u8 pad[0x10];
    N *head;
} H;
s32 func_ov123_02069930(N *);

s32 func_ov123_02069898(H **arg0, u32 v) {
    N *n = (*arg0)->head;
    for (; n != NULL; n = n->next) {
        if (n->lo <= v && v <= n->hi) {
            return func_ov123_02069930(n);
        }
    }
    return 0xFFFF;
}
