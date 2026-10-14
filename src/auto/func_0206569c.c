#include "m2c.h"

M2C_UNK func_0205cb50(void *);                      /* extern */

void func_0206569c(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r0 == NULL) {
        return;
    }
    func_0205cb50(M2C_FIELD(temp_r0, void **, 0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 4));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 4) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 8) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x14) = NULL;
    func_0205cb50(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC8) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
}
