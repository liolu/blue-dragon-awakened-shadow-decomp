#include "m2c.h"

typedef struct Q {
    s32 a;
    s32 b;
} Q;
s32 strncmp(s32, void *, s32);
s32 gpiAddCallback(s32, Q, s32 *, void *, s32);
void gpiCallErrorCallback(s32, s32, s32);
void gpiRemoveOperation(s32, void *);
void gpiSetErrorString(s32, void *);
void gpiSetError(s32, s32, void *);
s32 gpiCheckForError(s32, s32, s32);
s32 *gsimalloc(s32);
extern u8 data_020fba74[];
extern u8 data_020fba7c[];
extern u8 data_020fbaac[];

s32 func_0206a7a4(s32 arg0, u8 *arg1, s32 arg2) {
    Q q;
    s32 *p;
    s32 r;

    if (gpiCheckForError(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (strncmp(arg2, data_020fba74, 4) != 0) {
        gpiSetError(arg0, 1, data_020fba7c);
        gpiCallErrorCallback(arg0, 3, 1);
        return 3;
    }
    q.a = *(s32 *) (arg1 + 0xC);
    q.b = *(s32 *) (arg1 + 0x10);
    if (q.a != 0) {
        p = gsimalloc(4);
        if (p == NULL) {
            gpiSetErrorString(arg0, data_020fbaac);
            return 1;
        }
        *p = 0;
        r  = gpiAddCallback(arg0, q, p, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    gpiRemoveOperation(arg0, arg1);
    return 0;
}
