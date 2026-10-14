#include "m2c.h"

M2C_UNK func_0207d4cc(void *);                      /* extern */
M2C_UNK func_02090ab8(void *);                      /* extern */
M2C_UNK func_02090ca4(void *);                      /* extern */
M2C_UNK func_020dbea0();                            /* extern */
M2C_UNK func_ov000_021bb274(void *);                /* extern */
extern M2C_UNK data_02101758;
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void *func_020dc5b8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101758;
    func_020dbea0();
    func_ov000_021bb274(arg0 + 0x18);
    M2C_FIELD(arg0, M2C_UNK **, 0x80) = &data_ov000_021eb498;
    func_02090ca4(arg0 + 0x80);
    func_02090ab8(arg0 + 0x80);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &data_ov000_021eb574;
    func_02090ca4(arg0 + 0x18);
    func_02090ab8(arg0 + 0x18);
    func_0207d4cc(arg0);
    return arg0;
}
