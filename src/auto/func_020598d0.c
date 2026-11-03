#include "m2c.h"
extern void MI_CpuCopy8(void *, void *, int);
extern int memcmp(void *, void *, int);
extern char data_020fa8b4;
unsigned short func_020598d0(void *a) {
    unsigned short s[4];
    MI_CpuCopy8(a, s, 8);
    if (memcmp(&s[3], &data_020fa8b4, 2) == 0) {
        return s[2];
    }
    return 0;
}