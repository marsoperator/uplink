CC=gcc
CFLAGS=-O2 -Wall -std=c89

all: uplink

uplink: src/sock.o src/frame.o src/main.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f uplink src/*.o
# c89
# clean target
