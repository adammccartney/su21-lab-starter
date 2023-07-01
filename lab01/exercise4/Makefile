
CC := gcc 
CFLAGS := -Wall -g -std=c99

all: ll_cycle

ll_cycle: ll_cycle.o test_ll_cycle.o
	$(CC) -o ll_cycle ll_cycle.o test_ll_cycle.o

ll_cycle.o: ll_cycle.c ll_cycle.h
	$(CC) $(CFLAGS) -c ll_cycle.c

test_ll_cycle.o: test_ll_cycle.c ll_cycle.h
	$(CC) $(CFLAGS) -c test_ll_cycle.c

.PHONY: all clean

clean:
	rm -rf *.o ll_cycle
