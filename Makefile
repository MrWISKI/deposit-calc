CC = gcc
CFLAGS = -c -Wall -Werror -o
OBJECTS= build/main.o build/deposit.o

all:  prog

prog: $(OBJECTS)
	$(CC) $(OBJECTS) -o bin/deposit-calc
build/main.o : src/main.c
	$(CC) src/main.c $(CFLAGS) build/main.o
build/deposit.o : src/deposit.c
	$(CC) src/deposit.c $(CFLAGS) build/deposit.o
clean:
	rm -rf *.o *.exe
