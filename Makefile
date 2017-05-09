all:
	gcc src/main.c -Wall -Werror -c -o build/main.o
	gcc src/deposit.c -Wall -Werror -c -o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc
