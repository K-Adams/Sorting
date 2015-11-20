//insert makefile here
//Need to edit to project specs

CC = g++
DEBUG = -g
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: sort

sort: sort.o
	$(CC) $(LFLAGS) -o sort sort.o

sort.o: master.h
	$(CC) $(CFLAGS) -c sort.cpp

.PHONY: clean

clean:
	rm -rf *.o
	rm -rf *.dSYM
	rm -rf stack
	rm -rf queue

