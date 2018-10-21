all: driver.o sieve.o
	gcc -o sieve driver.o sieve.o

main.o: driver.c sieve.h
	gcc -c driver.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./sieve $(args)

clean:
	rm ./sieve *.o
