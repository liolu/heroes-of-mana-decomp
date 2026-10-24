/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u8 *func_ov123_0206fd50(u32 *);
void func_ov123_0206d584(u8 *, s32);
void func_ov123_0206ede8(u8 *, s32);
void func_ov123_0206fcf0(void);
void func_ov123_0206d510(void) {
    u32 len;
    u8 *p;
    while (1) {
        p = func_ov123_0206fd50(&len);
        if (len > 0x22) {
            s32 h = *(u16 *) (p + 0xc);
            u16 t = (h >> 8) | (h << 8);
            switch (t) {
                case 0x800:
                    func_ov123_0206d584(p + 0xe, len - 0xe);
                    break;
                case 0x806:
                    func_ov123_0206ede8(p + 0xe, len - 0xe);
                    break;
            }
        }
        func_ov123_0206fcf0();
    }
}
