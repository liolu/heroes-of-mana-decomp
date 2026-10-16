#include "m2c.h"

extern M2C_UNK req_data_piece_idx;

s32 IsGetAllRequestData(s32 param_1) {
    u16 i = 0;
    u32 *list;
    u32 bits;
    s32 count = *(s32 *) ((u8 *) &req_data_piece_idx + 0xC);

    if (count > 0) {
        list = *(u32 **) ((u8 *) &req_data_piece_idx + 0x4);
        bits = *(u32 *) ((u8 *) (list + (param_1 - 1)) + 0x1E0);
        do {
            if ((bits & (1 << i)) == 0) {
                return 0;
            }
            i++;
        } while (count > i);
    }
    return 1;
}
