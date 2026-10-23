/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x1F8];
    s32 f1f8;
    u8 pad2[4];
    s32 f204;
} GG;
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
typedef struct {
    u32 v : 14;
} BF;
extern u8 *data_0203673c;
void deleteGaiaIcon(void);
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
s32 SetKazuByObj(s32, s32, s32, s32, s32, s32, s32, s32);
void PutGaiaIcon(s32 a, s32 b, s32 c, s32 d) {
    u8 *r;
    deleteGaiaIcon();
    r = SetStatusIcon(0xFFBA, 0x17, c, d, *(u16 *) (data_ov000_0205154c + a * 0x4B0 + 0x56C), 0, 0,
                      data_ov000_02051548 + 0x78C, *(s32 *) (data_ov000_02051548 + 0x12C), a);
    r[0x3E] |= 0x80;
    *(s32 *) (data_ov000_02051548 + 0x1F8) =
        SetKazuByObj(((BF *) (*(u8 **) (data_0203673c + 0x28) + b * 0x2D0 + 0x210))->v, c + 0x14, d, 0, 0, 0, a, 0);
    *(u32 *) (data_ov000_02051548 + 0x204) = ((BF *) (*(u8 **) (data_0203673c + 0x28) + b * 0x2D0 + 0x210))->v;
}
