/* compiler: 2.0/sp1p5 -profile */
extern int func_02002414(int);
typedef struct {
    char pad[0x24];
    char *tab;
} T;
extern T *data_0203673c;
typedef struct {
    int a;
    int b;
    unsigned f : 4;
} U;
int WhatNoEquipSeirei(int a) {
    int i = func_02002414(a);
    int r = -1;
    if (i == -1) {
        return -1;
    }
    {
        unsigned v = ((U *) (data_0203673c->tab + i * 0x34))->f;
        if (v != 0) {
            r = v - 1;
        }
    }
    return r;
}
