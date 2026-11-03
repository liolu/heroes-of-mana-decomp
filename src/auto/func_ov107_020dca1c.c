#include "m2c.h"

typedef struct {
    u32 f : 6;
    u32 rest : 26;
} Bits6;

s32 GetFriendOfHalfHP(void *);
extern u8 *data_0203673c;

s32 func_ov107_020dca1c(u8 *arg0) {
    u8 *p;
    s32 r1;
    Bits6 *b;

    p = *(u8 **) (arg0 + 0xE8);
    if (((*(u32 *) p << 13) >> 24) == 7) {
        r1 = 0;
    } else {
        b  = (Bits6 *) (*(u8 **) (data_0203673c + 8) + *(u16 *) (p + 0x16) * 0x14 + 0xC);
        r1 = b->f == 0x15;
    }
    if (r1 == 1) {
        return GetFriendOfHalfHP(arg0) != -1;
    }
    return 0;
}
