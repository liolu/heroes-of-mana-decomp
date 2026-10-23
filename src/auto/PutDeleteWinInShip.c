/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_FreeToHeap(s32, s32);
u16 *ReadShipsCompFile(s32, s32, u32 *);
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
extern u8 *data_ov109_020ea340;

void PutDeleteWinInShip(void) {
    s32 len;
    s32 i;
    u16 *src;
    u16 *dst;
    u16 *base;
    u8 *r;
    src                                   = ReadShipsCompFile(2, 4, (u32 *) &len);
    base                                  = src;
    i                                     = 0;
    *(u8 *) (data_ov109_020ea340 + 0x34e) = (*(u8 *) (data_ov109_020ea340 + 0x34e) & ~1) | 1;
    dst                                   = *(u16 **) (data_ov109_020ea340 + 0x350);
    if ((s32) len / 2 > 0) {
        do {
            u16 v = *src;
            i++;
            if (v & 0x3ff) {
                *dst |= v;
            }
            dst++;
            src++;
        } while (i < (s32) len / 2);
    }
    if (base != NULL) {
        OS_FreeToHeap(0, -1);
    }
    r = SetStatusIcon(0xff01, 0x42, 0x14, 0x14, *(u8 *) (data_ov109_020ea340 + 0x34c), 0, 0, data_ov109_020ea340 + 0x3c,
                      *(s32 *) (data_ov109_020ea340 + 0x18), 0);
    *(u16 *) (r + 0x72) = 0x42;
    *(u32 *) data_ov109_020ea340 |= 2;
}
