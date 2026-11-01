/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov123_020d97f4[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov123_020d981c[1] = {(u32) &__sinit_ov123_020d97f4};
