/* compiler: 1.2/sp3 */
/* near start: 20 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 *buf;
    s32 f4;
    s32 len;
    s32 off;
} B;
void *func_02021338(void *, const void *, u32);

s32 func_ov123_0207d890(s32 unused, B *b) {
    if (b == 0 || b->buf == 0 || b->off == 0) {
        return 0;
    }
    b->len = b->len - b->off;
    if (b->len != 0) {
        func_02021338(b->buf, b->buf + b->off, b->len);
    }
    b->buf[b->len] = 0;
    b->off         = 0;
    return 0;
}
