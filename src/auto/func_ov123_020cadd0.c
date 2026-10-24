/* compiler: 1.2/sp3 */
/* near start: 10 diffs with profile "1.2/sp3" */
#include "m2c.h"
s32 OS_DisableIrqMask(s32);
void OS_EnableIrqMask(s32);
typedef struct N {
    struct N *next;
    struct N *prev;
} N;
void func_ov123_020cadd0(N *arg0) {
    s32 old          = OS_DisableIrqMask(1);
    arg0->next->prev = arg0->prev;
    arg0->prev->next = arg0->next;
    arg0->prev       = 0;
    arg0->next       = arg0->prev;
    OS_EnableIrqMask(old);
}
