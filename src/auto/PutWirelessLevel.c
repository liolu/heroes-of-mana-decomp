/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x7a8];
    u32 f0 : 3;
    u32 lvl : 3;
    u32 rest : 26;
} X;
extern X *data_ov000_02051548;
void SetWirelessIconPal(s32);
void SetWirelessIconBit(s32);
void PutWirelessIcon(s32);
s32 WH_GetLinkLevel(void);
void PutWirelessLevel(void) {
    s32 lv = WH_GetLinkLevel();
    if (data_ov000_02051548->lvl != lv) {
        data_ov000_02051548->lvl = lv;
        SetWirelessIconPal(*(u16 *) ((u8 *) data_ov000_02051548 + 0x7ac) != 0);
        SetWirelessIconBit(*(u16 *) ((u8 *) data_ov000_02051548 + 0x7ac) != 0);
        PutWirelessIcon(lv + 1);
    }
}
