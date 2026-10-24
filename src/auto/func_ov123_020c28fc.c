/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Blk {
    s32 a[17];
} Blk;

void MIi_CpuClear16(s32, void *, s32);
s16 WM_GetDispersionScanPeriod(void);
s32 WM_Initialize(void *, void *, s32);
s32 func_02018d24(void *);
s32 func_ov123_020c28bc(void);
extern Blk data_ov123_020d82a0;
extern u8 *data_ov123_020e46cc;
extern void func_ov123_020c2728(void);

s32 func_ov123_020c28fc(void) {
    u8 *b;
    MIi_CpuClear16(0, data_ov123_020e46cc + 0x1300, 0x348);
    if (WM_Initialize(data_ov123_020e46cc, func_ov123_020c2728, 3) != 2) {
        return 0;
    }
    do {
        func_02018d24(data_ov123_020e46cc + 0x168c);
        b = data_ov123_020e46cc;
    } while (*(u16 *) (b + 0x168c) != 2);
    *(Blk *) (b + 0x1648)                   = data_ov123_020d82a0;
    *(void **) (b + 0x1648)                 = b + 0xf00;
    *(s16 *) (data_ov123_020e46cc + 0x1650) = WM_GetDispersionScanPeriod();
    if (func_ov123_020c28bc() != 0) {
        return 1;
    }
    return 0;
}
