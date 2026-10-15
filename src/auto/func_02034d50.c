#include "m2c.h"

M2C_UNK FreePlayer(void *);                      /* extern */
M2C_UNK FreeChannel();                            /* extern */
M2C_UNK RemoveCommandByPlayer(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0210bdb0;
extern M2C_UNK data_0210c440;

void func_02034d50(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    FreeChannel(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    RemoveCommandByPlayer(&data_0210c440, arg0);
    if (M2C_FIELD(&data_0210bdb0, s32 *, 4) != 0) {
        RemoveCommandByPlayer(M2C_FIELD(&data_0210bdb0, s32 *, 4) + 0x4E0, arg0);
    }
    FreePlayer(arg0);
}
