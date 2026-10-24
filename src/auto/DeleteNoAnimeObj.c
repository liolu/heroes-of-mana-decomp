/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x79c];
    void *w79c;
    u8 pad2[8];
    u32 w7a8;
} M;
extern M *data_ov000_02051548;
void DeleteNoAnimeObjOne(void *);
void ReleaseWirelessIconPal(s32);
void ResetWirelessIconBit(s32);

void DeleteNoAnimeObj(void) {
    DeleteNoAnimeObjOne(data_ov000_02051548->w79c);
    data_ov000_02051548->w79c                     = 0;
    *(s32 *) ((u8 *) data_ov000_02051548 + 0x1fc) = 0;
    *(s32 *) ((u8 *) data_ov000_02051548 + 0x47c) = 0;
    *(s32 *) ((u8 *) data_ov000_02051548 + 0x494) = 0;
    data_ov000_02051548->w7a8                     = (data_ov000_02051548->w7a8 & ~0x38) | 0x38;
    ReleaseWirelessIconPal(0);
    ReleaseWirelessIconPal(1);
    ResetWirelessIconBit(0);
    ResetWirelessIconBit(1);
}
