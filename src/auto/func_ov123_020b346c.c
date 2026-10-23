/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
} P;
extern P data_ov123_020d7dfc;
extern u8 data_ov123_020e4600;
extern s32 data_ov123_020e4604;
void func_ov123_020c1c4c(s32, u8, u8);

void func_ov123_020b346c(void) {
    P s;
    u8 t;
    s = data_ov123_020d7dfc;
    t = ((u8 *) &s)[data_ov123_020e4600];
    func_ov123_020c1c4c(data_ov123_020e4604, t, t);
}
