/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 a, b, c;
} T3;
extern T3 data_ov123_020d8280;
u8 func_ov123_020c9820(s32);
void func_ov123_020b2398(s32, s32 *);
void func_ov123_020c536c(s32, s32, s32, s32, s32);
void func_ov123_020b2410(void (*)(void));
void func_ov123_020c0c3c(void);
void func_ov123_020c0c84(void) {
    s32 idx;
    T3 tbl;
    tbl = data_ov123_020d8280;
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020b2398(0, &idx);
    func_ov123_020c536c(((s32 *) &tbl)[idx], 1, 1, -1, 0);
    func_ov123_020b2410(func_ov123_020c0c3c);
}
