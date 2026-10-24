#include "m2c.h"

typedef struct {
    u8 data[0x800];
    s32 len;
} Buf;
void func_02021318(u8 *, s32, s32);
s32 func_02024c28(s32);

void func_ov123_0208d384(Buf *b, s32 s) {
    s32 n    = func_02024c28(s) + 1;
    s32 room = 0x800 - b->len;
    if (n > room) {
        n = room;
    }
    if (n == 0) {
        return;
    }
    func_02021318(b->data + b->len, s, n);
    b->len += n;
    {
        s32 k                  = *(volatile s32 *) &b->len;
        b->data[(s32) (k - 1)] = 0;
        (void) 0;
    }
}
