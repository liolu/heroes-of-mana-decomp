#include "m2c.h"
typedef struct {
    void *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    void *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    } u;
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;
typedef struct {
    u8 pad0[0x20];
    FSDirPos pos;
    u32 parent;
    union {
        struct {
            FSDirPos pos;
            const char *path;
            u32 find_directory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findpath;
        struct {
            FSDirPos pos;
        } seekdir;
        struct {
            FSDirEntry *p_entry;
            u32 skip_string;
        } readdir;
    } arg;
} FSFile;
s32 FSi_TranslateCommand(FSFile *, s32);
void FSi_SeekDirDirect(FSFile *, u32);
int FSi_StrNICmp(const char *, const char *, u32);

static inline s32 FSi_IsPathChar(u32 c) {
    s32 r = 0;
    if (c != 0 && c != '/' && c != 0x5C) {
        r = 1;
    }
    return r;
}

s32 FSi_FindPathCommand(FSFile *p_dir) {
    FSDirEntry entry;
    const u8 *path     = (const u8 *) p_dir->arg.findpath.path;
    u32 find_directory = p_dir->arg.findpath.find_directory;
    s32 len;
    u32 is_directory;
    u32 c;
    FSi_TranslateCommand(p_dir, 2);
    for (; *path != 0; path += (*path != 0) ? 1 : 0) {
        for (len = 0; FSi_IsPathChar(c = path[len]); len++) {
        }
        is_directory = c;
        if (c != 0 || find_directory != 0) {
            is_directory = 1;
        }
        if (len == 0) {
            return 1;
        }
        if (*path == '.') {
            if (len == 1) {
                path += 1;
                continue;
            }
            if ((len == 2) & (path[1] == '.')) {
                if (p_dir->pos.own_id != 0) {
                    FSi_SeekDirDirect(p_dir, p_dir->parent);
                }
                path += 2;
                continue;
            }
        }
        if (len > 127) {
            return 1;
        }
        p_dir->arg.readdir.p_entry     = &entry;
        p_dir->arg.readdir.skip_string = 0;
        for (;;) {
            if (FSi_TranslateCommand(p_dir, 3) != 0) {
                return 1;
            }
            if (is_directory == entry.is_directory && len == entry.name_len &&
                FSi_StrNICmp((const char *) path, entry.name, len) == 0) {
                break;
            }
        }
        if (is_directory) {
            p_dir->arg.seekdir.pos = entry.u.dir_id;
            path += len;
            FSi_TranslateCommand(p_dir, 2);
        } else {
            if (find_directory) {
                return 1;
            }
            *p_dir->arg.findpath.result.file = entry.u.file_id;
            return 0;
        }
    }
    if (!find_directory) {
        return 1;
    }
    *p_dir->arg.findpath.result.dir = p_dir->pos;
    return 0;
}
