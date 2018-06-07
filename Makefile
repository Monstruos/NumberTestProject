CC = gcc

all: main.c
	$(CC) main.c -o main.out

tests:
	for test in 1 2 3 4 5 6 ; do \
		./main.out < input_tests/input_test_$$test.conf ; \
	done
