/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef struct S {
    u8 pad[0x1024];
    char buf[0x100];
    char *p;
    char *q;
    int unk;
    int kind;
    s16 port;
} S;
u32 func_02024c28(char *);
void func_02024d0c(char *, char *, int);
char *func_02024f10(char *, void *);
s16 func_02026c4c(char *);
extern char data_ov123_020dc244[];
extern char data_ov123_020dc24c[];
extern char data_ov123_020dc258[];
extern char data_ov123_020dc25c[];
s32 func_ov123_02096644(S *s, char *arg1) {
    char *a = 0;
    char *t;
    if (func_02024c28(arg1) >= 0x100U) {
        return 0;
    }
    func_02024d0c(s->buf, arg1, 0x100);
    if (func_02024c28(arg1) != func_02024c28(s->buf)) {
        return 0;
    }
    if (func_02024f10(s->buf, data_ov123_020dc244) != 0) {
        s->p    = s->buf + 7;
        s->kind = 0;
        s->port = 0x50;
    } else {
        t = func_02024f10(s->buf, data_ov123_020dc24c);
        if (t == 0) {
            return 0;
        }
        s->p    = t + 8;
        s->kind = 1;
        s->port = 0x1BB;
    }
    t = func_02024f10(s->p, data_ov123_020dc258);
    if (t != 0) {
        *t = 0;
        a  = t + 1;
    }
    t = func_02024f10(s->p, data_ov123_020dc25c);
    if (t == 0) {
        s->q = 0;
    } else {
        *t   = 0;
        s->q = t + 1;
    }
    if (a != 0) {
        s->port = func_02026c4c(a);
    }
    return 1;
}
