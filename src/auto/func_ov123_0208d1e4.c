/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_ov123_0208d1e4(u32 arg0) {
    if (arg0 < 0x1AU) {
        return (u8) (arg0 + 0x41);
    }
    if (arg0 < 0x34U) {
        return (u8) (arg0 + 0x47);
    }
    if (arg0 < 0x3EU) {
        return (u8) (arg0 - 4);
    }
    if (arg0 == 0x3EU) {
        return 0x2BU;
    }
    if (arg0 == 0x3FU) {
        return 0x2FU;
    }
    return 0U;
}
