typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 pad[0x18];
    void **arr;
} Table18;

void *func_ov004_020c9868(Table18 *t, u32 i) {
    return t->arr[i];
}
