#include "m2c.h"

typedef struct B {
    u8 pad[0x14];
    u8 f14;
    u8 pad2[7];
    s32 f1c;
} B;
typedef struct A A;
struct A {
    u8 pad[0x44];
    void (*fn)(A *, s32, B *, s32);
    s32 arg;
};
extern u8 data_020fd0dc[];
s32 strstr(s32, void *);
void SBServerParseKeyVals(B *, s32);
s32 current_time(void);
void FIFORemove(void *, B *);

void ParseSingleGOAReply(A *a, B *b, s32 c) {
    s32 on;
    if (strstr(c, data_020fd0dc) != 0) {
        on = 1;
    } else {
        on = 0;
    }
    SBServerParseKeyVals(b, c);
    if (on == 0) {
        return;
    }
    if (b->f14 & 4) {
        b->f14 |= 0x41;
    } else {
        b->f14 |= 0x42;
    }
    b->f14 &= 0xF3;
    b->f1c = current_time() - b->f1c;
    FIFORemove((u8 *) a + 8, b);
    a->fn(a, 0, b, a->arg);
}
