#ifndef UPLINK_H
#define UPLINK_H

#define UP_MAX 8192

struct up_conn {
    int fd;
    unsigned char buf[UP_MAX];
    int len;
};

int up_open(const char *host, const char *port);
int up_send(struct up_conn *c, const unsigned char *data, int n);
int up_recv(struct up_conn *c);
void up_close(struct up_conn *c);

#endif
/* connection struct, 8k buffer */
/* no dynamic allocation */
/* buffer size constant */
