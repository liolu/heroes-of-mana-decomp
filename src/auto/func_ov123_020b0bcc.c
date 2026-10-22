/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x28];
    u32 *unk28;
} A;

void func_ov123_020b0f78(s32, s32);
void func_ov123_020cb618(void *, M2C_UNK *);
extern A *data_ov123_020e45c0;
extern M2C_UNK func_ov123_020b0b54;

void func_ov123_020b0bcc(void *arg0) {
    u32 *p;
    u8 buf[8];
    s32 t;

    p                  = ((A *) data_ov123_020e45c0)->unk28;
    *(s32 *) buf       = (s32) ((*p & 0x01FF0000) >> 0x10);
    t                  = (s32) (*p & 0xFF);
    *(s32 *) (buf + 4) = t;
    t += 0xC;
    *(s32 *) (buf + 4) = t;
    func_ov123_020b0f78(2, t);
    if (*(s32 *) (buf + 4) < 0xC0) {
        return;
    }
    func_ov123_020cb618(arg0, &func_ov123_020b0b54);
}
