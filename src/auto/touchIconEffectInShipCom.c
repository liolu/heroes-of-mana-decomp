/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u32 GetTouchPanelStatus();
s32 getComIcon(s32, s16, s16);
void MomentTouchPanelActionInShip();
s32 KeepTouchPanelActionInShip();
s32 LeaveTouchPanelActionInShip();
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_0205154c;
extern u8 *data_ov109_020ea340;
s32 touchIconEffectInShipCom(void) {
    s32 var_r0;
    u32 st;
    if (*(u16 *) (data_ov000_0205154c + 0x14A) != 0) {
        if (GetTouchPanelStatus() == 1) {
            var_r0 = 0;
        } else {
            *(u16 *) (data_ov000_0205154c + 0x14A) = 0;
            goto def;
        }
    } else {
        if ((*(u32 *) (data_ov000_02051548 + 0x20) << 0x12) >> 0x1F) {
            st = GetTouchPanelStatus();
            if ((*(u32 *) (data_ov000_02051548 + 0x20) << 0x11) >> 0x1F) {
                var_r0 = 0;
                goto end;
            }
            if (st == 3 || st == 1) {
                if (getComIcon(*(s32 *) (data_ov109_020ea340 + 0x40), *(s16 *) (data_ov000_0205154c + 0x28),
                               *(s16 *) (data_ov000_0205154c + 0x2A)) != 0xFF02) {
                    var_r0 = 0;
                    goto end;
                }
            }
        }
        switch (GetTouchPanelStatus()) {
            case 3:
                MomentTouchPanelActionInShip();
            case 1:
                var_r0 = KeepTouchPanelActionInShip();
                break;
            case 0:
            case 2:
                var_r0 = LeaveTouchPanelActionInShip();
                break;
            default:
            def:
                var_r0 = 0;
                break;
        }
    }
end:
    return var_r0;
}
