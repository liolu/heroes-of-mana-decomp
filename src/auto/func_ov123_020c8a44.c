/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 f0;
    u8 pad[0x84];
    u8 arc[0x5c];
    u16 hE4;
} S;
extern u8 data_ov123_020de6f8[];
extern S *data_ov123_020e4710;
void func_02013688(void *p);
s32 FS_UnloadArchiveTables(void *p);
void func_02012d48(void *p);
void FS_ReleaseArchiveName(void *p);
void func_0200cc70(s32 x);
void func_ov123_020ca49c(void *p);
void func_ov123_020c8a44(void) {
    func_02013688(data_ov123_020de6f8);
    FS_UnloadArchiveTables((u8 *) data_ov123_020e4710 + 0x88);
    func_02012d48((u8 *) data_ov123_020e4710 + 0x88);
    FS_ReleaseArchiveName((u8 *) data_ov123_020e4710 + 0x88);
    func_0200cc70(data_ov123_020e4710->hE4);
    data_ov123_020e4710->hE4 = 0;
    func_ov123_020ca49c(data_ov123_020e4710);
    data_ov123_020e4710->f0 = 0;
    func_ov123_020ca49c(&data_ov123_020e4710);
}
