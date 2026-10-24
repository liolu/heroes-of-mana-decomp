/* compiler: 1.2/sp3 -profile */
typedef unsigned int u32;
typedef struct P {
    int p0;
    int p4;
    u32 lo : 23;
    u32 f : 1;
    u32 hi : 8;
} P;
typedef struct E {
    u32 used : 1;
    u32 b1 : 2;
    u32 kind : 3;
    u32 rest : 26;
    char pad[0xe4];
    P *ptr;
    char q[0x24];
} E;
extern E data_ov003_020b0cf0[];
int IsThereSomeChoice(void) {
    int n = 0;
    E *e;
    int i;
    for (e = data_ov003_020b0cf0, i = 0; i < 0x42; i++, e++) {
        if (e->used && e->kind == 1 && e->ptr != 0 && e->ptr->f == 0) {
            n++;
            if (n > 1) {
                return 1;
            }
        }
    }
    return 0;
}
