#include "m2c.h"

extern u8 *data_ov001_02196c44;
void func_ov001_02180868(void *obj);
s32 func_ov001_021806d8(void);
void OS_Terminate(void);

void func_ov001_02180804(u8 *obj) {
    u8 *q;
    s32 t;
    if (*(u16 *) (obj + 2) != 0) {
        return;
    }
    q = data_ov001_02196c44 + 0x1000;
    if (q[0xE5C] != 0) {
        return;
    }
    if (*(u16 *) obj != 0x26) {
        return;
    }
    t = *(u16 *) (obj + 8);
    if (t == 4) {
        goto L4;
    }
    if (t != 5) {
        goto Ld;
    }
    func_ov001_02180868(obj);
    func_ov001_021806d8();
    return;
L4:
    func_ov001_021806d8();
    return;
Ld:
    OS_Terminate();
}
