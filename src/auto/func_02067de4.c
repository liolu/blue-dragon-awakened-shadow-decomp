#include "m2c.h"

M2C_UNK func_0205cb50(void *);                      /* extern */

void func_02067de4(void *arg0) {
    func_0205cb50(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    func_0205cb50(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    func_0205cb50(arg0);
}
