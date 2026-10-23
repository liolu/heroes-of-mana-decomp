/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0xE8];
    u32 *p;
    u8 pad2[0x24];
} E;
extern E data_ov003_020b0cf0[];

void ClearRecoverHpSw(void) {
    E *e  = data_ov003_020b0cf0;
    s32 i = 0;
    do {
        u32 *p = e->p;
        i++;
        if (p != NULL) {
            *p &= ~2;
        }
        e++;
    } while (i < 0x42);
}
