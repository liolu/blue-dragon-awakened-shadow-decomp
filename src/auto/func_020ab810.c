#include "m2c.h"

s32 func_020ab668(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020ab740(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020ab788(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020ace00(s32);                         /* extern */
extern M2C_UNK data_02165978;

void func_020ab810(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020ab668(&data_02165978, arg0);
    if (temp_r0 == 0) {
        return;
    }
    func_020ab740(&data_02165978, arg0);
    func_020ab788(&data_02165978, arg0);
    func_020ace00(temp_r0);
}
