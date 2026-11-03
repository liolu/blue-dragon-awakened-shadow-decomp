/* compiler: 1.2/sp2p3 */
extern char *data_ov000_021eaf08[];
extern char data_ov000_021eaf78[];
char *func_ov000_021b85ac(unsigned int code) {
    if (code < 0x1b) {
        return data_ov000_021eaf08[code];
    }
    return data_ov000_021eaf78;
}
