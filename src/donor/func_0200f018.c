/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_CheckHeap from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa164.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef u32 OSIntrMode;
extern OSIntrMode func_0200fa98(void);
extern OSIntrMode func_0200faac(OSIntrMode state);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef int OSHeapHandle;
extern s32 func_0200f018(OSArenaId id, OSHeapHandle heap);
typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
struct HeapDesc {
    long size;
    Cell *free;
    Cell *allocated;
};
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern void *data_020388c0[OS_ARENA_MAX];
s32 func_0200f018(OSArenaId id, OSHeapHandle heap) {
    OSHeapInfo *heapInfo;
    HeapDesc *hd;
    Cell *cell;
    long total         = 0;
    long free          = 0;
    long retValue      = -1;
    OSIntrMode enabled = func_0200fa98();

    ((void) 0);
    ((void) 0);

    heapInfo = data_020388c0[id];

    if (heap == ((OSHeapHandle) -1)) {
        heap = heapInfo->currentHeap;
    }

    ((void) 0);

    do {
        if (!(heapInfo->heapArray)) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);
    do {
        if (!(0 <= heap && heap < heapInfo->numHeaps)) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);

    hd = &heapInfo->heapArray[heap];
    do {
        if (!(0 <= hd->size)) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);

    do {
        if (!(hd->allocated == ((void *) 0) || hd->allocated->prev == ((void *) 0))) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);
    for (cell = hd->allocated; cell; cell = cell->next) {
        do {
            if (!(((u32) (heapInfo->arenaStart) <= (u32) (cell) && (u32) (cell) < (u32) (heapInfo->arenaEnd)))) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!((((u32) (cell)) & ((32) - 1)) == 0)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!(cell->next == ((void *) 0) || cell->next->prev == cell)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!(((((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1)) + 32) <= cell->size)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!((((u32) (cell->size)) & ((32) - 1)) == 0)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);

        total += cell->size;
        do {
            if (!(0 < total && total <= hd->size)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
    }

    do {
        if (!(hd->free == ((void *) 0) || hd->free->prev == ((void *) 0))) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);

    for (cell = hd->free; cell; cell = cell->next) {
        do {
            if (!(((u32) (heapInfo->arenaStart) <= (u32) (cell) && (u32) (cell) < (u32) (heapInfo->arenaEnd)))) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!((((u32) (cell)) & ((32) - 1)) == 0)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!(cell->next == ((void *) 0) || cell->next->prev == cell)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!(((((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1)) + 32) <= cell->size)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!((((u32) (cell->size)) & ((32) - 1)) == 0)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
        do {
            if (!(cell->next == ((void *) 0) || (char *) cell + cell->size < (char *) cell->next)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);

        total += cell->size;
        free += cell->size - (((u32) (sizeof(Cell)) + (32) - 1) & ~((32) - 1));
        do {
            if (!(0 < total && total <= hd->size)) {
                ((void) 0);
                goto exit_OS_CheckHeap;
            }
        } while (0);
    }

    do {
        if (!(total == hd->size)) {
            ((void) 0);
            goto exit_OS_CheckHeap;
        }
    } while (0);
    retValue = free;

exit_OS_CheckHeap:
    (void) func_0200faac(enabled);
    return retValue;
}
