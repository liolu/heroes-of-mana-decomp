/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p0[0x44];
    u32 w44;
    s32 w48;
    u32 f4c_lo : 3;
    u32 pal : 4;
    u32 f4c_hi : 25;
    u8 p1[4];
    u32 w54;
    u8 p2[0x18];
    u32 w70;
    u8 p3[0x40];
    s16 hb4;
    u8 p4[0x16];
    u8 *pcc;
} X;
extern u8 *data_ov000_02051548;
extern X *data_ov000_02051550;
extern void deleteComObjByComnoOther(u8 *, s32, s32);
extern void SetPaletteDataToVram(u8 *, s32);
extern void CloseNowInputScMode(void);
extern void InitMessageScreenForDS(s32);
extern s32 getMessString(s32, s32, s32 *);
extern void MessageOneSet(s32, s32, s32, s32);

void PutMessageStart(s32 idx, s32 b, s32 c) {
    s32 len;
    s32 r;
    deleteComObjByComnoOther(data_ov000_02051548 + 0x78c, 0xffb0, idx);
    SetPaletteDataToVram(((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->pcc +
                             ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->pal * 0x20,
                         0);
    CloseNowInputScMode();
    InitMessageScreenForDS(idx);
    if (((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w48 != 0) {
        ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w54 &= ~3;
        ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w70 &= ~3;
        ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w48 = 0;
    }
    ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->hb4 = 0;
    ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w44 &= ~7;
    ((X *) ((u8 *) data_ov000_02051550 + idx * 0xd0))->w44 &= ~0x100;
    *(s16 *) ((u8 *) data_ov000_02051550 + 0x344) = 0;
    *(u16 *) ((u8 *) data_ov000_02051550 + 0x338) &= ~8;
    r = getMessString(b, c, &len);
    MessageOneSet(r, r + len, 1, idx);
}
