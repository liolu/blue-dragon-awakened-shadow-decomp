#include "m2c.h"

M2C_UNK func_0205e274(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_0210e8cc;
extern M2C_UNK func_02050f44;

void func_020501dc(M2C_UNK arg0, s32 *arg1) {
    if (M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x18) == 0) {
        return;
    }
    func_0205e274(arg0, *arg1, 0, 0, &func_02050f44, 0);
}
