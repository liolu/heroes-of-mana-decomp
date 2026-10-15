#include "m2c.h"

s32 func_0201658c(M2C_UNK, M2C_UNK *, M2C_UNK);

M2C_UNK func_02016c08();

extern M2C_UNK RTCi_Bss;
extern M2C_UNK RtcGetResultCallback;

s32 RTC_GetTime(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                           = func_0201658c(arg0, &RtcGetResultCallback, 0);
    M2C_FIELD(&RTCi_Bss, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_02016c08();
    }
    return M2C_FIELD(&RTCi_Bss, s32 *, 0x24);
}
