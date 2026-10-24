/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    void *p;
    void *q;
} E;
typedef struct Ship {
    u8 p0[0x18];
    void *a18;
    void *a1c[3];
    void *a28;
    void *a2c;
    u8 p30[0xC];
    u8 c3c[4];
    u8 c40[4];
    void *a44;
    u8 p48[0x308];
    E e350[2];
    void *a360;
} Ship;

void OS_FreeToHeap(s32, s32, void *);
void ReleaseUpUnit256Data(s32, s32);
void ReleaseUpFactoryData(s32);
void ReleaseUnitListGraData(void);
void DeleteUnitStatusInShip(void);
void DeleteDeleteWinInShip(void);
void DeleteIconListWinInShip(void);
void DeleteShisetuIcon(void);
void DeleteCommonIconInShip(void);
void DeleteHelpInShip(void);
void DeleteConfirmationInShip(void);
void deleteComObj(void *);
extern Ship *data_ov109_020ea340;

void ReleaseDataInShip(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            ReleaseUpUnit256Data(i, j);
        }
        ReleaseUpFactoryData(i);
    }
    ReleaseUnitListGraData();
    DeleteUnitStatusInShip();
    DeleteDeleteWinInShip();
    DeleteIconListWinInShip();
    DeleteShisetuIcon();
    DeleteCommonIconInShip();
    DeleteHelpInShip();
    DeleteConfirmationInShip();
    if (data_ov109_020ea340->a18 != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->a18);
        data_ov109_020ea340->a18 = NULL;
    }
    for (i = 0; i < 3; i++) {
        if (data_ov109_020ea340->a1c[i] != NULL) {
            OS_FreeToHeap(0, -1, data_ov109_020ea340->a1c[i]);
            data_ov109_020ea340->a1c[i] = NULL;
        }
    }
    if (data_ov109_020ea340->a28 != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->a28);
        data_ov109_020ea340->a28 = NULL;
    }
    if (data_ov109_020ea340->a2c != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->a2c);
        data_ov109_020ea340->a2c = NULL;
    }
    if (data_ov109_020ea340->a44 != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->a44);
        data_ov109_020ea340->a44 = NULL;
    }
    if (data_ov109_020ea340->e350[1].q != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->e350[1].q);
        data_ov109_020ea340->e350[1].q = NULL;
    }
    if (data_ov109_020ea340->a360 != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340->a360);
        data_ov109_020ea340->a360 = NULL;
    }
    for (i = 0; i < 2; i++) {
        if (data_ov109_020ea340->e350[i].p != NULL) {
            OS_FreeToHeap(0, -1, data_ov109_020ea340->e350[i].p);
            data_ov109_020ea340->e350[i].p = NULL;
        }
    }
    deleteComObj(data_ov109_020ea340->c3c);
    deleteComObj(data_ov109_020ea340->c40);
    if (data_ov109_020ea340 != NULL) {
        OS_FreeToHeap(0, -1, data_ov109_020ea340);
        data_ov109_020ea340 = NULL;
    }
}
