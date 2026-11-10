#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0203e380[]; /* SDK_AUTOLOAD_LIST */
extern char data_0203e398[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02036720[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0203e380,
    (void *) data_0203e398,
    (void *) data_02036720,
    (void *) data_02036720,
    (void *) 0x020421a0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03017534, /* SDK version 3.1.30004 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
