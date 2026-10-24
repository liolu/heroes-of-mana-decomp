/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02020d04(void *, void *, s32, s32);
extern u8 data_ov123_020db4b0[];
extern u8 data_ov123_020db45c[];
typedef struct {
    u8 *buf;
    s32 cap;
    s32 len;
} B;
void func_ov123_0208751c(B *b, s32 v) {
    if (b->len + 2 > b->cap) {
        func_02020d04(data_ov123_020db4b0, data_ov123_020db45c, 0, 0x2e);
    }
    b->buf[b->len++] = v >> 8;
    b->buf[b->len++] = v;
}
