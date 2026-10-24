/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    s32 h;
    u16 cnt;
    u8 pad2;
    s8 f;
} S;
extern S *data_ov123_020e46e4;
void func_ov123_020cb5f8(s32, s32);
s32 func_ov123_020cb6ac(s32, s32, s32, s32);
void func_ov123_020c4c94(void);
void func_ov123_020c4fdc(s32 a) {
    data_ov123_020e46e4->f = -1;
    data_ov123_020e46e4->cnt++;
    if (data_ov123_020e46e4->cnt >= 0x78) {
        func_ov123_020cb5f8(0, a);
        data_ov123_020e46e4->h = func_ov123_020cb6ac(1, (s32) func_ov123_020c4c94, 0, 0x78);
    }
}
