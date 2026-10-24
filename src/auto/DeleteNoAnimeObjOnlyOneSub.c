/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned int u32;
typedef short s16;
typedef struct Obj Obj;
struct Obj {
    u8 p0[4];
    s16 x;
    s16 y;
    u8 p8[3];
    u8 b0 : 1;
    u8 b1 : 3;
    u8 b4 : 1;
    u8 b5 : 3;
    u8 pc[0x14];
    Obj *next;
};
void ResetVramMapX(int, int, int);
void OS_FreeToHeap(int, int, void *);
void DeleteNoAnimeObjOnlyOneSub(Obj **head, Obj *target) {
    Obj *cur = *head;
    if (cur != 0) {
        if (cur == target) {
            *head = cur->next;
            if (!target->b4) {
                ResetVramMapX(target->x, target->y, target->b0);
            }
            if (target != 0) {
                OS_FreeToHeap(0, -1, target);
            }
        } else if (cur->next != 0) {
            DeleteNoAnimeObjOnlyOneSub(&cur->next, target);
        }
    }
}
