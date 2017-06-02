CC = gcc
CFLAGS = -c -Wall -Werror -o
ADD = -I thirdparty
OBJECTS = build/src/main.o build/src/deposit.o
OBJECTS_T = build/test/main.o build/test/deposit_test.o

all:  prog

prog: $(OBJECTS) bin/
	$(CC) $(OBJECTS) -o bin/deposit-calc
test: $(OBJECTS_T) bin/
	$(CC) $(OBJECTS_T) -o bin/deposit-calc-test
build/src/main.o : build/src/ src/main.c
	$(CC) src/main.c $(CFLAGS) build/src/main.o
build/src/deposit.o : build/src/ src/deposit.c
	$(CC) src/deposit.c $(CFLAGS) build/src/deposit.o
build/test/main.o : build/test/ test/main.c
	$(CC) $(ADD) test/main.c $(CFLAGS) build/test/main.o
build/test/deposit_test.o : build/test/ test/deposit_test.c
	$(CC) $(ADD) test/deposit_test.c $(CFLAGS) build/test/deposit_test.o
build/test/validation_test.o : build/test/ test/validation_test.c
	$(CC) $(ADD) test/validation_test.c $(CFLAGS) build/test/validation_test.o
bin/ :
	mkdir bin
build/src/ : build/
	mkdir build/src
build/test/ : build/
	mkdir build/test
build/ :
	mkdir build
.PHONY : clean
clean: 
	rm -f bin/*
	rm -rf build/*
