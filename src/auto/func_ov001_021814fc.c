#include "m2c.h"

void MI_CpuFill8(u8 *, int, int);
void MI_CpuCopy8(u8 *, u8 *, int);
int atoi(u8 *);

void func_ov001_021814fc(u8 *a, u8 *b) {
    u8 buf[4];
    int i;
    int j;
    int k;
    u8 *p;
    MI_CpuFill8(buf, 0, 4);
    i = 0;
    j = 0;
    do {
        MI_CpuCopy8(a + j, buf, 3);
        k = 0;
        p = buf;
        do {
            if (*p != 0) {
                break;
            }
            k++;
            *p++ = 0x20;
        } while (k < 3);
        b[i] = atoi(buf);
        i++;
        j += 3;
    } while (i < 4);
}
