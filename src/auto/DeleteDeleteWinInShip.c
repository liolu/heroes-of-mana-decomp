/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u16 *ReadShipsCompFile(int, int, int *);
void OS_FreeToHeap(int, int);
void deleteComObjByComno(void *, int);
extern u8 *data_ov109_020ea340;
void DeleteDeleteWinInShip(void) {
    int sz;
    int i;
    u16 *src;
    u16 *buf;
    s16 *dst;
    u8 *d = data_ov109_020ea340;
    if (((u32) (*(s32 *) d << 0x1E) >> 0x1F) != 0) {
        *(s32 *) d &= ~2;
        src                        = ReadShipsCompFile(2, 4, &sz);
        buf                        = src;
        data_ov109_020ea340[0x34E] = (data_ov109_020ea340[0x34E] & ~1) | 1;
        dst                        = *(s16 **) (data_ov109_020ea340 + 0x350);

        for (i = 0; i < sz / 2; i++) {
            if (*src & 0x3FF) {
                *dst = 0;
            }
            src++;
            dst++;
        }
        if (buf != 0) {
            OS_FreeToHeap(0, -1);
        }
        deleteComObjByComno(data_ov109_020ea340 + 0x3C, 0xFF01);
    }
}
