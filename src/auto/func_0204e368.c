#include "m2c.h"
typedef struct {
    void *f0;
    u8 pad[0x10];
    s32 f14;
    s32 f18;
} S;
extern S *data_0210e738;
extern u8 func_0204efa0[];
extern u8 func_0205277c[];
extern u8 func_02052688[];
extern s32 func_0204d568(s32);
extern s32 gt2AddressToString(s32, u16, s32);
extern s32 gt2CreateSocket(S *, s32, s32, s32, void *);
extern s32 func_0204e7cc(s32);
extern void gt2Listen(void *, void *);
extern void gt2SetUnrecognizedMessageCallback(void *, void *);

s32 func_0204e368(void) {
    S *s;
    s32 r;
    s32 t;
    if (data_0210e738->f0 != 0) {
        return 0;
    }
    t = func_0204d568(0x4000) + 0xc000;
    s = data_0210e738;
    t = gt2AddressToString(0, t, 0);
    r = gt2CreateSocket(data_0210e738, t, s->f14, s->f18, func_0204efa0);
    if (func_0204e7cc(r) != 0) {
        return r;
    }
    gt2Listen(data_0210e738->f0, func_0205277c);
    gt2SetUnrecognizedMessageCallback(data_0210e738->f0, func_02052688);
    return r;
}
