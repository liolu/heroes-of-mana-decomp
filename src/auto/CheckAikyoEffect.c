/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    u32 lo : 10;
    u32 mid : 7;
    u32 hi : 15;
    u8 pad[0x18];
    struct N *next;
} N;
typedef struct G {
    u8 pad[0x778];
    N *head;
} G;
extern G *data_ov000_02051548;

s32 CheckAikyoEffect(s32 a, s32 b) {
    N *n = data_ov000_02051548->head;
    while (n != 0) {
        if (a == -1 && b == -1) {
            return 1;
        }
        if (a == n->lo) {
            if (b == -1) {
                return 1;
            }
            if (b == n->mid) {
                return 1;
            }
        }
        if (b == n->mid && a == -1) {
            return 1;
        }
        n = n->next;
    }
    return 0;
}
