#include "m2c.h"

M2C_UNK func_0207cea4(M2C_UNK *);                   /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020ace00();                            /* extern */
extern s32 data_0216633c;
extern M2C_UNK data_0216634c;

s32 *func_020acdb4(s32 *arg0) {
    s32 temp_r1;

    func_020ace00();
    func_0207d4cc(*arg0);
    *arg0         = 0;
    temp_r1       = data_0216633c - 1;
    data_0216633c = temp_r1;
    if (temp_r1 <= 0) {
        func_0207cea4(&data_0216634c);
    }
    return arg0;
}
