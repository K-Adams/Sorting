CC = g++
DEBUG = -g
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: sort DataGenerator
        
sort: sort.o
	$(CC) $(LFLAGS) -o sort sort.o

sort.o: master.h
	$(CC) $(CFLAGS) -c sort.cpp

DataGenerator: DataGenerator.o
	$(CC) $(LFLAGS) -o DataGenerator DataGenerator.o

DataGenerator.o: master.h
	$(CC) $(CFLAGS) -c DataGenerator.cpp

.PHONY: clean
	
clean:
	rm -rf *.o
	rm -rf *.dSYM
	rm -rf stack
	rm -rf queue

