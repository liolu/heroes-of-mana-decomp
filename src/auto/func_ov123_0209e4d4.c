/* compiler: 1.2/sp3 */
/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 pad[0x2fc];
    s32 a;
    u8 pad2[4];
    u8 ids[0x40];
    s32 n;
} G;
extern G *func_ov123_0209d368(void);
extern s32 func_ov123_0209ce1c(s32);
s32 func_ov123_0209e4d4(s32 want) {
    s32 i;
    s32 v;
    if (func_ov123_0209d368()->a == 0) {
        return 0;
    }
    for (i = 0; i < func_ov123_0209d368()->n; i++) {
        v = func_ov123_0209ce1c(((u8 *) ((char *) func_ov123_0209d368() + i))[0x304]);
        if (v > 0 && v == want) {
            return 1;
        }
    }
    return 0;
}
