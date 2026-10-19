/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

u16 func_ov123_020a67dc(s32 arg0) {
    return (u16) (((arg0 >> 8) & 0xFF) | ((arg0 << 8) & 0xFF00));
}
