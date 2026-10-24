#include "m2c.h"

void GX_BeginLoadTexPltt(void);
void GX_EndLoadTexPltt(void);
void GX_LoadTexPltt(void *, s32, s32);
void MIi_CpuCopyFast(void *, s32, s32);
extern u8 *data_ov111_020ec1a4;

void func_ov111_020e4a3c(void) {
    s32 i;
    s32 o1;
    s32 o2;

    i  = 0;
    o1 = 0;
    o2 = 0;
    do {
        GX_BeginLoadTexPltt();
        if (((u32) (*(s32 *) (data_ov111_020ec1a4 + o1 + 0x1444) << 0x1F) >> 0x1F) != 0) {
            GX_LoadTexPltt(data_ov111_020ec1a4 + 0x1240 + o1, o2, 0x200);
            *(u32 *) (data_ov111_020ec1a4 + 0x1444 + o1) = *(u32 *) (data_ov111_020ec1a4 + 0x1444 + o1) & ~1;
        }
        GX_EndLoadTexPltt();
        i += 1;
        o1 += 0x410;
        o2 += 0x200;
    } while (i < 5);
    if (((u32) (*(s32 *) (data_ov111_020ec1a4 + 0x404) << 0x1F) >> 0x1F) != 0) {
        MIi_CpuCopyFast(data_ov111_020ec1a4 + 0x200, 0x05000200, 0x200);
        *(u32 *) (data_ov111_020ec1a4 + 0x404) = *(u32 *) (data_ov111_020ec1a4 + 0x404) & ~1;
    }
    if (((u32) (*(s32 *) (data_ov111_020ec1a4 + 0x814) << 0x1F) >> 0x1F) != 0) {
        MIi_CpuCopyFast(data_ov111_020ec1a4 + 0x610, 0x05000600, 0x200);
        *(u32 *) (data_ov111_020ec1a4 + 0x814) = *(u32 *) (data_ov111_020ec1a4 + 0x814) & ~1;
    }
    if (((u32) (*(s32 *) (data_ov111_020ec1a4 + 0xC24) << 0x1F) >> 0x1F) != 0) {
        MIi_CpuCopyFast(data_ov111_020ec1a4 + 0xA20, 0x05000000, 0x200);
        *(u32 *) (data_ov111_020ec1a4 + 0xC24) = *(u32 *) (data_ov111_020ec1a4 + 0xC24) & ~1;
    }
    if (((u32) (*(s32 *) (data_ov111_020ec1a4 + 0x1034) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    MIi_CpuCopyFast(data_ov111_020ec1a4 + 0xE30, 0x05000400, 0x200);
    *(u32 *) (data_ov111_020ec1a4 + 0x1034) = *(u32 *) (data_ov111_020ec1a4 + 0x1034) & ~1;
}
