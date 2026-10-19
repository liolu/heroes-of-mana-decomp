#include "m2c.h"

u16 func_ov118_020e2088(s32 arg0, s32 arg1) {
    return (u16) (((s32) ((arg0 & 0x1F) * arg1) >> 5) + ((((arg0 >> 5) & 0x1F) * arg1) & ~0x1F) +
                  (((s32) (((arg0 >> 0xA) & 0x1F) * arg1) >> 5) << 0xA));
}
