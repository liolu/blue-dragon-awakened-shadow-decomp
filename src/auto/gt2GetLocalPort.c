#include "m2c.h"

u16 gt2GetLocalPort(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}
