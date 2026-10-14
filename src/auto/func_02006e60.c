#include "m2c.h"

M2C_UNK func_02006ebc(s32);                         /* extern */
M2C_UNK func_02007424(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020074f4(void *);                      /* extern */
extern M2C_UNK data_02101980;

void func_02006e60(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_02101980, s32 *, 0x1C) != 0) {
        func_02007424(arg0, func_02006ebc);
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020074f4(arg0);
        return;
    }
    func_02006ebc(arg1);
}
