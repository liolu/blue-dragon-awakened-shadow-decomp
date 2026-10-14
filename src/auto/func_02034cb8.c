#include "m2c.h"

M2C_UNK func_020077e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200786c(M2C_UNK *);                   /* extern */
M2C_UNK func_02032a9c(void *);                      /* extern */
M2C_UNK func_02034d50(void *);                      /* extern */
extern M2C_UNK data_0210bdb0;
extern M2C_UNK data_0210c428;

void func_02034cb8(void *arg0) {
    func_020077e8(&data_0210c428);
    if (M2C_FIELD(&data_0210bdb0, s32 *, 4) != 0) {
        func_020077e8(M2C_FIELD(&data_0210bdb0, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_02032a9c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x170)(arg0);
    }
    func_02034d50(arg0);
    func_0200786c(&data_0210c428);
    if (M2C_FIELD(&data_0210bdb0, s32 *, 4) == 0) {
        return;
    }
    func_0200786c(M2C_FIELD(&data_0210bdb0, s32 *, 4) + 0x4C8);
}
