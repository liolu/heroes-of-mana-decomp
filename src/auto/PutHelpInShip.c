/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 flags0;
    u8 pad[0x356 - 4];
    u8 f356 : 1;
    u8 pad2;
    u16 *buf358;
} Ship;
extern Ship *data_ov109_020ea340;
void DeleteHelpInShip(void);
u16 *ReadShipsCompFile(s32, s32, s32 *);
void OS_FreeToHeap(s32, s32, void *);
void *getNameString(s32, s32, s32 *);
void PutStringByObj(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void PutHelpInShip(s32 a, s32 b) {
    s32 size;
    s32 len;
    u16 *src;
    u16 *base;
    u16 *dst;
    u16 v;
    s32 i;
    void *name;
    DeleteHelpInShip();
    src                       = ReadShipsCompFile(2, 9, &size);
    base                      = src;
    i                         = 0;
    data_ov109_020ea340->f356 = 1;
    dst                       = data_ov109_020ea340->buf358;
    for (; i < size / 2;) {
        v = *src;
        i++;
        if (v & 0x3FF) {
            *dst |= v;
        }
        dst++;
        src++;
    }
    if (base != 0) {
        OS_FreeToHeap(0, -1, base);
    }
    name = getNameString(a, b, &len);
    PutStringByObj(name, (s32) name + len, 0, 16, 0x88, 1, 0, 0, 0, 1, 0);
    if (name != 0) {
        OS_FreeToHeap(0, -1, name);
    }
    data_ov109_020ea340->flags0 |= 0x10;
}
