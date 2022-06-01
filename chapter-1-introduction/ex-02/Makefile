default: hello

hello.o: main.c
	gcc -c main.c -o hello.o

hello: hello.o
	gcc hello.o -o hello

clean:
	-rm -rf hello.o
	-rm -rf hello

test: ;