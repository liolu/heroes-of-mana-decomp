/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov000_02051548[];
s32 CanPutMagicIcon(void *);
s32 IsThereMagicIcom(void);
void MagicIcomPut(void);
void DeleteMagicIcom(void);
void RagTimeSetToX(u8 *o, u16 v) {
    u8 *g;
    u32 st;
    u32 w;
    *(u16 *) (o + 0x18) = v;
    g                   = *(u8 **) data_ov000_02051548;
    st                  = (*(u32 *) (g + 0x18) << 15) >> 24;
    if (st == 2) {
        w = (*(u32 *) (g + 0x10) << 6) >> 24;
        if (o[0x38] == w) {
            if (v == 0) {
                if (CanPutMagicIcon(o) == 1) {
                    if (IsThereMagicIcom() == 0) {
                        MagicIcomPut();
                    }
                }
            } else {
                if (IsThereMagicIcom() == 1) {
                    DeleteMagicIcom();
                }
            }
        }
    }
}
