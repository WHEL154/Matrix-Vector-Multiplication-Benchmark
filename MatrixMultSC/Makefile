all: mylib.o
	gcc -o main.out main.c mylib.o
	gcc -o maintime.out timecomplex.c mylib.o
	gcc -o mainspace.out spacecomplex.c mylib.o
	gcc -o maintesttime.out test_time.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time:
	./maintime.out

space:
	./mainspace.out

clear:
	rm -rf *.out
	rm -rf *.o