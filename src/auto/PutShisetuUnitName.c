/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 a : 1;
    u16 b : 15;
} B16;
extern s32 DeleteShisetuUnitName(void);
extern void SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 getNameString(s32, s32, s32 *);
extern void PutStringByObj(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern u8 *data_ov109_020ea340;
extern u8 *data_ov000_02051550;

void PutShisetuUnitName(s32 a, s32 b) {
    s32 off;
    s32 p;
    u8 t = data_ov109_020ea340[0x34c];
    DeleteShisetuUnitName();
    *(u32 *) data_ov109_020ea340 |= 0x40;
    SetStatusIcon(0xff66, 0x35, 0x78, 0x98, t, 1, 0, (s32) (data_ov109_020ea340 + 0x3c), *(s32 *) (data_ov109_020ea340 + 0x18),
                  0);
    p                                                 = getNameString(a, b, &off);
    ((B16 *) (data_ov000_02051550 + 0x300 + 0x38))->a = 1;
    PutStringByObj(p, p + off, 0, 0x78, 0x90, 0, 1, 0, 0, 1, 0);
    if (p != 0) {
        OS_FreeToHeap(0, -1, (void *) p);
    }
    ((B16 *) (data_ov000_02051550 + 0x300 + 0x38))->a = 0;
}
