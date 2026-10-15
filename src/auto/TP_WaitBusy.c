#include "m2c.h"

extern M2C_UNK data_021039b0;

void TP_WaitBusy(s32 arg0) {
    do {

    } while (M2C_FIELD(&data_021039b0, volatile u16 *, 0x3A) & arg0);
}
