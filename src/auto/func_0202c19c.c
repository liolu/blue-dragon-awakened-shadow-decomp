#include "m2c.h"

M2C_UNK func_0200948c(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02009690(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0202c11c();                            /* extern */
M2C_UNK func_0202c250(s32, s32 *, s32);             /* extern */
extern s32 data_020e5b44;
extern M2C_UNK data_0210895c;
extern M2C_UNK data_02108960;
extern M2C_UNK func_0202c190;

void func_0202c19c(s32 *arg0, u32 arg1) {
    if ((arg1 < 0x100U) || (data_020e5b44 == -1)) {
        func_0202c250(*arg0, ((s8 *)arg0 + 4), (arg1 >> 2) - 1);
        return;
    }
    func_0202c11c();
    M2C_FIELD(&data_0210895c, s32 *, 4) = 1;
    if (M2C_FIELD(&data_0210895c, s32 *, 8) != 0) {
        func_02009690(data_020e5b44, arg0, arg1, &func_0202c190, &data_02108960);
        return;
    }
    func_0200948c(data_020e5b44, arg0, arg1, &func_0202c190, &data_02108960);
}
