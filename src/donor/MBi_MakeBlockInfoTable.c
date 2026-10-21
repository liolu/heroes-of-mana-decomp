/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MBi_MakeBlockInfoTable from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fileinfo.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    u8 favoriteColor : 4;
    u8 playerNo : 4;
    u8 nameLength;
    u16 name[10];
} MBUserInfo;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct MbDownloadFileInfoHeader {
    u32 arm9EntryAddr;
    u32 arm7EntryAddr;
    u32 padding;
} MbDownloadFileInfoHeader;
typedef struct MbSegmentInfo {
    u32 recv_addr;
    u32 load_addr;
    u32 size;
    u32 target : 1;
    u32 rsv : 31;
} MbSegmentInfo;
typedef struct {
    u32 seg_src_offset[(3)];
    u16 seg_head_blockno[(3)];
    u16 block_num;
} MB_BlockInfoTable;
static inline MbSegmentInfo *MBi_GetSegmentInfo(MbDownloadFileInfoHeader *mdfi, int i) {
    return ((MbSegmentInfo *) (mdfi + 1)) + i;
}
extern BOOL MBi_MakeBlockInfoTable(MB_BlockInfoTable *table, MbDownloadFileInfoHeader *mdfi);
typedef struct MB_CommCommonWork {
    u32 sendbuf[(0x400) / sizeof(u32)] __attribute__((aligned(32)));
    u32 recvbuf[(0x80) * 15 * 2 / sizeof(u32)] __attribute__((aligned(32)));
    MBUserInfo user;
    u16 isMbInitialized;
    int block_size_max;
    BOOL start_mp_busy;
    BOOL is_started_ex;
    u8 padding[28];
} MB_CommCommonWork;
extern MB_CommCommonWork *mbc;
extern BOOL func_0201cfd4(u8 segment_no, u32 address, u32 size);
BOOL MBi_MakeBlockInfoTable(MB_BlockInfoTable *table, MbDownloadFileInfoHeader *mdfi) {
    u16 *seg_headB = table->seg_head_blockno;
    u32 *seg_src   = table->seg_src_offset;
    u8 i;
    u32 src_ofs = 0;

    if (!mdfi) {
        return 0;
    }

    for (i = 0; i < (3); ++i) {
        MbSegmentInfo *si = MBi_GetSegmentInfo(mdfi, i);
        seg_src[i]        = src_ofs;
        src_ofs += si->size;
    }

    seg_headB[0] = 0;

    for (i = 0; i < (3); ++i) {
        MbSegmentInfo *si   = MBi_GetSegmentInfo(mdfi, i);
        u16 next_block_head = (u16) (seg_headB[i] + (u16) ((si->size + mbc->block_size_max - 1) / mbc->block_size_max));

        if (0 == func_0201cfd4(i, si->load_addr, si->size)) {
            return 0;
        }

        if (i < (3) - 1) {
            seg_headB[i + 1] = next_block_head;
        } else {
            table->block_num = next_block_head;
        }
    }

    return 1;
}
BOOL func_0201cfd4(u8 segment_no, u32 address, u32 size);
