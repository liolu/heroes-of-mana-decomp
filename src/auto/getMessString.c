/* compiler: 2.0/sp1p5 -profile */
/* near start: 10 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u8 pad[0x200];
    struct {
        u8 pad[0x34];
        u16 a;
        u16 b;
    } t[1];
} G;
extern u8 *data_ov000_02051550;
extern void *ReadOneString(void *p, s32 i, s32 z);
void *getMessString(s32 k, s32 i, s32 z) {
    u8 *g   = data_ov000_02051550;
    u8 *e   = g + k * 12 + 0x200;
    s32 lim = *(u16 *) (e + 0x34) + *(u16 *) (e + 0x36);
    if (i >= lim) {
        i = 0;
    }
    return ReadOneString(*(void **) (g + k * 4 + 0x228), i, z);
}
