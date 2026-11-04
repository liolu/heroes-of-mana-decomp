/* compiler: 1.2/sp2p3 */
/* near start: 3 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct {
    s32 active;
    u8 pad[6];
    u16 stamp;
} Ent12;

typedef struct {
    u8 pad[4];
    u16 active;
    u8 pad2[0x2c - 6];
    s32 stamp;
    u8 pad3[4];
    void *arg;
} Ent38;

typedef struct {
    s32 thread;
    s32 phase;
    u8 kind;
    u8 pad[7];
    s32 stamp;
    u8 pad2[4];
    u16 a;
    u16 b;
    s32 c;
    s32 d;
} Req;

typedef struct Thread Thread;
struct Thread {
    u8 pad[0x68];
    Thread *next;
    u8 pad2[0xA4 - 0x6C];
    Req *req;
};

typedef struct {
    u8 pad[8];
    Thread *first;
} ThreadInfo;

extern s32 data_ov123_020df214;
extern u8 data_ov123_020df2f4[];
extern u8 data_ov123_020df6bc[];
extern u8 data_ov123_020df53c[];
extern s32 data_ov123_020df1dc;
extern s32 data_ov123_020df1e0;
extern s32 data_ov123_020df1fc;
extern s32 (*data_ov123_020df218)(void);
extern void (*data_ov123_020df210)(void *);
extern void (*data_ov123_020df20c)(void);
extern Ent12 data_ov123_020df294[8];
extern Ent38 data_ov123_020df83c[8];
extern ThreadInfo OSi_ThreadInfo;

typedef struct {
    u8 pad[0x3C];
    s32 a;
    s32 b;
    u8 pad2[4];
    s32 c;
    s32 d;
} Cfg;

void MI_CpuFill8(void *, s32, s32);
void func_ov123_0206d3fc(void);
u64 func_0200f510(void);
void func_0200e0a4(s32);
void func_ov123_0206c64c(void);
s32 func_ov123_0206b9f8(void);
s32 func_ov123_0206b8d0(s32 *, s32);
void func_ov123_0207086c(s32);
void func_ov123_0206fb0c(s32);
void func_ov123_0206b860(void);
void func_ov123_0206d3e4(void);
void func_ov123_02073fe4(u32);
void OS_WakeupThreadDirect(s32);

void func_ov123_0206c1e0(void) {
    s32 state;
    s32 timer;
    s32 first;
    s32 cnt;
    u32 now;
    s32 i;
    Thread *th;
    Req *r;

    data_ov123_020df214 = 0;
    MI_CpuFill8(data_ov123_020df2f4, 0, 0x64);
    ((Cfg *) data_ov123_020df2f4)->a = 0x180;
    ((Cfg *) data_ov123_020df2f4)->b = (s32) data_ov123_020df6bc;
    ((Cfg *) data_ov123_020df2f4)->c = 0x180;
    ((Cfg *) data_ov123_020df2f4)->d = (s32) data_ov123_020df53c;
    func_ov123_0206d3fc();
    cnt                 = 1;
    timer               = 1;
    first               = 1;
    data_ov123_020df1dc = 1;
    state               = 0;
    for (;;) {
        func_0200e0a4(1000);
        if (data_ov123_020df214 != 0) {
            break;
        }
        now = (u32) (func_0200f510() >> 16);
        if (data_ov123_020df218() != 0) {
            if (--cnt == 0) {
                if ((data_ov123_020df1e0 & 1) != 0) {
                    if (state == 0) {
                        func_ov123_0206c64c();
                        state = 1;
                    }
                } else {
                    switch (state) {
                        case 0:
                            if (first != 0) {
                                data_ov123_020df1dc = 2;
                                first               = 0;
                            }
                            if (func_ov123_0206b9f8() == 0 || func_ov123_0206b8d0(&cnt, 0) == 0) {
                                func_ov123_0206c64c();
                                state = 3;
                            } else {
                                state = 1;
                            }
                            break;
                        case 1:
                            if (func_ov123_0206b8d0(&cnt, 1) == 0) {
                                if ((u32) cnt < 0x3C) {
                                    state = 2;
                                }
                            }
                            break;
                        case 2:
                            if (func_ov123_0206b8d0(&cnt, 2) != 0) {
                                state = 1;
                            } else if ((u32) cnt < 0x3C) {
                                func_ov123_0207086c(3);
                                state = 0;
                                cnt   = 1;
                                timer = 1;
                            }
                            break;
                        case 3:
                            break;
                    }
                }
            }
        } else {
            func_ov123_0207086c(1);
            state = 0;
            cnt   = 1;
            timer = 1;
        }
        for (i = 0; i < 8; i++) {
            if (data_ov123_020df294[i].active != 0) {
                if ((s16) (now - data_ov123_020df294[i].stamp) > 0x3BD) {
                    data_ov123_020df294[i].active = 0;
                }
            }
        }
        if (data_ov123_020df1fc != 0) {
            if (--timer == 0) {
                func_ov123_0206fb0c(data_ov123_020df1fc);
                timer = 0x69;
            }
        }
        for (th = OSi_ThreadInfo.first; th != 0; th = th->next) {
            r = th->req;
            if (r != 0 && r->thread != 0) {
                if (r->kind == 3 && (s32) (now - r->stamp) > 0x27) {
                    r->kind = 1;
                    r->a    = r->b;
                    r->c    = r->d;
                } else if (r->kind == 2 && (s32) (now - r->stamp) > 0x27) {
                    if (r->phase == 1) {
                        r->kind  = 0;
                        r->phase = 0;
                        OS_WakeupThreadDirect(r->thread);
                    }
                } else if (r->kind != 4) {
                    if (r->phase == 2) {
                        r->phase = 0;
                        OS_WakeupThreadDirect(r->thread);
                    }
                }
            }
        }
        for (i = 0; i < 8; i++) {
            if (data_ov123_020df83c[i].active != 0) {
                if ((s32) (now - data_ov123_020df83c[i].stamp) > 0xEF) {
                    data_ov123_020df210(data_ov123_020df83c[i].arg);
                    data_ov123_020df83c[i].active = 0;
                }
            }
        }
        func_ov123_02073fe4(now);
        if (data_ov123_020df20c != 0) {
            data_ov123_020df20c();
        }
    }
    if ((data_ov123_020df1e0 & 1) == 0 && state != 3) {
        func_ov123_0206b860();
    }
    func_ov123_0206d3e4();
}
