#include "m2c.h"
extern s32 strlen(s8 *);
extern s32 memcmp(void *, void *, s32);
s32 func_ov001_02186568(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 a = strlen(arg0);
    s32 b = strlen(arg1);
    if (a < arg2 || b < arg2) {
        return 0;
    }
    if (memcmp(arg0 + (a - arg2), arg1 + (b - arg2), arg2) == 0) {
        return 1;
    }
    return 0;
}
