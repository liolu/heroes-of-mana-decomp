#include "m2c.h"

extern M2C_UNK fsi_card_lock_id;
extern M2C_UNK fsi_arc_rom;

M2C_UNK func_0200fa98();
void func_0200faac(s32 arg0);
s32 FS_SuspendArchive(void *arc);
void FS_ResumeArchive(void *arc);

u32 FS_SetDefaultDMA(u32 dma) {
    s32 saved;
    s32 old;
    s32 suspended;

    saved                                    = func_0200fa98();
    old                                      = M2C_FIELD(&fsi_card_lock_id, s32 *, 0x4);
    suspended                                = FS_SuspendArchive(&fsi_arc_rom);
    M2C_FIELD(&fsi_card_lock_id, s32 *, 0x4) = dma;
    if (suspended != 0) {
        FS_ResumeArchive(&fsi_arc_rom);
    }
    func_0200faac(saved);
    return old;
}
