#include "m2c.h"

M2C_UNK func_02077f14(void *);                      /* extern */
s32 func_0207d4a4(s32);                             /* extern */
M2C_UNK func_02090934(void *);                      /* extern */
s32 func_ov000_021ba440();                          /* extern */
M2C_UNK func_ov000_021bcbe4(s32);                   /* extern */
extern void *data_02164f00;
extern M2C_UNK data_ov000_021eb568;

void *func_020901f4(void *arg0) {
    s32 var_r0;

    func_02077f14(arg0 + 4);
    func_ov000_021bcbe4(arg0 + 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_ov000_021eb568;
    func_02077f14(arg0 + 0x140);
    func_02077f14(arg0 + 0x160);
    M2C_FIELD(arg0, s8 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    func_02090934(arg0 + 0x18C);
    var_r0 = func_0207d4a4(0x448);
    if (var_r0 != 0) {
        var_r0 = func_ov000_021ba440();
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x1B4) = 0;
    data_02164f00 = arg0;
    M2C_FIELD(arg0, s8 *, 0x1B6) = 1;
    return arg0;
}
