/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void SetScreenRGB_AengineChangeRGB(u16, u16);
void Routine_ScreenRGB_rgb(u32 r, u32 g, u32 b, u32 x) {
    SetScreenRGB_AengineChangeRGB((r & 0x1F) | ((g & 0x1F) << 5) | ((b & 0x1F) << 10), x);
}
