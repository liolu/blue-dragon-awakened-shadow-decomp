#include "m2c.h"

M2C_UNK func_0205b864(s32);                         /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_02067e18(void *arg0) {
    func_0205cb50(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 0x14));
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    func_0205b864(M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_0205cb50(arg0);
}
