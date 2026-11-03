#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern s32 gpiProcess(void **, s32);
extern s32 gpiAddCallback(void **, Pair, void *, void *, s32);
extern s32 gpiSendGetInfo(void **, s32, s32);
extern void gpiInfoCacheToArg(s32, void *);
extern void gpiRemoveOperation(void **, void *);
extern s32 gpiAddOperation(void **, s32, s32, void **, s32, s32, s32);
extern s32 gpiGetProfile(void **, s32, void **);
extern void gpiSetErrorString(void **, void *);
extern void *gsimalloc(s32);
extern u8 data_020fb2f8[];

s32 gpiGetInfo(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *spC;
    void *sp10;
    Pair pr;
    s32 r;
    s32 var_r4;
    s32 var_r5;
    void *obj;
    u8 *g;

    g      = (u8 *) *arg0;
    var_r4 = 0;
    sp10   = NULL;
    if (arg2 == 1) {
        var_r4 = 1;
    }
    if (*(s32 *) (g + 0x100) == 0) {
        var_r4 = 0;
    }
    if (arg4 == 0) {
        goto plain;
    }
    if (var_r4 == 0) {
        goto plain;
    }
    if (gpiGetProfile(arg0, arg1, &spC) == 0) {
        goto plain;
    }
    if (*(s32 *) ((u8 *) spC + 0x10) != 0) {
        obj = gsimalloc(0x204);
        if (obj == NULL) {
            gpiSetErrorString(arg0, data_020fb2f8);
            return 1;
        }
        gpiInfoCacheToArg(*(s32 *) ((u8 *) spC + 0x10), obj);
        *(s32 *) obj              = 0;
        *(s32 *) ((u8 *) obj + 4) = arg1;
        pr.a                      = arg4;
        pr.b                      = arg5;
        r                         = gpiAddOperation(arg0, 2, 0, &sp10, 1, arg4, arg5);
        if (r != 0) {
            return r;
        }
        var_r5 = *(s32 *) ((u8 *) sp10 + 0x18);
        r      = gpiAddCallback(arg0, pr, obj, sp10, 0);
        if (r != 0) {
            return r;
        }
        gpiRemoveOperation(arg0, sp10);
        goto block19;
    }
plain:
    r = gpiAddOperation(arg0, 2, 0, &sp10, arg3, arg4, arg5);
    if (r != 0) {
        return r;
    }
    var_r5 = *(s32 *) ((u8 *) sp10 + 0x18);
    r      = gpiSendGetInfo(arg0, arg1, var_r5);
    if (r != 0) {
        return r;
    }
block19:
    if (arg3 != 0) {
        r = gpiProcess(arg0, var_r5);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
