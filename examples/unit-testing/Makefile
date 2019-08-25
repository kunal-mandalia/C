.PHONY: build

build:
	gcc -Wall -o ./build/app.o ./src/main.c ./src/money.c -lcheck -I ./src/

run:
	./build/app.o

test: 
	gcc -Wall -o ./tests/app_test.o ./src/money.c ./tests/check_money.c -lcheck -I ./tests/
	./tests/app_test.o
