default: printeof

printeof.o: main.c
	gcc -c main.c -o printeof.o

printeof: printeof.o
	gcc printeof.o -o printeof

clean:
	-rm -rf printeof.o
	-rm -rf printeof

test: ;