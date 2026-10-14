#include "m2c.h"

s32 func_0201867c();                                /* extern */

u16 func_02018f84(void) {
    if (func_0201867c() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
