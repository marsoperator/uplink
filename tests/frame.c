#include <assert.h>
#include "uplink.h"

int main(void)
{
    unsigned char b[16];
    assert(up_frame(b, 1, (const unsigned char *)"hi", 2) == 4);
    assert(b[0] == 0x81);
    return 0;
}
