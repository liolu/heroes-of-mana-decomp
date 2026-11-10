#include "m2c.h"

/* NitroSDK version string (VERSION section of the SDK), placed in .text after the module parameters
   (BuildInfo); same fakematch exception. */
#pragma define_section TEXTDATA ".text" \
                                ".text"

__declspec(TEXTDATA) char _SDK_NintendoWifi[40] = "[SDK+NINTENDO:WiFi1.3.30000.0611120346]";
