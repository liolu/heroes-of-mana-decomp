/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u64 s;
    u64 m;
    u64 a;
} L;
extern L data_ov123_020df240;
u32 func_ov123_0206d410(void) {
    data_ov123_020df240.s = data_ov123_020df240.m * data_ov123_020df240.s + data_ov123_020df240.a;
    return (u32) (data_ov123_020df240.s >> 32);
}
