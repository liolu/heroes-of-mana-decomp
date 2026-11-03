/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0x34];
    u32 *p;
} S;
typedef struct T {
    u8 pad[0x26];
    u16 v;
} T;
extern S *data_ov123_020e45c0;
extern T data_ov123_020d7d58;
void func_ov123_020b19d4(void);
void func_ov123_020b0f78(s32, s32);
void func_ov123_020cb618(s32, void *);

void func_ov123_020b1a58(s32 a) {
    volatile s32 x;
    volatile s32 y;
    u32 *p;
    s32 t;
    p = data_ov123_020e45c0->p;
    x = (*p & 0x1ff0000) >> 16;
    t = *(volatile u32 *) p & 0xff;
    y = t;
    t -= 12;
    y = t;
    if (t > data_ov123_020d7d58.v) {
        func_ov123_020b0f78(3, t);
    } else {
        func_ov123_020b0f78(3, data_ov123_020d7d58.v);
        func_ov123_020b0f78(4, 0xc0);
        func_ov123_020cb618(a, func_ov123_020b19d4);
    }
}
