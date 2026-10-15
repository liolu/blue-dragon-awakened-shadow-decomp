#include "m2c.h"

M2C_UNK ProcessIncomingReplies(void *, M2C_UNK);             /* extern */
M2C_UNK TimeoutOldQueries(void *);                      /* extern */
M2C_UNK QueueNextQueries(void *);                      /* extern */

void SBQueryEngineThink(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    ProcessIncomingReplies(arg0, 0);
    TimeoutOldQueries(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
        QueueNextQueries(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, M2C_UNK, s32), 0x44)(arg0, 2, 0, M2C_FIELD(arg0, s32 *, 0x48));
}
