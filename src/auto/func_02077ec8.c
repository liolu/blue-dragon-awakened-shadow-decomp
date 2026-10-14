#include "m2c.h"

M2C_UNK func_02090ab8(void *);                      /* extern */
M2C_UNK func_02090ca4(void *);                      /* extern */
M2C_UNK func_ov000_021bb274();                      /* extern */
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void *func_02077ec8(void *arg0) {
    func_ov000_021bb274();
    M2C_FIELD(arg0, M2C_UNK **, 0x68) = &data_ov000_021eb498;
    func_02090ca4(arg0 + 0x68);
    func_02090ab8(arg0 + 0x68);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov000_021eb574;
    func_02090ca4(arg0);
    func_02090ab8(arg0);
    return arg0;
}
