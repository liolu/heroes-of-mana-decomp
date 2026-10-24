/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct ThrInfo {
    u32 pad;
    s32 f4;
} ThrInfo;

extern ThrInfo OSi_ThreadInfo;
extern volatile s32 data_ov123_020df1f8;
extern s32 data_ov123_020df200;
extern volatile s32 data_ov123_020df224;
extern u8 *data_ov123_020df228;
extern volatile s32 data_ov123_020df22c;
s32 func_0200fa98(void);
void func_0200faac(s32);
void OS_SleepThread(s32);

u8 *func_ov123_0206fd50(s32 *arg0) {
    s32 saved;
    u8 *buf;
    u16 v;
    saved = func_0200fa98();
    if (data_ov123_020df200 == data_ov123_020df1f8) {
        do {
            data_ov123_020df224 = OSi_ThreadInfo.f4;
            OS_SleepThread(0);
            data_ov123_020df224 = 0;
        } while (data_ov123_020df200 == data_ov123_020df1f8);
    }
    func_0200faac(saved);
    buf = data_ov123_020df228;
    do {
        if ((u32) (data_ov123_020df22c - data_ov123_020df200) < 2U) {
            data_ov123_020df200 = 0;
        }
        v = *(u16 *) (buf + data_ov123_020df200);
        if (v == 0) {
            data_ov123_020df200 = 0;
        }
    } while (v == 0);
    *arg0 = v - 2;
    return data_ov123_020df228 + data_ov123_020df200 + 2;
}
