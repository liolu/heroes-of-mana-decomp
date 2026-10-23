/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Pos {
    s32 a;
    s32 b;
} Pos;
typedef struct Inst {
    u8 type;
    u8 pad;
    u16 idx;
    u16 key;
    u8 pad2[10];
} Inst;
void SND_GetFirstInstDataPos(Pos *);
s32 SND_GetNextInstData(void *, Inst *, Pos *);
s32 func_020058c8(void *, u16, s32, s32);
s32 func_02005804(void *a, void *bank, u16 key, s32 c, s32 d) {
    Pos pos;
    Pos first;
    Inst inst;
    SND_GetFirstInstDataPos(&first);
    pos = first;
    if (bank == 0) {
        return 0;
    }
    if (SND_GetNextInstData(bank, &inst, &pos)) {
        do {
            if (inst.type == 1 && key == inst.key) {
                if (!func_020058c8(a, inst.idx, c, d)) {
                    return 0;
                }
            }
        } while (SND_GetNextInstData(bank, &inst, &pos));
    }
    return 1;
}
