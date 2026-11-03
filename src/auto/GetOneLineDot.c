/* compiler: 2.0/sp1p5 -profile */
/* near start: 2 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct Ent {
    u8 *p0;
    u8 *p4;
    u8 *p8;
    u8 *pc;
} Ent;
typedef struct Nm {
    u8 b[12];
} Nm;
typedef struct GO {
    u8 pad[0x278];
    Nm names[16];
    u16 b0 : 1;
    u16 b1 : 1;
    u16 rest : 14;
    u8 pad2[8];
    u16 h342;
    u8 pad3[8];
    u8 f34c[0x100];
} GO;
extern GO *data_ov000_02051550;
extern void MIi_CpuCopy16(void *, void *, s32);
extern void OS_GetOwnerInfo(void *);
extern u8 *ChgNumIPLtoUseFont(u16 *, u16 *, s32 *);
extern u8 *getNameString(s32, s32, s32 *);
extern u8 *getMessString(s32, s32, s32 *);
extern s32 GetOneMojiHaba(s32);

s32 GetOneLineDot(u8 *p, u8 *end, u8 *base) {
    Ent e[16];
    u8 own[0x50];
    s32 spc;
    s32 sp8;
    s32 sp4;
    u32 flag;
    s32 w;
    s32 done;
    s32 n;
    u8 *ret;
    u32 c;
    flag = data_ov000_02051550->b1;
    w    = 0;
    done = w;
    n    = data_ov000_02051550->h342;
    MIi_CpuCopy16(data_ov000_02051550->f34c, e, 0x100);
    for (;;) {
        while (p >= end || *p == 0xff) {
            if (n == 0) {
                done = 1;
                break;
            }
            n--;
            p    = e[n].p8;
            end  = e[n].pc;
            base = e[n].p0;
        }
        if (done != 0) {
            break;
        }
        c = *p;
        if (c == 0xe0) {
            break;
        }
        if (c > 0xe0) {
            switch (c) {
                case 0xfc:
                    p++;
                    data_ov000_02051550->b1 = 1;
                    OS_GetOwnerInfo(own);
                    ret = ChgNumIPLtoUseFont((u16 *) (own + 4), (u16 *) (own + 4) + *(u16 *) (own + 0x18), &spc);
                    if (ret != 0) {
                        e[n].p8 = p;
                        e[n].pc = end;
                        e[n].p0 = base;
                        n++;
                        e[n].p0 = base;
                        e[n].p4 = ret;
                        e[n].p8 = ret;
                        end     = e[n].p4 + spc;
                        e[n].pc = end;
                        p       = e[n].p8;
                    }
                    break;
                case 0xf6:
                case 0xf7:
                case 0xf8:
                case 0xf9:
                    p++;
                    break;
                case 0xe1:
                    p++;
                    break;
                case 0xe8:
                    p += 2;
                    break;
                case 0xea:
                    e[n].p8 = p + 4;
                    e[n].pc = end;
                    e[n].p0 = base;
                    n++;
                    base    = (u8 *) &data_ov000_02051550->names[p[1]];
                    e[n].p0 = base;
                    ret     = getNameString(p[1], p[2] | (p[3] << 8), &sp8);
                    e[n].p4 = ret;
                    e[n].p8 = ret;
                    end     = e[n].p4 + sp8;
                    e[n].pc = end;
                    p       = e[n].p8;
                    break;
                case 0xe2:
                    p++;
                    break;
                case 0xe9:
                    e[n].p8 = p + 3;
                    e[n].pc = end;
                    e[n].p0 = base;
                    n++;
                    e[n].p0 = base;
                    ret     = getMessString(0, p[1] | (p[2] << 8), &sp4);
                    e[n].p4 = ret;
                    e[n].p8 = ret;
                    end     = e[n].p4 + sp4;
                    e[n].pc = end;
                    p       = e[n].p8;
                    break;
                case 0xe3:
                    p++;
                    break;
                case 0xe4:
                    p++;
                    break;
                case 0xe5:
                    p++;
                    break;
                case 0xfa:
                    p++;
                    break;
                case 0xfb:
                    p++;
                    break;
                default:
                    p++;
                    break;
            }
        } else {
            w += GetOneMojiHaba((u16) (p[1] | (c << 8)));
            p += 2;
        }
    }
    data_ov000_02051550->b1 = (u16) flag;
    return w;
}
