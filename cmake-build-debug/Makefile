CC=gcc
CFLAGS=-Wall

all: main

main: main.o bmp8.o filters.o histogram.o
    $(CC) $(CFLAGS) -o main main.o bmp8.o filters.o histogram.o

main.o: main.c bmp8.h filters.h histogram.h
    $(CC) $(CFLAGS) -c main.c

bmp8.o: bmp8.c bmp8.h
    $(CC) $(CFLAGS) -c bmp8.c

filters.o: filters.c filters.h bmp8.h
    $(CC) $(CFLAGS) -c filters.c

histogram.o: histogram.c histogram.h bmp8.h
    $(CC) $(CFLAGS) -c histogram.c

clean:
    rm -f *.o main
