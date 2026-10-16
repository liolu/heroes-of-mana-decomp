#include "m2c.h"

typedef struct {
    u32 id;
    u8 *ram;
    u32 ram_size;
    u32 bss_size;
    void (**sinit_start)(void);
    void (**sinit_end)(void);
    u32 file_id;
    u32 flags;
} OvInfo;

typedef struct {
    u32 w[5];
} OvEntry;

extern OvEntry data_02036720[];
extern OvEntry data_02036720_end[];

u32 FSi_GetOverlayBinarySize(OvInfo *p);
s32 func_02013c88(OvEntry *e, u8 *ram, u32 size);
void MI_CpuFill8(u8 *dst, s32 v, u32 n);
void func_0200fddc(void);
void MIi_UncompressBackward(u8 *end);
void DC_FlushRange(u8 *p, u32 n);

void FS_StartOverlay(OvInfo *p) {
    u32 size = FSi_GetOverlayBinarySize(p);
    void (**fn)(void);
    void (**end)(void);
    if (*(volatile u16 *) 0x027FFC40 == 2) {
        s32 ok = 0;
        if (((p->flags >> 24) & 2) != 0) {
            if (p->id < (u32) (data_02036720_end - data_02036720)) {
                ok = func_02013c88(&data_02036720[p->id], p->ram, size);
            }
        }
        if (ok == 0) {
            MI_CpuFill8(p->ram, 0, size);
            func_0200fddc();
            return;
        }
    }
    if (((p->flags >> 24) & 1) != 0) {
        MIi_UncompressBackward(p->ram + size);
    }
    DC_FlushRange(p->ram, p->ram_size);
    fn  = p->sinit_start;
    end = p->sinit_end;
    for (; fn < end; fn++) {
        if (*fn != NULL) {
            (*fn)();
        }
    }
}
