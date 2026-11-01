/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov004_020cce38[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov004_020cd5cc[1] = {(u32) &__sinit_ov004_020cce38};
