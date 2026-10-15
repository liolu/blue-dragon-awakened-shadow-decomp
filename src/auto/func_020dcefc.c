#include "engine.h"
#include "m2c.h"

void func_020dcfe4(M2C_UNK, M2C_UNK);

extern s32 data_021672c8;

void func_020dcefc(s32 arg0) {
    if (data_021672c8 == 0) {
        return;
    }
    func_020dcfe4(data_021672c8, arg0);
}
