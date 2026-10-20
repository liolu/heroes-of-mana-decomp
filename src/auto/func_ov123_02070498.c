/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void OS_DestroyThread(u8 *);                        /* extern */
void OS_JoinThread(void *);                         /* extern */
s32 func_ov123_02070508(void);                      /* extern */
void func_ov123_0207086c(s32);                      /* extern */
extern s32 data_ov123_020df224;
extern s32 data_ov123_020df228;
extern s32 data_ov123_020df22c;
extern u8 data_ov123_020df3bc;
extern u8 data_ov123_020df47c;

void func_ov123_02070498(void) {
    func_ov123_02070508();
    OS_JoinThread(&data_ov123_020df3bc);
    OS_DestroyThread(&data_ov123_020df47c);
    data_ov123_020df224 = 0;
    func_ov123_0207086c(0);
    data_ov123_020df228 = 0;
    data_ov123_020df22c = 0;
}
