#include "m2c.h"

M2C_UNK func_01ff8480(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_02006390(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020092a8(s32);                         /* extern */
M2C_UNK func_020093b4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02009438(s32, M2C_UNK, u32, M2C_UNK);  /* extern */
extern M2C_UNK data_02101d24;
extern M2C_UNK func_02009748;

void func_02009690(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK (*arg3)(s32), s32 arg4) {
    if (arg2 == 0) {
        if (arg3 == NULL) {
            return;
        }
        arg3(arg4);
        return;
    }
    do {

    } while (M2C_FIELD(&data_02101d24, volatile s32 *, 0) != 0);
    M2C_FIELD(&data_02101d24, volatile s32 *, 0) = 1;
    M2C_FIELD(&data_02101d24, volatile s32 *, 4) = arg0;
    M2C_FIELD(&data_02101d24, M2C_UNK (**)(s32), 0x10) = arg3;
    M2C_FIELD(&data_02101d24, volatile s32 *, 0x14) = arg4;
    func_020093b4(arg0, 0x38000000);
    func_02009438(arg0, arg1, arg2, 0);
    func_020092a8(arg0);
    func_02006390(arg0, &func_02009748, 0);
    func_01ff8480(arg0, arg1, 0x04000400, -0x03C00000 | (arg2 >> 2));
}
