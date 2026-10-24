#include "m2c.h"

typedef int BOOL;

typedef struct {
    u8 favoriteColor : 4;
    u8 playerNo : 4;
    u8 nameLength;
    u16 name[10];
} MBUserInfo;

typedef struct {
    u16 palette[16];
    u16 data[512 / 2];
} MBIconInfo;

typedef struct {
    u32 arm9EntryAddr;
    u32 arm7EntryAddr;
    u32 padding;
} MbDownloadFileInfoHeader;

typedef struct {
    u32 recv_addr;
    u32 load_addr;
    u32 size;
    u32 target : 1;
    u32 rsv : 31;
} MbSegmentInfo;

typedef struct {
    MbDownloadFileInfoHeader header;
    MbSegmentInfo seg[(3)];
    u32 auth_code[(136) / sizeof(u32)];
    u32 reserved[32 / sizeof(u32)];
} MBDownloadFileInfo;

typedef struct {
    u32 seg_src_offset[(3)];
    u16 seg_head_blockno[(3)];
    u16 block_num;
} MB_BlockInfoTable;

typedef struct MBGameInfoFixed {
    MBIconInfo icon;
    MBUserInfo parent;
    u8 maxPlayerNum;
    u8 pad[1];
    u16 gameName[48];
    u16 gameIntroduction[96];
} MBGameInfoFixed, MbGameInfoFixed;

typedef struct MBGameInfoVolatile {
    u8 nowPlayerNum;
    u8 pad[1];
    u16 nowPlayerFlag;
    u16 changePlayerFlag;
    MBUserInfo member[15];
    u8 userVolatData[8];
} MBGameInfoVolatile, MbGameInfoVolatile;

typedef struct {
    MBGameInfoFixed fixed;
    MBGameInfoVolatile volat;
    u16 broadcastedPlayerFlag;
    u8 dataAttr;
    u8 seqNoFixed;
    u8 seqNoVolat;
    u8 fileNo;
    u8 pad[2];
    u32 ggid;
    struct MBGameInfo *nextp;
} MBGameInfo, MbGameInfo;

typedef struct {
    u32 ggid;
    u8 maxPlayerNum;
    u8 pad[3];
    u8 userParam[0x20];
} MBGameRegistry;

typedef struct MBiCacheList MBiCacheList;

typedef struct {
    u32 data_buf[15][((29) + 1) / sizeof(u32) + 1];
    u32 data_bmp[15];
} MbRequestPieceBuf;

typedef struct {
    u32 sendbuf[(0x400) / sizeof(u32)] __attribute__((aligned(32)));
    u32 recvbuf[(0x80) * 15 * 2 / sizeof(u32)] __attribute__((aligned(32)));
    MBUserInfo user;
    u16 isMbInitialized;
    int block_size_max;
    BOOL start_mp_busy;
    BOOL is_started_ex;
    u8 padding[28];
} MB_CommCommonWork;

typedef void (*MBCommPStateCallback)(u16 type, void *arg);

typedef struct {
    MBDownloadFileInfo dl_fileinfo;
    MBGameInfo game_info;
    MB_BlockInfoTable blockinfo_table;
    MBGameRegistry *game_reg;
    void *src_adr;
    u16 currentb;
    u16 nextb;
    u16 pollbmp;
    u16 gameinfo_child_bmp;
    u16 gameinfo_changed_bmp;
    u8 active;
    u8 update;
    MBiCacheList *cache_list;
    u32 *card_mapping;
} MB_CommFileInfo;

typedef struct MB_CommPWork {
    MB_CommCommonWork common;
    MBUserInfo childUser[15] __attribute__((aligned(4)));
    u16 childversion[15];
    u32 childggid[15];
    MBCommPStateCallback parent_callback;
    int p_comm_state[15];
    u8 file_num;
    u8 cur_fileid;
    s8 fileid_of_child[15];
    u8 child_num;
    u16 child_entry_bmp;
    MbRequestPieceBuf req_data_buf;
    u16 req2child[15];
    MBUserInfo childUserBuf;
    MB_CommFileInfo fileinfo[(16)];
    BOOL useWvrFlag;
    u8 padding2[20];
    u8 task_work[2 * 1024];
} MB_CommPWork;

typedef struct {
    u8 type;
    u8 pad1[1];
    u16 fid;
    u16 seqno;
} MBCommParentBlockHeader;

extern MB_CommCommonWork *mbc;

extern u8 data_02035cd4;

extern void MI_CpuFill8(void *dst, int value, int size);

extern void MI_CpuCopy8(const void *src, void *dst, u32 len);

extern u8 *func_0201faa4(const MBCommParentBlockHeader *hdr, u8 *sendbuf);

extern int MBi_BlockHeaderEnd(int body_len, u16 pollbmp, u32 *sendbuf);

int MBi_CommParentSendDLFileInfo(void) {
    MBCommParentBlockHeader hd;
    u8 buf[16];
    s8 file_id  = -1;
    u16 pollbmp = 0;
    u16 i;
    u8 j;
    u8 id;
    u8 *databuf;

    MI_CpuFill8(buf, 0, 16);

    /* Child slots 1..15 are polled; the work arrays are indexed from 0. */
    for (i = 1; i <= 15; i++) {
        if (((MB_CommPWork *) mbc)->p_comm_state[i - 1] == 5) {
            buf[((MB_CommPWork *) mbc)->fileid_of_child[i - 1]]++;
        }
    }

    id = data_02035cd4;
    for (j = 0; j < 16; j++) {
        id = (id + 1) % 16;
        if (((MB_CommPWork *) mbc)->fileinfo[id].active && buf[id]) {
            file_id = id;
            break;
        }
    }
    if (file_id == -1) {
        return 21; /* WM_ERRCODE_MAX + 1 */
    }

    data_02035cd4 = file_id;

    for (i = 1; i <= 15; i++) {
        if (((MB_CommPWork *) mbc)->p_comm_state[i - 1] == 5 && ((MB_CommPWork *) mbc)->fileid_of_child[i - 1] == file_id) {
            pollbmp |= 1 << i;
        }
    }

    hd.type = 3; /* MB_COMM_TYPE_PARENT_DL_FILEINFO */
    hd.fid  = file_id;
    databuf = func_0201faa4(&hd, (u8 *) ((MB_CommPWork *) mbc)->common.sendbuf);
    if (databuf) {
        MI_CpuCopy8(&((MB_CommPWork *) mbc)->fileinfo[file_id].dl_fileinfo, databuf, sizeof(MBDownloadFileInfo));
    }
    return MBi_BlockHeaderEnd((int) (sizeof(MBDownloadFileInfo) + 6), pollbmp, ((MB_CommPWork *) mbc)->common.sendbuf);
}
