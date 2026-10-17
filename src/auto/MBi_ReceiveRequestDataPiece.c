#include "m2c.h"
typedef struct {
    u32 f0;
    u8 *f4;
    s32 f8;
    s32 fc;
} ReqPiece;
extern ReqPiece req_data_piece_idx;
s32 IsGetAllRequestData(s32 idx);
void MI_CpuCopy8(void *src, void *dst, u32 n);
u8 *MBi_ReceiveRequestDataPiece(u8 *src, s32 idx) {
    u8 *base;
    u32 *bits;
    s32 i;
    s32 n;
    base = req_data_piece_idx.f4;
    if (base == 0) {
        return 0;
    }
    n = src[2];
    if (n > req_data_piece_idx.fc) {
        return 0;
    }
    i = idx - 1;
    MI_CpuCopy8(src + 3, base + i * 32 + n * req_data_piece_idx.f8, req_data_piece_idx.f8);
    bits = (u32 *) (req_data_piece_idx.f4 + 0x1e0);
    bits[i] |= 1 << n;
    if (IsGetAllRequestData(idx) != 0) {
        return req_data_piece_idx.f4 + i * 32;
    }
    return 0;
}
