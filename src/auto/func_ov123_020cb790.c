/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    u8 pad[52];
} S;
extern S *data_ov123_020e478c;
extern void func_ov123_020cae10(s32);
extern void func_ov123_020c94c8(s32);
extern void func_ov123_020ca49c(void *);
void func_ov123_020cb790(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        func_ov123_020cae10(data_ov123_020e478c[i].c);
        func_ov123_020c94c8(data_ov123_020e478c[i].a);
    }
    func_ov123_020ca49c(&data_ov123_020e478c);
}
