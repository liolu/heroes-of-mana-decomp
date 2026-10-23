/* compiler: 1.2/sp3 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct {
    s32 w0;
    char name1[0x40];
    char name2[0x40];
    u8 rnd[4];
    s32 p88, p8c, p90, p94, p98, p9c, pa0, pa4, pa8, pac, pb0, pb4, pb8, pbc, pc0, pc4, pc8;
    u8 cc[8];
    s32 pd4;
    s32 pd8[10];
    s32 p100, p104;
    s16 p108;
    s16 pad;
    s32 p10c;
} Obj;
extern Obj data_ov123_020db5f8;
extern char data_ov123_020db7e4[];
extern s32 data_ov123_020e14f4;
extern s8 data_ov123_020e150c;
Obj *func_ov123_020996d4(s32);
void func_ov123_0207b3f4(void);
void func_0202379c(void);
char *func_02024c44(char *, const char *);
s32 rand(void);
void func_ov123_0208d2f8(void);
void func_0202373c(char *, const char *, const char *);
s32 func_ov123_0208d244(s8 *, s32, void *, s32);
s32 func_ov123_0208d774(Obj **arg0, s32 arg1, s32 arg2, const char *arg3, const char *arg4, s32 arg5, s32 arg6, s32 arg7,
                        s32 arg8, s32 arg9, s32 argA, s32 argB, s32 argC, s32 argD) {
    char buf[64];
    s32 i;
    s32 r;
    s8 c;
    Obj *o;
    if (arg0 == 0) {
        o = &data_ov123_020db5f8;
    } else {
        *arg0 = func_ov123_020996d4(0x110);
        o     = *arg0;
    }
    func_ov123_0207b3f4();
    func_0202379c();
    func_02024c44(o->name1, arg3);
    func_02024c44(o->name2, arg4);
    o->pc0  = arg2;
    i       = 0;
    o->pac  = 0;
    o->pb0  = 0;
    o->w0   = arg1;
    o->pb8  = 1;
    o->p10c = argD;
    o->p88  = arg7;
    o->p8c  = arg8;
    o->p90  = arg9;
    o->p94  = argA;
    o->p98  = argB;
    o->p9c  = argC;
    o->pa0  = 0;
    o->pa4  = 0;
    o->pd4  = 0;
    o->pbc  = arg5;
    o->pc4  = 0;
    o->pc8  = arg6;
    o->p104 = 0;
    o->p108 = 0;
    o->pa8  = 0;
    o->pb4  = 0;
    do {
        o->rnd[i] = rand() % 0xFF;
        i++;
    } while (i < 4);
    i = 0;
    do {
        o->pd8[i] = -1;
        i++;
    } while (i < 10);
    o->p100 = 0;
    if (data_ov123_020e14f4 == 0) {
        func_ov123_0208d2f8();
    }
    if (arg5 != 0) {
        c = data_ov123_020e150c;
        if (c == 0) {
            func_0202373c(buf, data_ov123_020db7e4, arg3);
        }
        r = func_ov123_0208d244(c != 0 ? &data_ov123_020e150c : (s8 *) buf, 0x6CFC, o->cc, 0);
    } else {
        r = 1;
    }
    if (r != 0) {
        return 0;
    }
    return 3;
}
