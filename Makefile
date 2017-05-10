CC = gcc
CFLAGS = -c -Wall -Werror -o
OBJECTS= build/main.o build/deposit.o

all:  prog

prog: $(OBJECTS) bin/
	$(CC) $(OBJECTS) -o bin/deposit-calc
build/main.o : build/ src/main.c
	$(CC) src/main.c $(CFLAGS) build/main.o
build/deposit.o : src/deposit.c
	$(CC) src/deposit.c $(CFLAGS) build/deposit.o
bin/ :
	mkdir bin
build/ :
	mkdir build
.PHONY : clean
clean: 
	rm -f build/*.o bin/*
