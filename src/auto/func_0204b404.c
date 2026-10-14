#include "m2c.h"

M2C_UNK func_02006fe4(void *);                      /* extern */
M2C_UNK func_02048c2c();                            /* extern */
M2C_UNK func_0204a0fc();                            /* extern */
extern M2C_UNK data_0210e678;

void func_0204b404(void) {
    if (M2C_FIELD(&data_0210e678, void **, 0) == NULL) {
        return;
    }
    if (M2C_FIELD(&data_0210e678, s32 *, 0x14) != 0) {
        func_0204a0fc();
    }
    func_02048c2c();
    if (M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1188) != 0) {
        func_02006fe4(M2C_FIELD(&data_0210e678, void **, 0) + 0x111C);
    }
    M2C_FIELD(M2C_FIELD(&data_0210e678, void **, 0), s32 *, 0x1004) = -7;
}
