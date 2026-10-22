/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u16 *ReadShipsCompFile(int, int, int *);
void OS_FreeToHeap(int, int);
void deleteComObjByComno(void *, int);
void DeleteNoAnimeObjOnlyOne(int);
void DeleteNameByNoAnimeObj(int, int);
extern u8 *data_ov109_020ea340;
extern u8 *data_ov000_02051548;
void DeleteUnitStatusInShip(void) {
    int sz;
    int i;
    u16 *src;
    u16 *buf;
    s16 *dst;
    u8 *d = data_ov109_020ea340;
    if (((u32) (*(s32 *) d << 0x1F) >> 0x1F) != 0) {
        *(s32 *) d &= ~1;
        src                        = ReadShipsCompFile(2, 5, &sz);
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
        DeleteNoAnimeObjOnlyOne(*(int *) (data_ov000_02051548 + 0x1EC));
        *(int *) (data_ov000_02051548 + 0x1EC) = 0;
        DeleteNoAnimeObjOnlyOne(*(int *) (data_ov000_02051548 + 0x1F0));
        *(int *) (data_ov000_02051548 + 0x1F0) = 0;
        deleteComObjByComno(data_ov109_020ea340 + 0x3C, 0xFF00);
        DeleteNameByNoAnimeObj(0, 0);
    }
}
