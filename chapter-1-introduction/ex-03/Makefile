default: convert

convert.o: main.c
	gcc -c main.c -o convert.o

convert: convert.o
	gcc convert.o -o convert

clean:
	-rm -rf convert.o
	-rm -rf convert

test: ;