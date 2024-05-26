CC = gcc
CFLAGS = -Wall

all: main data_generator

main: main.o homar.o
	$(CC) $(CFLAGS) -o main main.o homar.o

data_generator: data_generator.o
	$(CC) $(CFLAGS) -o data_generator data_generator.o

main.o: main.c homar.h
	$(CC) $(CFLAGS) -c main.c

homar.o: homar.c homar.h
	$(CC) $(CFLAGS) -c homar.c

data_generator.o: data_generator.c data_generator.h
	$(CC) $(CFLAGS) -c data_generator.c

clean:
	rm -f *.o main data_generator
