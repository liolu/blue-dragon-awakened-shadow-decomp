#include "engine.h"
#include "m2c.h"

void OS_DestroyThread(M2C_UNK);
void OS_JoinThread(M2C_UNK);
void reset_network_vars(M2C_UNK);
M2C_UNK CPS_CalmDown(void);

extern M2C_UNK wfailed;
extern M2C_UNK scavenger_thread;
extern M2C_UNK tcpip_thread;

void CPS_Cleanup(void) {
    CPS_CalmDown();
    OS_JoinThread((s32) &scavenger_thread);
    OS_DestroyThread((s32) &tcpip_thread);
    M2C_FIELD(&wfailed, s32 *, 0x54) = 0;
    reset_network_vars(0);
    M2C_FIELD(&wfailed, s32 *, 0x58) = 0;
    M2C_FIELD(&wfailed, s32 *, 0x5C) = 0;
}
