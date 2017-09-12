all: test

##CFLAGS=-g -02
test: test.o mytoc.o
	cc test.o mytoc.o -o test

test.o: test.c mytoc.h
	cc -c test.c

mytoc.o: mytoc.c mytoc.h
	cc -c mytoc.c

play: test
	./test

clean:
	rm -f *.o test
