/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020af5e8(u8, s32, s32);
void func_ov123_020cb618(void *, void *);
void func_ov123_020aeca4(void);
typedef struct {
    u8 pad[0x60];
    u32 *p;
} Y;
extern Y *data_ov123_020e45bc;
void func_ov123_020aed20(void *arg) {
    volatile u32 sp0;
    volatile u32 sp4;
    volatile u32 *p = data_ov123_020e45bc->p;
    u32 v;
    sp0 = (*p & 0x1ff0000) >> 16;
    v   = *p & 0xff;
    sp4 = v;
    sp4 = v + 0xc;
    func_ov123_020af5e8(((u8 *) data_ov123_020e45bc)[0x11d], 1, v + 0xc);
    if ((s32) sp4 >= 0xc0) {
        func_ov123_020cb618(arg, func_ov123_020aeca4);
    }
}
