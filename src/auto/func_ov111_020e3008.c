#include "m2c.h"

typedef struct FileInfo {
    u8 pad[0x24];
    u32 start;
    u32 end;
    u8 pad2[0x1c];
} FileInfo;

void func_02013190(void *);
s32 FS_OpenFile(void *, s32);
void *func_0200ed38(u32, s32, s32);
s32 func_0201360c(void *, void *, s32);
void DC_FlushRange(void *, s32);
void MI_UncompressLZ8(void *, void *);
void MIi_CpuCopy16(void *, void *, s32);
void *G2S_GetBG2CharPtr(void);
void *G2S_GetBG3ScrPtr(void);
void *func_0200aad8(void);
void *G2_GetBG2CharPtr(void);
void *func_0200aaa4(void);
void OS_FreeToHeap(u32, s32, void *);
void func_020134b8(void *);
void func_ov111_020e22f0(void);

extern u8 *data_ov111_020ebfa0[];
extern u8 *data_ov111_020ec1a4;
extern u8 *data_ov111_020ec674[];

void func_ov111_020e3008(void) {
    FileInfo fi;
    s32 name;
    u8 *comp;
    u8 *raw;
    s32 size;
    u32 rawSize;

    name = (s32) data_ov111_020ebfa0[1];
    func_02013190(&fi);
    if (FS_OpenFile(&fi, name) != 0) {
        size = fi.end - fi.start;
        comp = func_0200ed38(0, -1, size);
        if (comp != 0) {
            DC_FlushRange(comp, func_0201360c(&fi, comp, size));
            rawSize = *(u32 *) comp >> 8;
            raw     = func_0200ed38(0, -1, rawSize);
            if (raw != 0) {
                MI_UncompressLZ8(comp, raw);
                DC_FlushRange(raw, rawSize);
                MIi_CpuCopy16(raw, data_ov111_020ec1a4 + 0xa20, 0x200);
                MIi_CpuCopy16(raw, data_ov111_020ec1a4 + 0x820, 0x200);
                MIi_CpuCopy16(raw, data_ov111_020ec1a4 + 0xe30, 0x200);
                MIi_CpuCopy16(raw, data_ov111_020ec1a4 + 0xc30, 0x200);
                *(u32 *) (data_ov111_020ec1a4 + 0xc24)  = (*(u32 *) (data_ov111_020ec1a4 + 0xc24) & ~1) | 1;
                *(u32 *) (data_ov111_020ec1a4 + 0x1034) = (*(u32 *) (data_ov111_020ec1a4 + 0x1034) & ~1) | 1;
                MIi_CpuCopy16(raw + 0x200, data_ov111_020ec1a4 + 0x200, 0x200);
                MIi_CpuCopy16(raw + 0x200, data_ov111_020ec1a4, 0x200);
                MIi_CpuCopy16(raw + 0x200, data_ov111_020ec1a4 + 0x610, 0x200);
                MIi_CpuCopy16(raw + 0x200, data_ov111_020ec1a4 + 0x410, 0x200);
                *(u32 *) (data_ov111_020ec1a4 + 0x404) = (*(u32 *) (data_ov111_020ec1a4 + 0x404) & ~1) | 1;
                *(u32 *) (data_ov111_020ec1a4 + 0x814) = (*(u32 *) (data_ov111_020ec1a4 + 0x814) & ~1) | 1;
                MIi_CpuCopy16(raw + 0x400, G2S_GetBG2CharPtr(), 0x8000);
                MIi_CpuCopy16(raw + 0x8400, (void *) 0x6400000, 0x8000);
                MIi_CpuCopy16(raw + 0x8400, (void *) 0x6600000, 0x4000);
                MIi_CpuCopy16(raw + 0x10400, G2S_GetBG3ScrPtr(), 0x800);
                MIi_CpuCopy16(raw + 0x10c00, func_0200aad8(), 0x1000);
                MIi_CpuCopy16(raw + 0x10c00, G2_GetBG2CharPtr(), 0x1000);
                MIi_CpuCopy16(raw + 0x11c00, data_ov111_020ec674[0x414 / 4], 0x800);
                MIi_CpuCopy16(raw + 0x12400, data_ov111_020ec674[0x418 / 4], 0x800);
                MIi_CpuCopy16(raw + 0x12c00, func_0200aaa4(), 0x400);
                MIi_CpuCopy16(raw + 0x13000, data_ov111_020ec674[0x41c / 4], 0x800);
                MIi_CpuCopy16(raw + 0x13800, data_ov111_020ec674[0x420 / 4], 0x800);
                OS_FreeToHeap(0, -1, raw);
            }
            OS_FreeToHeap(0, -1, comp);
        }
        func_020134b8(&fi);
    }
    func_ov111_020e22f0();
    *(volatile u16 *) 0x4000060 &= 0xcffb;
    *(volatile u16 *) 0x4000060 = (*(volatile u16 *) 0x4000060 & ~0x3000) | 8;
}
