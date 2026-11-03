#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    void **p4;
    u8 pad1[5];
    u8 fd;
    u8 pad2[9];
    u8 f17;
    u8 pad3[8];
    s32 f20;
    s32 a24[32];
    u16 aa4[40];
    s32 af4[45];
    u8 f1a8;
    u8 pad4[0x348 - 0x1a9];
    s32 f348;
} G;

G *func_02059234(void);
s32 func_020540d0(s32, s32, s32, u16, void *, s32);
void gt2CloseAllConnectionsHard(void *);

s32 func_020561f8(void) {
    s32 i = 1;
    s32 t;
    if ((s32) func_02059234()->fd >= 1) {
        do {
            G *a = func_02059234();
            G *b = func_02059234();
            G *c = func_02059234();
            G *d = func_02059234();
            t    = func_020540d0(10, a->af4[i], b->a24[i], c->aa4[i], &d->f348, func_02059234()->f348 + 1);
            if (t != 0) {
                return t;
            }
            i++;
        } while (i <= func_02059234()->fd);
    }
    func_02059234()->f17  = 0;
    func_02059234()->f20  = 0;
    func_02059234()->f1a8 = 1;
    gt2CloseAllConnectionsHard(*func_02059234()->p4);
    func_02059234()->f1a8 = 0;
    return 0;
}
