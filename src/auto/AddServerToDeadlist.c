#include "engine.h"
#include "m2c.h"

void SBServerSetNext(M2C_UNK, M2C_UNK);

void AddServerToDeadlist(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (temp_r1 == 0) {
        SBServerSetNext(arg1, 0);
    } else {
        SBServerSetNext(arg1, temp_r1);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = arg1;
}
