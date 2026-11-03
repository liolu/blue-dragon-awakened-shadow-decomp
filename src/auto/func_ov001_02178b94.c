#include "m2c.h"

typedef struct D {
    u8 pad[8];
    u8 tab[0x0c];
    u8 idx;
} D;
extern D *data_ov001_02196be4;
void MI_CpuCopy8(void *, void *, s32);
s32 atoi(void *);

s32 func_ov001_02178b94(s32 a) {
    u8 buf[4];
    s32 i;
    u8 *q;
    u8 *e = data_ov001_02196be4->tab + data_ov001_02196be4->idx * 3;
    if (e[0] != 0 && e[0] != 0x20) {
        return 1;
    }
    MI_CpuCopy8(e, buf, 3);
    buf[3] = 0;
    i      = 0;
    q      = buf;
    do {
        if (*q != 0) {
            break;
        }
        i++;
        *q++ = 0x20;
    } while (i < 3);
    return atoi(buf) >= a;
}
