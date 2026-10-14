/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ae8dc from projets/dragon-ball-origins/src/donor/func_020ae8dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkExpMBlock {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
    struct UnkExpMBlock *unk_08;
    struct UnkExpMBlock *unk_0c;
} UnkExpMBlock;
typedef struct UnkExpMBlockList {
    UnkExpMBlock *unk_00;
    UnkExpMBlock *unk_04;
} UnkExpMBlockList;
typedef struct UnkExpHeapHead {
    UnkExpMBlockList unk_00;
    UnkExpMBlockList unk_08;
    u16 unk_10;
    u16 unk_12;
} UnkExpHeapHead;
typedef struct UnkMemRegion {
    void *unk_00;
    void *unk_04;
} UnkMemRegion;
static inline void *GetMemPtrForMBlock(UnkExpMBlock *block) {
    return (void *) ((u32) block + sizeof(UnkExpMBlock));
}
static inline void *GetMBlockEndAddr(UnkExpMBlock *block) {
    return (void *) ((u32) GetMemPtrForMBlock(block) + block->unk_04);
}
extern UnkExpMBlock *func_02008160(UnkExpMBlockList *list, UnkExpMBlock *block);
extern UnkExpMBlock *func_02008130(UnkExpMBlockList *list, UnkExpMBlock *block, UnkExpMBlock *prev);
extern UnkExpMBlock *func_02008100(UnkMemRegion *region, u16 signature);
BOOL func_02007c8c(UnkExpHeapHead *exp, UnkMemRegion *region) {
    UnkExpMBlock *blockPrev = 0;
    UnkMemRegion freeRgn    = *region;
    UnkExpMBlock *block;

    for (block = exp->unk_00.unk_00; block != 0; block = block->unk_0c) {
        if (block < (UnkExpMBlock *) region->unk_00) {
            blockPrev = block;
            continue;
        }
        if (block == (UnkExpMBlock *) region->unk_04) {
            freeRgn.unk_04 = GetMBlockEndAddr(block);
            func_02008160(&exp->unk_00, block);
        }
        break;
    }

    if (blockPrev != 0 && GetMBlockEndAddr(blockPrev) == region->unk_00) {
        freeRgn.unk_00 = blockPrev;
        blockPrev      = func_02008160(&exp->unk_00, blockPrev);
    }

    if ((u32) freeRgn.unk_04 - (u32) freeRgn.unk_00 < sizeof(UnkExpMBlock)) {
        return 0;
    }
    func_02008130(&exp->unk_00, func_02008100(&freeRgn, 0x4652), blockPrev);
    return 1;
}
