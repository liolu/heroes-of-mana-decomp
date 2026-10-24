/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    s32 a;
    struct N *next_unused;
    s32 b;
    struct N *next;
} N;
s32 func_ov123_02067bac(void);
s32 func_ov123_020695ec(void *a, s32 b);
N *func_ov123_02068b60(s32 key) {
    u8 *base = (u8 *) func_ov123_02067bac() + 0x2000;
    N *n     = 0;
    u8 *head = *(u8 **) (base + 0x270);
    if (key == 0) {
        return 0;
    }
    if (head != 0) {
        if (*(u32 *) (base + 0x274) > 0xc) {
            n = *(N **) (head + 4);
            if (n != 0) {
                do {
                    if (func_ov123_020695ec((u8 *) (n + 1) + 4, key) != 0) {
                        break;
                    }
                    n = n->next;
                } while (n != 0);
            }
        }
    }
    return n;
}
