/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void VBlankIntrWait(void);
void InformationCuttingTrs(void);
u32 SubWindowMessageSet(s32, s32, s32, s32);
s32 CallTrsForLoop(u32);
extern u8 data_ov003_020b54e8[];
extern u8 data_ov121_020f5d60[];
s32 Sample_VsInvitation(void) {
    s32 ret;
    u32 r;
    u32 f;
    r = SubWindowMessageSet(1, 0, 2, 0);
    switch (r) {
        case 4:
            ret = 4;
            break;
        case 15:
            ret = 0xF;
            break;
        case 14:
            (*(void (**)(void))(*(u8 **) (data_ov003_020b54e8 + 0xF44) + 0x10))();
            ret = 0xE;
            break;
        default:
            while (1) {
                VBlankIntrWait();
                f = (u32) (*(s32 *) (data_ov121_020f5d60 + 0x2B8) << 0x1E) >> 0x1F;
                if (f != 0) {
                    break;
                }
                if (CallTrsForLoop(f) == 0) {
                    (*(void (**)(void))(*(u8 **) (data_ov003_020b54e8 + 0xF44) + 0x10))();
                    return 0xF;
                }
            }
            r = SubWindowMessageSet(2, 0, 0, 0);
            switch (r) {
                case 6:
                    ret = 6;
                    break;
                case 7:
                    InformationCuttingTrs();
                    ret = 7;
                    break;
                case 15:
                    ret = 0xF;
                    break;
                case 13:
                    ret = 0xD;
                    break;
                case 14:
                    (*(void (**)(void))(*(u8 **) (data_ov003_020b54e8 + 0xF44) + 0x10))();
                    ret = 0xE;
                    break;
                default:
                    ret = 0xF;
                    break;
            }
            break;
    }
    return ret;
}
