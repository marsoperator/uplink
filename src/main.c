#include <stdio.h>
#include "uplink.h"

int main(int argc, char **argv)
{
    if (argc < 3) {
        fprintf(stderr, "uplink host port\n");
        return 1;
    }
    return 0;
}
