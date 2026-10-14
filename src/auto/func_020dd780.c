#include "m2c.h"

M2C_UNK func_02090ab8(void *);                      /* extern */
M2C_UNK func_02090ca4(void *);                      /* extern */
M2C_UNK func_020dd1cc();                            /* extern */
M2C_UNK func_ov000_021bb274(void *);                /* extern */
extern M2C_UNK data_02101824;
extern M2C_UNK data_ov000_021eb498;
extern M2C_UNK data_ov000_021eb574;

void *func_020dd780(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101824;
    func_020dd1cc();
    func_ov000_021bb274(arg0 + 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0x7C) = &data_ov000_021eb498;
    func_02090ca4(arg0 + 0x7C);
    func_02090ab8(arg0 + 0x7C);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &data_ov000_021eb574;
    func_02090ca4(arg0 + 0x14);
    func_02090ab8(arg0 + 0x14);
    return arg0;
}
