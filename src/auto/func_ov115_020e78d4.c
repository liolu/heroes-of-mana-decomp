#include "m2c.h"

typedef struct {
    s32 first;
    s32 pad[3];
} Row;

extern Row data_ov115_020e9a04[];
extern s32 data_ov115_020e99e4[];

void *func_0200ed38(u32 a, s32 b, s32 c);
void func_ov115_020e759c(void *p, s32 a);
s32 func_ov115_020e77a8(void);
s32 CARDi_RequestStreamCommand(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
void OS_FreeToHeap(u32 a, s32 b, void *p);
void func_ov115_020e7774(void);
s32 func_0201783c(void);
void VBlankIntrWaitInGame(void);
void func_ov115_020e74c0(void);
s32 CARD_GetResultCode(void);

s32 func_ov115_020e78d4(s32 arg0) {
    s32 b1[4];
    s32 b2[2];
    u32 *heap;
    u32 off;
    s32 a;

    heap = (u32 *) func_0200ed38(0, -1, 0x8000);
    if (heap == 0) {
        return 0;
    }
    func_ov115_020e759c(heap, arg0);
    if (func_ov115_020e77a8() == 0) {
        return 0;
    }
    if (data_ov115_020e9a04[arg0].first == 0) {
        for (off = 0; off < 0x18000; off += 0x8000) {
            if (CARDi_RequestStreamCommand(off, (s32) b1, 0x10, 0, 0, 0, 6, 1, 0) == 1 && b1[0] != 0x204D6F48) {
                if (CARDi_RequestStreamCommand(off, (s32) b2, 1, 0, 0, 0, 6, 1, 0) != 1) {
                    OS_FreeToHeap(0, -1, heap);
                    func_ov115_020e7774();
                    return 0;
                }
                CARDi_RequestStreamCommand((s32) heap, off, 0x8000, 0, 0, 1, 7, 10, 2);
                if (func_0201783c() == 0) {
                    do {
                        VBlankIntrWaitInGame();
                        func_ov115_020e74c0();
                    } while (func_0201783c() == 0);
                }
                if (CARD_GetResultCode() != 0) {
                    OS_FreeToHeap(0, -1, heap);
                    func_ov115_020e7774();
                    return 0;
                }
                heap[2] |= 0x1000000;
                CARDi_RequestStreamCommand((s32) heap, off + 0x18000, 0x8000, 0, 0, 1, 7, 10, 2);
                if (func_0201783c() == 0) {
                    do {
                        VBlankIntrWaitInGame();
                        func_ov115_020e74c0();
                    } while (func_0201783c() == 0);
                }
                if (CARD_GetResultCode() != 0) {
                    OS_FreeToHeap(0, -1, heap);
                    func_ov115_020e7774();
                    return 0;
                }
                break;
            }
        }
    } else {
        a = data_ov115_020e99e4[arg0];
        if (a != -1) {
            if (CARDi_RequestStreamCommand(a, (s32) b2, 1, 0, 0, 0, 6, 1, 0) != 1) {
                OS_FreeToHeap(0, -1, heap);
                func_ov115_020e7774();
                return 0;
            }
            CARDi_RequestStreamCommand((s32) heap, data_ov115_020e99e4[arg0], 0x8000, 0, 0, 1, 7, 10, 2);
            if (func_0201783c() == 0) {
                do {
                    VBlankIntrWaitInGame();
                    func_ov115_020e74c0();
                } while (func_0201783c() == 0);
            }
            if (CARD_GetResultCode() != 0) {
                OS_FreeToHeap(0, -1, heap);
                func_ov115_020e7774();
                return 0;
            }
            heap[2] |= 0x1000000;
            CARDi_RequestStreamCommand((s32) heap, data_ov115_020e99e4[arg0] + 0x18000, 0x8000, 0, 0, 1, 7, 10, 2);
            if (func_0201783c() == 0) {
                do {
                    VBlankIntrWaitInGame();
                    func_ov115_020e74c0();
                } while (func_0201783c() == 0);
            }
            if (CARD_GetResultCode() != 0) {
                OS_FreeToHeap(0, -1, heap);
                func_ov115_020e7774();
                return 0;
            }
        }
    }
    OS_FreeToHeap(0, -1, heap);
    func_ov115_020e7774();
    return 1;
}
