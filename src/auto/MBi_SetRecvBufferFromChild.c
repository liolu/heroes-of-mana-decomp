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
u8 *MBi_ReceiveRequestDataPiece(void *a, s32 b);
u8 *MBi_SetRecvBufferFromChild(u8 *src, u8 *dst, s32 idx) {
    u8 *r;
    u32 t = *src;
    *dst  = t;
    switch (t) {
        case 7:
            if (IsGetAllRequestData(idx) != 0) {
                return req_data_piece_idx.f4 + (idx - 1) * 32;
            }
            dst[2] = src[1];
            if (dst[2] > req_data_piece_idx.fc) {
                return 0;
            }
            MI_CpuCopy8(src + 2, dst + 3, req_data_piece_idx.f8);
            r = MBi_ReceiveRequestDataPiece(dst, idx);
            break;
        case 8:
            r                  = src + 3;
            *(u16 *) (dst + 2) = src[1];
            *(u16 *) (dst + 2) = *(u16 *) (dst + 2) | ((src[2] << 8) & 0xff00);
            break;
        case 9:
            r                  = src + 3;
            *(u16 *) (dst + 2) = src[1];
            *(u16 *) (dst + 2) = *(u16 *) (dst + 2) | ((src[2] << 8) & 0xff00);
            MI_CpuCopy8(r, dst + 4, req_data_piece_idx.f8);
            r += req_data_piece_idx.f8;
            break;
        default:
            return 0;
    }
    return r;
}
