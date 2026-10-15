#include "m2c.h"

M2C_UNK OS_SetThreadPriority(M2C_UNK *, s32);              /* extern */
extern s32 helper_threads_priority;
extern M2C_UNK scavenger_thread;
extern M2C_UNK tcpip_thread;

void CPS_SetThreadPriority(s32 arg0) {
    helper_threads_priority = arg0;
    OS_SetThreadPriority(&tcpip_thread, arg0);
    OS_SetThreadPriority(&scavenger_thread, arg0);
}
