#include "m2c.h"
typedef struct N {
    u8 p0[4];
    struct N *next;
    u32 a, b;
    u8 c, d;
} N;
extern u8 **data_ov001_02196ce8;
N *func_ov001_02186dc4(void *);
u32 OS_DisableIrqMask(u32);
void func_ov001_021886fc(void *, N *);
u32 OS_EnableIrqMask(u32);
N *func_ov001_02189050(s32 idx, u32 a, u32 b, u8 c, u8 d) {
    N *n = func_ov001_02186dc4(*(void **) ((u8 *) *(u8 **) &data_ov001_02196ce8 + idx * 0x40));
    N *it;
    u32 irq;
    n->a = a;
    n->b = b;
    n->c = c;
    n->d = d;
    irq  = OS_DisableIrqMask(1);
    it   = *(N **) (*(u8 **) &data_ov001_02196ce8 + idx * 0x40 + 0x10);
    while (1) {
        if (c < it->c) {
            func_ov001_021886fc(it, n);
            break;
        }
        it = it->next;
    }
    OS_EnableIrqMask(irq);
    return n;
}
