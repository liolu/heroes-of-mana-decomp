/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u32 w[18];
} S72;
extern void MI_CpuFill8(void *, s32, s32);
extern s32 func_ov123_02095548(s32);
extern void func_ov123_02095874(void);
extern u8 *data_ov123_020e1678;
extern s32 data_ov123_020e1674;
extern s32 data_ov123_020e1670;
extern u8 data_ov123_020dc02c[];

s32 func_ov123_02095928(u8 *cfg, s32 v) {
    u8 *(*fn)(void *, s32);
    fn = *(u8 * (**) (void *, s32))(cfg + 0x40);
    if (data_ov123_020e1678 != 0) {
        return 2;
    }
    data_ov123_020e1678 = fn(data_ov123_020dc02c, 0x13f4);
    if (data_ov123_020e1678 == 0) {
        return 2;
    }
    MI_CpuFill8(data_ov123_020e1678, 0, 0x13f4);
    *(s32 *) (data_ov123_020e1678 + 0x1000 + 0x314) = v;
    data_ov123_020e1674                             = 0;
    MI_CpuFill8(data_ov123_020e1678 + 0x1008, 0, 0x1c4);
    *(s32 *) (data_ov123_020e1678 + 0x1000 + 8)    = 0x4e84;
    *(S72 *) (data_ov123_020e1678 + 0x11cc)        = *(S72 *) cfg;
    *(u16 *) (data_ov123_020e1678 + 0x1100 + 0xfe) = 0;
    data_ov123_020e1678[0x1000 + 0x20b]            = 0;
    *(s32 *) (data_ov123_020e1678 + 0x1000 + 4)    = func_ov123_02095548(1);
    if (*(s32 *) (data_ov123_020e1678 + 0x1000 + 4) != 0) {
        return *(s32 *) (data_ov123_020e1678 + 0x1000 + 4);
    }
    data_ov123_020e1670 = 0;
    func_ov123_02095874();
    return 0;
}
