/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 IsThereInShipIcom(void);
void InShipIcomPut(void);
void DeleteInShipIcom(void);
s32 IsThereShipIcon(void);
void RedrawShipIcon(void);
extern void *data_ov000_02051548;

s32 changeAnchoMode(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 8) * 4) >> 0x1F) != 0) {
        if ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x18) << 0xF) >> 0x18) == 2) &&
            (M2C_FIELD(arg0, u8 *, 0x38) == ((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) << 6) >> 0x18))) {
            if (((u32) (M2C_FIELD(arg0, u16 *, 0xA8) << 0x10) >> 0x1E) == 2) {
                if (IsThereInShipIcom() == 0) {
                    InShipIcomPut();
                }
            } else if (IsThereInShipIcom() == 1) {
                DeleteInShipIcom();
            }
        }
        if (IsThereShipIcon() == 1) {
            RedrawShipIcon();
        }
    }
}
