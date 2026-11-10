#include "m2c.h"

/* NitroSDK version string (VERSION section of the SDK), placed in .text after the module parameters
   (BuildInfo); same fakematch exception. */
#pragma define_section TEXTDATA ".text" \
                                ".text"

__declspec(TEXTDATA) char _SDK_NintendoDwc[56] = "[SDK+NINTENDO:DWC1.3.30001.070302.1842_DWC_1_3_PLUS]";
