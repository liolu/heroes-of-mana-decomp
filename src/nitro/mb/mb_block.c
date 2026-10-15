#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202d478(M2C_UNK, M2C_UNK);
extern M2C_UNK req_data_piece_idx;
M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);

void MBi_SetChildMPMaxSize(s32 arg0) {
    s32 temp_r1;

    temp_r1                                = arg0 - 2;
    M2C_FIELD(&req_data_piece_idx, s32 *, 8)    = temp_r1;
    M2C_FIELD(&req_data_piece_idx, s32 *, 0xC)  = func_0202d478(0x1E, temp_r1);
    M2C_FIELD(&req_data_piece_idx, s32 *, 0x10) = 0x1E;
}

void MBi_SetParentPieceBuffer(s32 arg0) {
    M2C_FIELD(&req_data_piece_idx, s32 *, 4) = arg0;
    MI_CpuFill8(arg0, 0, 0x21C);
}

void MBi_ClearParentPieceBuffer(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(&req_data_piece_idx, s32 *, 4) == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    MI_CpuFill8(M2C_FIELD(&req_data_piece_idx, s32 *, 4) + (temp_r4 << 5), 0, 0x1E);
    M2C_FIELD((M2C_FIELD(&req_data_piece_idx, s32 *, 4) + (temp_r4 * 4)), s32 *, 0x1E0) = 0;
}
