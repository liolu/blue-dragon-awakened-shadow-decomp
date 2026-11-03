#include "m2c.h"

typedef struct {
    u8 pad[0xD8];
    s32 a[10];
    s32 pos;
} R;

s32 func_02072b58(R *r, s32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == r->a[i]) {
            return 1;
        }
    }
    r->pos       = (r->pos + 1) % 10;
    r->a[r->pos] = v;
    return 0;
}
