/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 CutFromPartner[];
extern u8 GetEndSelNoFromKO[];
extern u8 GetEndSelNoFromOYA[];
extern u8 GetOkFromParent[];
extern u8 GetVSErrorByError_Link[];
extern u8 GetVSErrorByError_WireLessBad[];
extern u8 UpDateParamVSByChild[];
extern u8 UpDateParamVSByParent[];
extern u8 appearChild[];

u32 data_ov000_02050488[9] = {(u32) &appearChild,          (u32) &GetOkFromParent,        (u32) &UpDateParamVSByParent,
                              (u32) &UpDateParamVSByChild, (u32) &GetVSErrorByError_Link, (u32) &GetVSErrorByError_WireLessBad,
                              (u32) &GetEndSelNoFromKO,    (u32) &GetEndSelNoFromOYA,     (u32) &CutFromPartner};
