/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov004_020cd108[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov004_020cd614[1] = {(u32) &__sinit_ov004_020cd108};
