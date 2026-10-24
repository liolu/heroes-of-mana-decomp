/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef struct S {
    int a;
} S;
typedef struct E {
    int x;
    int y;
    char pad[0x14ec];
} E;
extern int func_01ffea88(E *e);
int func_ov110_020e183c(u8 *o, int v) {
    E *base;
    if (*(int *) (o + 0x100) == *(int *) (o + 0xfc)) {
        return 0;
    }
    ((E *) (*(u8 **) (o + 0xb4)) + *(int *) (o + 0x104))->x = *(int *) (o + 0x34);
    ((E *) (*(u8 **) (o + 0xb4)) + *(int *) (o + 0x104))->y = v;
    *(int *) (o + 0x34) += func_01ffea88((E *) (*(u8 **) (o + 0xb4)) + *(int *) (o + 0x104));
    *(int *) (o + 0x104) += 1;
    if (*(int *) (o + 0x104) == *(int *) (o + 0x20)) {
        *(int *) (o + 0x104) = 0;
    }
    *(int *) (o + 0x100) += 1;
    return 1;
}
