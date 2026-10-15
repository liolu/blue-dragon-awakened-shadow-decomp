#include "m2c.h"

M2C_UNK OS_LockMutex(M2C_UNK *);                   /* extern */
M2C_UNK OS_UnlockMutex(M2C_UNK *);                   /* extern */
M2C_UNK NNS_SndStrmStop(void *);                      /* extern */
M2C_UNK func_02034d50(void *);                      /* extern */
extern M2C_UNK data_0210bdb0;
extern M2C_UNK data_0210c428;

void func_02034cb8(void *arg0) {
    OS_LockMutex(&data_0210c428);
    if (M2C_FIELD(&data_0210bdb0, s32 *, 4) != 0) {
        OS_LockMutex(M2C_FIELD(&data_0210bdb0, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        NNS_SndStrmStop(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_02034d50(arg0);
    OS_UnlockMutex(&data_0210c428);
    if (M2C_FIELD(&data_0210bdb0, s32 *, 4) == 0) {
        return;
    }
    OS_UnlockMutex(M2C_FIELD(&data_0210bdb0, s32 *, 4) + 0x4C8);
}
