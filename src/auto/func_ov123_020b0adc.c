/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u32 *unk10;
} A;

void func_ov123_020b0f78(s32, s32);
void func_ov123_020cb618(void *, M2C_UNK *);
extern A *data_ov123_020e45c0;
extern M2C_UNK func_ov123_020b0a18;

void func_ov123_020b0adc(void *arg0) {
    u32 *p;
    u8 buf[8];
    s32 t;

    p = ((A *) data_ov123_020e45c0)->unk10;
    *(s32 *) buf = (s32) ((*p & 0x01FF0000) >> 0x10);
    t = (s32) (*p & 0xFF);
    *(s32 *) (buf + 4) = t;
    t += 0xC;
    *(s32 *) (buf + 4) = t;
    func_ov123_020b0f78(0, t);
    if (*(s32 *) (buf + 4) < 0xC0) {
        return;
    }
    func_ov123_020cb618(arg0, &func_ov123_020b0a18);
}
