/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    u32 pad;
    struct N *next;
} N;
typedef struct {
    u8 pad[0x1ac];
    N *head;
} W;
extern W *data_ov000_02051548;
s32 CountSetUpEventOccur(void) {
    s32 n = 0;
    N *p  = data_ov000_02051548->head;
    if (p != NULL) {
        do {
            p = p->next;
            n++;
        } while (p != NULL);
    }
    return n;
}
