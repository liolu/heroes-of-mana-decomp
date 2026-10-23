/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 *buf;
    s32 cap;
    s32 len;
} B;
extern void func_02020d04(void *a, void *b, s32 c, s32 d);
extern u8 data_ov123_020db4d4[];
extern u8 data_ov123_020db45c[];
void func_ov123_02087590(B *b, u8 c) {
    if (b->len >= b->cap) {
        func_02020d04(data_ov123_020db4d4, data_ov123_020db45c, 0, 0x23);
    }
    b->buf[b->len++] = c;
}
