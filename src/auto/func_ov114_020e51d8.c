#include "m2c.h"

typedef struct {
    u32 w0;
    u32 p : 8;
    u32 sum : 8;
    u32 q : 16;
} Hd;

extern s32 data_ov114_020e610c[];
s32 func_ov114_020e50ac(void);
void func_ov114_020e5078(void);
void *func_0200ed38(s32, s32, s32);
s32 CARDi_RequestStreamCommand(s32, void *, s32, s32, s32, s32, s32, s32, s32);
void OS_FreeToHeap(s32, s32, void *);
void func_ov114_020e4fa0(void *);
u8 func_ov114_020e4ff0(void *);
void func_ov114_020e505c(void *);

s32 func_ov114_020e51d8(s32 a) {
    Hd *buf;
    if (func_ov114_020e50ac() == 0) {
        return 1;
    }
    if (data_ov114_020e610c[a] == -1) {
        func_ov114_020e5078();
        return 1;
    }
    buf = func_0200ed38(0, -1, 0x8000);
    if (buf == NULL) {
        return 1;
    }
    if (CARDi_RequestStreamCommand(data_ov114_020e610c[a], buf, 0x8000, 0, 0, 0, 6, 1, 0) != 1) {
        if (CARDi_RequestStreamCommand(data_ov114_020e610c[a] + 0x18000, buf, 0x8000, 0, 0, 0, 6, 1, 0) != 1) {
            OS_FreeToHeap(0, -1, buf);
            func_ov114_020e5078();
            return 1;
        }
        func_ov114_020e4fa0(buf);
        if (buf->sum != func_ov114_020e4ff0(buf)) {
            func_ov114_020e5078();
            OS_FreeToHeap(0, -1, buf);
            return 2;
        }
    } else {
        func_ov114_020e4fa0(buf);
        if (buf->sum != func_ov114_020e4ff0(buf)) {
            if (CARDi_RequestStreamCommand(data_ov114_020e610c[a] + 0x18000, buf, 0x8000, 0, 0, 0, 6, 1, 0) != 1) {
                OS_FreeToHeap(0, -1, buf);
                func_ov114_020e5078();
                return 1;
            }
            func_ov114_020e4fa0(buf);
            if (buf->sum != func_ov114_020e4ff0(buf)) {
                func_ov114_020e5078();
                OS_FreeToHeap(0, -1, buf);
                return 2;
            }
        }
    }
    func_ov114_020e5078();
    func_ov114_020e505c(buf);
    OS_FreeToHeap(0, -1, buf);
    return 0;
}
