CC := gcc
CFLAGS := -Wall -g -std=c99

pwd_checker: pwd_checker.o test_pwd_checker.o 
	$(CC) $(CFLAGS) -o pwd_checker pwd_checker.o test_pwd_checker.o 

test_pwd_checker.o: test_pwd_checker.c pwd_checker.h
	$(CC) $(CFLAGS) -c test_pwd_checker.c

pwd_checker.o: pwd_checker.c pwd_checker.h
	$(CC) $(CFLAGS) -c pwd_checker.c

.PHONY: all clean

clean:
	rm -rf pwd_checker pwd_checker.o test_pwd_checker.o
