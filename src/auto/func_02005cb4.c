/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 NNS_SndArcGetFileAddress();                     /* extern */
M2C_UNK NNS_SndArcSetFileAddress(M2C_UNK, s32);     /* extern */
s32 func_02005224();                                /* extern */
s32 func_02005e1c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02005a50;

s32 func_02005cb4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = NNS_SndArcGetFileAddress();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02005224();
        }
        var_r4 = func_02005e1c(arg0, &func_02005a50, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            NNS_SndArcSetFileAddress(arg0, var_r4);
        }
    }
    return var_r4;
}
