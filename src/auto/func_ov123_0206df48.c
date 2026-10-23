/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef struct Pkt {
    u8 p0[4];
    u16 w4;
    u16 w6;
    u16 w8;
    u16 wA;
    u8 b0C;
    u8 b0D;
    u16 w0E;
} Pkt;
typedef struct Con {
    s32 thread;
    u32 wake;
    u8 mode;
    u8 p9[0x1B];
    s32 f24;
    u8 p28[4];
    s16 f2C;
    u8 p2E[2];
    s32 f30;
    s32 f34;
    u8 p38[4];
    s32 f3C;
    u8 *buf;
    s32 f44;
} Con;
extern void MI_CpuCopy8(void *, void *, u32);
extern u32 OS_WakeupThreadDirect(s32);
extern void OS_YieldThread(u32);
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern u32 func_ov123_0206e608(s32, void *, u32, s32);
extern u32 func_ov123_0206e744(void *, s32);
extern u32 func_ov123_0206e758(void *, s32);
extern Con *func_ov123_0206e89c(void);
void func_ov123_0206df48(s32 arg0, Pkt *arg1, u32 arg2) {
    u32 r;
    u16 w4;
    s32 seq;
    u16 w6;
    Con *c;
    u8 flags;
    s32 t2;
    s32 save;
    u32 n;
    s32 full;
    n = arg2;
    c = func_ov123_0206e89c();
    if (c == 0) {
        func_ov123_0206e608(arg0, arg1, n, 0);
        return;
    }
    flags  = arg1->b0D;
    c->f30 = ((u16) (((s32) arg1->w8 >> 8) | (arg1->w8 << 8)) << 16) | (u16) (((s32) arg1->wA >> 8) | (arg1->wA << 8));
    w4     = arg1->w4;
    w6     = arg1->w6;
    seq    = ((u16) (((s32) w4 >> 8) | (w4 << 8)) << 16) | (u16) (((s32) w6 >> 8) | (w6 << 8));
    if (c->mode == 4 && c->f24 != seq) {
        func_ov123_0206e758(c, 0);
        return;
    }
    c->f2C = ((s32) arg1->w0E >> 8) | (arg1->w0E << 8);
    switch (c->mode) {
        case 0:
        case 2:
            r = func_ov123_0206e608(arg0, arg1, n, 0);
            break;
        case 3:
            c->mode = 4;
            r       = c->wake;
            if (r == 1) {
                c->wake = 0;
                r       = OS_WakeupThreadDirect(c->thread);
            }
            if (n != 0) {
                case 4:
                    c->f34 = c->f34 + 1;
                    r      = c->f3C - c->f44;
                    if (n > r) {
                        full = 0;
                        n    = r;
                    } else {
                        full = 1;
                    }
                    if (n != 0) {
                        save = func_0200fa98();
                        MI_CpuCopy8((u8 *) arg1 + (arg1->b0C & 0xF0) / 4, c->buf + c->f44, n);
                        c->f44 = c->f44 + n;
                        c->f24 = c->f24 + n;
                        func_0200faac(save);
                        r = c->wake;
                        if (r == 2) {
                            c->wake = 0;
                            r       = OS_WakeupThreadDirect(c->thread);
                        }
                    }
                    if (full != 0 && (r = flags & 1, r != 0)) {
                        c->mode = 6;
                        c->f24  = c->f24 + 1;
                        r       = func_ov123_0206e744(c, 0);
                        if (n == 0) {
                            r = c->wake;
                            if (r == 2) {
                                c->wake = 0;
                                r       = OS_WakeupThreadDirect(c->thread);
                            }
                        }
                    } else if (n != 0) {
                        r = func_ov123_0206e758(c, 0);
                    }
            }
            break;
        case 7:
        case 8:
            if (flags & 1) {
                c->f24 = c->f24 + (n + 1);
                func_ov123_0206e758(c, 0);
                c->mode = 0;
                r       = c->wake;
                if (r == 2) {
                    c->wake = 0;
                    r       = OS_WakeupThreadDirect(c->thread);
                }
            } else {
                if (n != 0) {
                    c->f24 = c->f24 + n;
                    func_ov123_0206e758(c, 0);
                }
                r       = 8;
                c->mode = 8;
            }
            break;
        case 6:
        case 9:
            c->mode = 0;
            r       = c->wake;
            if (r == 2) {
                c->wake = 0;
                r       = OS_WakeupThreadDirect(c->thread);
            }
            break;
        default:
        case 1:
        case 5:
            if (flags & 1) {
                c->f24 = c->f24 + 1;
            }
            r = func_ov123_0206e758(c, 0);
            break;
    }
    OS_YieldThread(r);
}
