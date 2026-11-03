#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} P;
typedef struct {
    s32 x;
    s32 y;
} Node;
typedef struct {
    u8 pad[0xC];
    s32 f0c;
    s32 f10;
} Arg;
s32 strncmp(void *, void *, s32);
s32 atoi(void *);
s32 gpiAddCallback(void *, P, Node *, void *, s32);
void gpiCallErrorCallback(void *, s32, s32);
void gpiRemoveOperation(void *, void *);
void gpiSetErrorString(void *, void *);
void gpiSetError(void *, s32, void *);
s32 gpiValueForKey(void *, void *, void *, s32);
s32 gpiCheckForError(void *, void *, s32);
Node *gsimalloc(s32);
extern u8 data_020fb614;
extern u8 data_020fb61c;
extern u8 data_020fb64c;
extern u8 data_020fb658;

s32 func_020678b8(void *arg0, Arg *arg1, void *arg2) {
    u8 sp10[16];
    P p;
    s32 r6;
    Node *n;
    s32 r;

    if (gpiCheckForError(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (strncmp(arg2, &data_020fb614, 5) != 0) {
        gpiSetError(arg0, 1, &data_020fb61c);
        gpiCallErrorCallback(arg0, 3, 1);
        return 3;
    }
    if (gpiValueForKey(arg2, &data_020fb64c, sp10, 0x10) == 0) {
        gpiSetError(arg0, 1, &data_020fb61c);
        gpiCallErrorCallback(arg0, 3, 1);
        return 3;
    }
    r6  = atoi(sp10);
    p.a = arg1->f0c;
    p.b = arg1->f10;
    if (p.a != 0) {
        n = gsimalloc(8);
        if (n == NULL) {
            gpiSetErrorString(arg0, &data_020fb658);
            return 1;
        }
        n->y = r6;
        n->x = 0;
        r    = gpiAddCallback(arg0, p, n, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    gpiRemoveOperation(arg0, arg1);
    return 0;
}
