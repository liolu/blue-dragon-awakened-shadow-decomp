#include "m2c.h"

typedef struct S {
    s8 *str;
    s32 end;
} S;
void OS_LockMutex(void *);
void OS_UnlockMutex(void *);
s32 strlen(void *);
s8 *strstr(s8 *, void *);
s32 atoi(s8 *);
extern u8 data_020f9504[];
extern u8 data_020f9534[];
extern u8 data_020f9520[];

s32 func_0204a23c(u8 *arg0) {
    s8 *str;
    S *s;
    s32 off;
    s8 *p;
    s8 *q;
    s8 saved;

    str = *(s8 **) (arg0 + 0x1A08);
    s   = (S *) (arg0 + 0x1A08);
    if (strstr(str, data_020f9504) == NULL) {
        return 0;
    }
    off = (s32) strstr(str, data_020f9504) + 4;
    OS_LockMutex(arg0 + 0x1A18);
    *(s32 *) (arg0 + 0x1A34) = s->end - off;
    OS_UnlockMutex(arg0 + 0x1A18);
    p = strstr(s->str, data_020f9520);
    if (p == NULL) {
        return 1;
    }
    p     = p + strlen(data_020f9520);
    q     = strstr(p, data_020f9534);
    saved = *q;
    *q    = 0;
    OS_LockMutex(arg0 + 0x1A18);
    *(s32 *) (arg0 + 0x1A30) = atoi(p);
    OS_UnlockMutex(arg0 + 0x1A18);
    *q = saved;
    return 1;
}
