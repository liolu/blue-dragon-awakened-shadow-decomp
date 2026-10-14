#include "m2c.h"

M2C_UNK func_02006d44(void *, M2C_UNK *, void *, void *, s32, s32); /* extern */
s32 func_02007014(void *);                          /* extern */
M2C_UNK func_020070e0(void *);                      /* extern */
extern void *data_0210e678;
extern M2C_UNK func_0204b54c;

void func_0204b4c4(void) {
    if ((M2C_FIELD(data_0210e678, s32 *, 0x1188) != 0) && (func_02007014(data_0210e678 + 0x111C) == 0)) {
        return;
    }
    func_02006d44(data_0210e678 + 0x111C, &func_0204b54c, data_0210e678, data_0210e678 + 0x1000, 0x1000, 0x10);
    func_020070e0(data_0210e678 + 0x111C);
}
