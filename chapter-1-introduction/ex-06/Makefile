default: verify

verify.o: main.c
	gcc -c main.c -o verify.o

verify: verify.o
	gcc verify.o -o verify

clean:
	-rm -rf verify.o
	-rm -rf verify

test: ;