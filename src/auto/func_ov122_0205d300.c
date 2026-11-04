/* near start: 18 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct Ent {
    s32 v;
    s32 p[3];
} Ent;
typedef struct Hd {
    s32 a;
    s32 b;
    u32 flags;
} Hd;

extern Ent data_ov122_02066464[];
extern s32 data_ov122_02066458[];
extern Hd *func_0200ed38(u32, s32, s32);
extern void func_ov122_0205d128(void *, s32);
extern s32 func_ov122_0205cf48(void);
extern void OS_FreeToHeap(u32, s32, void *);
extern void func_ov122_0205cf14(void);
extern s32 func_0201783c(void);
extern void VBlankIntrWaitInGame(void);
extern void func_ov122_0205cef4(void);
extern s32 CARD_GetResultCode(void);
extern s32 CARDi_RequestStreamCommand(s32, void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_ov122_0205d300(s32 a) {
    Hd *buf;
    u32 base;
    s32 *idp;
    struct {
        s32 hdr[2];
        s32 id;
        s32 pad[3];
    } L;
    buf = func_0200ed38(0, -1, 0x8000);
    if (buf == 0) {
        return 0;
    }
    func_ov122_0205d128(buf, a);
    if (func_ov122_0205cf48() == 0) {
        return 0;
    }
    if (data_ov122_02066464[a].v == 0) {
        idp = &L.id;
        for (base = 0; base < 0x18000; base += 0x8000) {
            if (CARDi_RequestStreamCommand(base, idp, 0x10, 0, 0, 0, 6, 1, 0) == 1 && L.id != 0x204d6f48) {
                if (CARDi_RequestStreamCommand(base, L.hdr, 1, 0, 0, 0, 6, 1, 0) != 1) {
                    OS_FreeToHeap(0, -1, buf);
                    func_ov122_0205cf14();
                    return 0;
                }
                CARDi_RequestStreamCommand((s32) buf, (void *) base, 0x8000, 0, 0, 1, 7, 10, 2);
                while (func_0201783c() == 0) {
                    VBlankIntrWaitInGame();
                    func_ov122_0205cef4();
                }
                if (CARD_GetResultCode() != 0) {
                    OS_FreeToHeap(0, -1, buf);
                    func_ov122_0205cf14();
                    return 0;
                }
                buf->flags |= 0x1000000;
                CARDi_RequestStreamCommand((s32) buf, (void *) (base + 0x18000), 0x8000, 0, 0, 1, 7, 10, 2);
                while (func_0201783c() == 0) {
                    VBlankIntrWaitInGame();
                    func_ov122_0205cef4();
                }
                if (CARD_GetResultCode() != 0) {
                    OS_FreeToHeap(0, -1, buf);
                    func_ov122_0205cf14();
                    return 0;
                }
                break;
            }
        }
    } else if (data_ov122_02066458[a] != -1) {
        if (CARDi_RequestStreamCommand(data_ov122_02066458[a], L.hdr, 1, 0, 0, 0, 6, 1, 0) != 1) {
            OS_FreeToHeap(0, -1, buf);
            func_ov122_0205cf14();
            return 0;
        }
        CARDi_RequestStreamCommand((s32) buf, (void *) data_ov122_02066458[a], 0x8000, 0, 0, 1, 7, 10, 2);
        while (func_0201783c() == 0) {
            VBlankIntrWaitInGame();
            func_ov122_0205cef4();
        }
        if (CARD_GetResultCode() != 0) {
            OS_FreeToHeap(0, -1, buf);
            func_ov122_0205cf14();
            return 0;
        }
        buf->flags |= 0x1000000;
        CARDi_RequestStreamCommand((s32) buf, (void *) (data_ov122_02066458[a] + 0x18000), 0x8000, 0, 0, 1, 7, 10, 2);
        while (func_0201783c() == 0) {
            VBlankIntrWaitInGame();
            func_ov122_0205cef4();
        }
        if (CARD_GetResultCode() != 0) {
            OS_FreeToHeap(0, -1, buf);
            func_ov122_0205cf14();
            return 0;
        }
    }
    OS_FreeToHeap(0, -1, buf);
    func_ov122_0205cf14();
    return 1;
}
