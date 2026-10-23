/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void SetScreenRGB_AengineChangePower(s32, s32, u16);
void Routine_ScreenRGB_alpha(s32 a, s32 b, s32 c) {
    SetScreenRGB_AengineChangePower(a & 0x1f, b & 0x1f, c);
}
