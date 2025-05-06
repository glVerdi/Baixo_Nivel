all: main prob

main: main.o bibfunc.o
	gcc -o main main.o bibfunc.o

prob: prob.o bibfunc.o
	gcc -o prob prob.o bibfunc.o

main.o: main.c
	gcc -c main.c

prob.o: prob.c
	gcc -c prob.c

bibfunc.o: bibfunc.c
	gcc -c bibfunc.c

clean:
	rm -f main prob main.o prob.o bibfunc.0
