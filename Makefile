all: main.o fraction.o
	gcc -o ex1 main.o fraction.o

main.o: main.c
	gcc -c main.c

fraction.o: fraction.c
	gcc -c fraction.c

clean:
	rm ex1 *.o