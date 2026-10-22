/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x63];
    s8 cur;
    s8 prev;
} St;
extern void func_ov123_020b0e10(void);
extern void func_ov123_020c36bc(s32);
extern s8 data_ov123_020d7db8[][4];
extern St *data_ov123_020e45c0;
void func_ov123_020b0d3c(s32 arg0) {
    s8 old;
    s32 v;
    St *p;
    old                      = data_ov123_020e45c0->cur;
    data_ov123_020e45c0->cur = data_ov123_020d7db8[old][arg0];
    p                        = data_ov123_020e45c0;
    v                        = p->cur;
    if (v == 13 && (arg0 == 1 || arg0 == 3)) {
        p->prev = old;
    } else if (v == -1) {
        if (p->prev == 1 || p->prev == 10) {
            p->cur = 10;
        } else {
            p->cur = 11;
        }
    } else if (v == -2) {
        if (p->prev == 1 || p->prev == 10) {
            p->cur = 1;
        } else {
            p->cur = 2;
        }
    }
    func_ov123_020b0e10();
    func_ov123_020c36bc(8);
}
