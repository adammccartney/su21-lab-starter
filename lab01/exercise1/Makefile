CC := gcc
CFLAGS := -g -Wall -std=c99

SOURCES := $(wildcard *.c)
OBJECTS := $(addprefix , $(notdir $(SOURCES:.c=.o)))

all: ex1

ex1: ex1.o test_ex1.o
	$(CC) $(CFLAGS) -o ex1 ex1.o test_ex1.o

test_ex1.o: test_ex1.c ex1.h
	$(CC) $(CFLAGS) -c test_ex1.c

ex1.o: ex1.c ex1.h
	$(CC) $(CFLAGS) -c ex1.c

.PHONY: all clean

clean:
	rm -rf ex1
