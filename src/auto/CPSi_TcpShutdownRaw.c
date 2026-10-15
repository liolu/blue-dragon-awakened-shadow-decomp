#include "m2c.h"

M2C_UNK OS_YieldThread();                            /* extern */
M2C_UNK tcp_send_ack(void *, M2C_UNK);             /* extern */
M2C_UNK tcp_send_finack(void *, M2C_UNK);             /* extern */

void CPSi_TcpShutdownRaw(void *arg0) {
    u8 temp_r1;

    OS_YieldThread();
    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) (u8) (temp_r1 + 0xFD) <= 1U) {
        tcp_send_finack(arg0, 0x19);
        M2C_FIELD(arg0, u8 *, 8) = 7U;
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    tcp_send_ack(arg0, 0x1A);
}
