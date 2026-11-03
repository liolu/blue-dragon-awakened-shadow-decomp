#include "m2c.h"
M2C_UNK current_time(void);
s32 ArrayLength(s32 *);
void ArrayAppend(s32 *, void *);
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} T;
s32 gti2StoreOutgoingReliableMessageInfo(u8 *o, s16 h, s32 v) {
    T t = {0, 0, 0, 0};
    s32 n;
    t.a           = *(s32 *) (o + 0x58);
    t.b           = v;
    *(s16 *) &t.c = h;
    t.d           = (s32) current_time();
    n             = ArrayLength(*(s32 **) (o + 0x60));
    ArrayAppend(*(s32 **) (o + 0x60), &t);
    return n + 1 == ArrayLength(*(s32 **) (o + 0x60));
}
