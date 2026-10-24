/* compiler: 1.2/sp3 */
/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    u32 pad0;
    u32 *p4;
    u8 arr[0x21];
    u8 n;
    u8 m;
} G;

extern u8 func_ov123_020b0618(void);
extern void func_ov123_020c36bc(s32);
extern void func_ov123_020b0604(s8);
extern void func_ov123_020b05f0(s8);
extern void func_ov123_020b2410(void *);
extern s32 func_ov123_020b8bb8(void);
extern void func_ov123_020b8ee8(void);
extern void func_ov123_020b8e6c(void);
extern G *data_ov123_020e4658;
extern u8 func_ov123_020b9210;

void func_ov123_020b9238(void) {
    s32 c;

    c = func_ov123_020b0618();
    switch (c) {
        case 0:
            break;
        case 0x80:
            if (data_ov123_020e4658->n != 0) {
                func_ov123_020c36bc(3);
                data_ov123_020e4658->n--;
                data_ov123_020e4658->arr[data_ov123_020e4658->n] = 0;
                if (data_ov123_020e4658->n == 0) {
                    func_ov123_020b0604(0);
                }
                func_ov123_020b05f0(1);
            }
            break;
        case 0x82:
            func_ov123_020c36bc(7);
            data_ov123_020e4658->m = 0;
            func_ov123_020b2410(&func_ov123_020b9210);
            return;
        case 0x83:
            if (func_ov123_020b8bb8() != 0) {
                func_ov123_020c36bc(6);
                data_ov123_020e4658->m = 1;
            } else {
                data_ov123_020e4658->m = 2;
                func_ov123_020c36bc(9);
            }
            *data_ov123_020e4658->p4 = (*data_ov123_020e4658->p4 & 0xC1FFFCFF) | 0x200;
            func_ov123_020b2410(&func_ov123_020b9210);
            return;
        case 0xE01D:
        default:
            if (data_ov123_020e4658->n != 0x20) {
                func_ov123_020c36bc(1);
                data_ov123_020e4658->arr[data_ov123_020e4658->n] = c;
                data_ov123_020e4658->n++;
                func_ov123_020b0604(1);
                if (data_ov123_020e4658->n == 0x20) {
                    func_ov123_020b05f0(0);
                }
            }
            break;
    }
    func_ov123_020b8ee8();
    func_ov123_020b8e6c();
}
