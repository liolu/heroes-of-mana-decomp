/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov004_020ccf50[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov004_020cd5e8[1] = {(u32) &__sinit_ov004_020ccf50};
