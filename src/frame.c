#include "uplink.h"

/* opcode 1 text, 2 binary, 8 close */
int up_frame(unsigned char *out, int op, const unsigned char *data, int n)
{
    out[0] = 0x80 | op;
    out[1] = (unsigned char)n;
    return n + 2;
}
/* frame header */
/* close frame */
