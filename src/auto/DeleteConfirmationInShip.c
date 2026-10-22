/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_FreeToHeap(s32, s32, void *);
void DeleteNameByNoAnimeObj(s32, s32);
void deleteComObjByComnoRect(void *, s32, s32);
u16 *ReadShipsCompFile(s32, s32, s32 *);
typedef struct Ship {
    u32 lo : 5;
    u32 flag : 1;
    u32 hi : 26;
    u8 pad[0x34A];
    u8 b0 : 1;
    u8 b1 : 7;
    u8 pad2;
    u16 *ptr;
} Ship;
extern Ship *data_ov109_020ea340;
void DeleteConfirmationInShip(void) {
    s32 sp0;
    u16 *dst;
    u16 *src;
    u16 *buf;
    s32 i;
    u16 t;
    if (data_ov109_020ea340->flag != 0) {
        data_ov109_020ea340->flag = 0;
        src                       = ReadShipsCompFile(2, 6, &sp0);
        buf                       = src;
        i                         = 0;
        data_ov109_020ea340->b0   = 1;
        dst                       = data_ov109_020ea340->ptr;
        if ((sp0 / 2) > 0) {
            do {
                t = *src;
                if (t & 0x3FF) {
                    *dst = 0;
                }
                i += 1;
                src += 1;
                dst += 1;
            } while (i < (sp0 / 2));
        }
        if (buf != NULL) {
            OS_FreeToHeap(0, -1, buf);
        }
        DeleteNameByNoAnimeObj(0, 0);
        deleteComObjByComnoRect((u8 *) data_ov109_020ea340 + 0x3C, 0xFF33, 0xFF36);
    }
}
