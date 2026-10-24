/* compiler: 2.0/sp1p5 -profile */
typedef struct Obj {
    unsigned char pad[0xA8];
    unsigned short a : 7;
    unsigned short b : 7;
    unsigned short m : 2;
    unsigned char c7 : 7;
    unsigned char f7 : 1;
    signed char hook;
    unsigned char pad2[0x20];
} Obj;
typedef struct Obj2 {
    unsigned char pad[0xCC];
    signed char c0;
    signed char c1;
    signed char c2;
    signed char c3;
} Obj2;
extern signed char GetHookObjNo(unsigned int, unsigned int);
extern void SetHookCondSt(void *);
extern void changeAnchoMode(void *);

void SetConsiderFromData(void *o, int mode, int a, int b) {
    Obj *p  = (Obj *) o;
    Obj2 *q = (Obj2 *) o;
    q->c0   = 0;
    q->c2   = -1;
    q->c3   = -1;
    q->c1   = -1;
    switch (mode) {
        case 0:
            q->c0 = 0;
            break;
        case 1:
            q->c0 = 1;
            q->c2 = a;
            q->c3 = b;
            break;
        case 2:
            q->c0   = 0;
            p->a    = a;
            p->b    = b;
            p->c7   = 0x5A;
            p->m    = 2;
            p->f7   = 1;
            p->hook = GetHookObjNo(p->a, p->b);
            SetHookCondSt(o);
            changeAnchoMode(o);
            break;
    }
}
