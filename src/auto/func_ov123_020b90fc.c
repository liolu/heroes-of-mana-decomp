/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct L {
    u8 pad[0x2A];
    u8 b;
} L;
typedef struct F {
    s32 a[2];
    s32 idx;
} F;
s32 func_ov123_020b05d4(void);
void func_ov123_020b2398(s32, s32 *);
void func_ov123_020b2410(void *);
void func_ov123_020c536c(s32, s32, s32, s32, s32);
extern s32 data_ov123_020d7f54[];
extern L *data_ov123_020e4658;
extern u8 func_ov123_020b8b80[];
extern u8 func_ov123_020b8e04[];
extern u8 func_ov123_020b8ff8[];

void func_ov123_020b90fc(void) {
    F f;
    u8 t;
    f.a[0] = data_ov123_020d7f54[0];
    f.a[1] = data_ov123_020d7f54[1];
    if (func_ov123_020b05d4() != 0) {
        return;
    }
    t = data_ov123_020e4658->b;
    if (t == 0) {
        func_ov123_020b2410(func_ov123_020b8ff8);
        return;
    }
    if (t == 2) {
        func_ov123_020c536c(6, 3, 1, -1, 0);
        func_ov123_020b2410(func_ov123_020b8b80);
        return;
    }
    func_ov123_020b2398(0, &f.idx);
    func_ov123_020c536c(f.a[f.idx], 2, 1, -1, 0);
    func_ov123_020b2410(func_ov123_020b8e04);
}
