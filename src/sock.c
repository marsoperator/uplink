#include <string.h>
#include <unistd.h>
#include "uplink.h"

int up_open(const char *host, const char *port)
{
    (void)host; (void)port;
    return -1;
}

int up_send(struct up_conn *c, const unsigned char *data, int n)
{
    return write(c->fd, data, n);
}

int up_recv(struct up_conn *c)
{
    c->len = read(c->fd, c->buf, UP_MAX);
    return c->len;
}

void up_close(struct up_conn *c)
{
    close(c->fd);
}
/* open, send, recv, close */
/* write returns short on a full pipe */
