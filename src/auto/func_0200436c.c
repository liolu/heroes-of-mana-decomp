/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 sPrioList[];
extern u8 data_020367c0[];
extern u8 data_020367d8[];
extern u8 sPlayer[];
void func_02007a78(void *, s16);
void NNS_FndAppendListObject(void *, void *);

void func_0200436c(void) {
    s32 i;
    u8 *p;
    func_02007a78(sPrioList, 0x14);
    func_02007a78(data_020367c0, 0x14);
    p = data_020367d8;
    for (i = 0; i < 0x10; i++) {
        p[0x2c] = 0;
        p[0x3c] = i;
        NNS_FndAppendListObject(data_020367c0, p);
        p += 0x44;
    }
    p = sPlayer;
    for (i = 0; i < 0x20; i++) {
        func_02007a78(p, 0xc);
        func_02007a78(p + 0xc, 0);
        p[0x20]             = 0x7f;
        *(s32 *) (p + 0x18) = 1;
        *(s32 *) (p + 0x1c) = 0;
        p += 0x24;
    }
}
