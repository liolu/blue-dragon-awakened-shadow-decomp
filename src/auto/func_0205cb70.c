#include "m2c.h"

typedef struct {
    u8 p0;
    u8 kind;
    u16 swp;
    int id;
} P;
typedef struct {
    u8 p[0xc];
    int **q;
} Q;
Q *SOC_GetHostByName(void *);
int inet_addr(void *);

int func_0205cb70(void *a, int b0, P *c) {
    u16 b   = b0;
    c->kind = 2;
    c->swp  = (u16) (((b >> 8) & 0xff) | ((b << 8) & 0xff00));
    c->id   = inet_addr(a);
    if (c->id == -1) {
        Q *t = SOC_GetHostByName(a);
        if (t == 0) {
            return 0;
        }
        c->id = **t->q;
    }
    return 1;
}
