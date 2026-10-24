/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 a : 13;
    u32 sel : 4;
} BF;
void DeleteShinjuHouseSel(void);
void PutDeleteWinInShip(void);
void PutHelpInShip(s32, s32);
void PutShisetuUnitName(s32, s32);
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
extern u8 *data_0203673c;
extern u8 *data_ov109_020ea340;

void PutShinjuHouseSel(void) {
    u8 *r;
    u32 t;
    DeleteShinjuHouseSel();
    *(u32 *) data_ov109_020ea340 |= 0x200;
    r                   = SetStatusIcon(0xFF68, 0x3D, 0xD8, 0x80, data_ov109_020ea340[0x34C], 1, 0, data_ov109_020ea340 + 0x3C,
                                        *(s32 *) (data_ov109_020ea340 + 0x18), 0);
    *(s16 *) (r + 0x72) = 0x3D;
    t                   = ((BF *) (*(u8 **) (data_0203673c + 0x28) + ((BF *) data_ov109_020ea340)->sel * 0x2D0 + 0x25C))->sel;
    PutShisetuUnitName(9, t + 8);
    PutDeleteWinInShip();
    PutHelpInShip(0xA, t + 8);
}
