/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 flags;
    u8 pad4[0x14];
    s32 f18;
    u8 pad1c[0x36 - 0x1C];
    s16 f36;
    s32 f38;
    u8 f3c[0x34C - 0x3C];
    u8 f34c;
} Gaia;

typedef struct {
    u32 pad0 : 17;
    u32 idx : 4;
    u32 rest : 11;
} Flags0;

typedef struct {
    u8 pad[4];
    u8 *tbl;
    u8 pad8[0x28 - 8];
    u8 *tbl28;
} Game;

extern Game *data_0203673c;
extern u8 data_ov109_020e9f60;
extern Gaia *data_ov109_020ea340;

s32 DeleteSecchiIconGaiaKazuKazu(void);
s16 GetHouseBuildCost(u8 *, s32);
s32 SetKazuByObj(s32, s32, s32, s32, s32, s32, s32, s32);
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);

void PutSecchiIconGaiaKazuKazu(s32 arg0, s32 arg1) {
    s32 r1;
    s32 val;
    u8 r4;

    r4 = data_ov109_020ea340->f34c;
    DeleteSecchiIconGaiaKazuKazu();
    data_ov109_020ea340->flags |= 0x80;
    if (arg1 != 0) {
        r1 = 0x37;
    } else {
        r1 = 0x38;
    }
    SetStatusIcon(0xFF67, r1, 0xC0, 0x98, r4, 1, 0, data_ov109_020ea340->f3c, data_ov109_020ea340->f18, 0);
    if (arg1 != 0) {
        val = data_0203673c->tbl[arg0 * 32 + 0x15];
    } else {
        val = GetHouseBuildCost(data_0203673c->tbl28 + ((u32) (data_ov109_020ea340->flags << 15) >> 28) * 0x2D0, arg0);
    }
    data_ov109_020ea340->f36 = val;
    data_ov109_020ea340->f38 = SetKazuByObj(val, 0xE2, 0x98, 0, 0, 0, 0, 0);
    SetStatusIcon(0xFF67, 0x36, 0xD8, 0x98, r4, 1, 0, data_ov109_020ea340->f3c, data_ov109_020ea340->f18, 0);
    switch (arg1) {
        case 1:
            arg1 = 0x3B;
            break;
        case 2:
            arg1 = 0x3F;
            break;
        case 0:
        default:
            arg1 = 0x39;
            break;
    }
    *(s16 *) (SetStatusIcon(0xFF65, arg1, 0xD8, 0x80, r4, 1, 0, data_ov109_020ea340->f3c, data_ov109_020ea340->f18, 0) +
              0x72) = arg1;
}
