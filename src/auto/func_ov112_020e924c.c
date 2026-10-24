#include "m2c.h"

typedef struct {
    u8 pad[0x202];
    u16 f : 2;
} E;
extern u8 data_ov112_020ec588[];
extern E data_ov112_020ed784[];

s32 func_ov112_020e924c(void) {
    s32 i;
    E *p;
    s32 c;
    s32 n;
    n = 0;
    i = n;
    c = data_ov112_020ec588[0x482];
    if (c <= 0) {
        return n;
    }
    p = data_ov112_020ed784;
    do {
        u16 v = (u16) (p->f + 0xFFFF);
        i += 1;
        p = (E *) ((u8 *) p + 0x204);
        if (v <= 1) {
            n += 1;
        }
    } while (i < c);
    return n;
}
