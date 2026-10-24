/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    u8 pad[0x10];
    struct N *next;
} N;
typedef struct G {
    u8 pad[0x7a4];
    N *list;
} G;
extern G *data_ov000_02051548;
void OS_FreeToHeap(int, int, N *);
void ReleaseAllColorRoll(void) {
    N *p = data_ov000_02051548->list;
    N *cur;
    if (p != 0) {
        do {
            cur = p;
            p   = p->next;
            if (cur != 0) {
                OS_FreeToHeap(0, -1, cur);
            }
        } while (p != 0);
    }
    data_ov000_02051548->list = 0;
}
