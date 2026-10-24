#include "m2c.h"
typedef struct {
    u8 pad[0x1a0];
    s32 mode;
    u8 pad2[2];
    u8 flag;
} S;
S *func_ov123_0209d368(void);
s32 func_ov123_0209e4d4(s32 x);
s32 func_ov123_0209f3f4(s32 *arr, u32 n) {
    u32 i;
    if (func_ov123_0209d368()->flag != 0) {
        if (func_ov123_0209d368()->mode == 4) {
            return 1;
        }
    }
    for (i = 0; i < n; i++) {
        if (func_ov123_0209e4d4(arr[i]) == 0) {
            return 0;
        }
        if (func_ov123_0209d368()->flag != 0) {
            if (func_ov123_0209d368()->mode == 1) {
                return 1;
            }
        }
    }
    return 1;
}
