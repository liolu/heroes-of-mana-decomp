/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 rest : 8;
    u32 bit8 : 1;
    u32 pad : 23;
} F;
extern void deleteComObjByComno(u8 *, s32);
extern F *data_ov109_020ea340;
void DeleteMakingGage(void) {
    s32 i;
    s32 off;
    if (data_ov109_020ea340->bit8 != 0) {
        data_ov109_020ea340->bit8 = 0;
        deleteComObjByComno((u8 *) data_ov109_020ea340 + 0x3C, 0xFF63);
        i   = 0;
        off = 0;
        do {
            i += 1;
            *(s32 *) ((u8 *) data_ov109_020ea340 + off + 0x58) = 0;
            *(s32 *) ((u8 *) data_ov109_020ea340 + off + 0x5C) = 0;
            off += 0x14;
        } while (i < 8);
    }
}
