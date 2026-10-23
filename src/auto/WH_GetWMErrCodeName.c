/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern char *data_ov003_020ae044[];
extern char data_ov003_020ae10c[];
char *WH_GetWMErrCodeName(s32 code) {
    if (code >= 0 && (u32) code < 0x17) {
        return data_ov003_020ae044[code];
    }
    return data_ov003_020ae10c;
}
