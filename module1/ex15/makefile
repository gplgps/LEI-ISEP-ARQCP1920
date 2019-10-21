ex15: populate.o main.o inc_nsets.o check.o
	gcc populate.o inc_nsets.o check.o main.o -o ex15
	
populate.o: populate.c
	gcc -g -Wall -c populate.c -o populate.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o  main.o

check.o: check.c
	gcc -g -Wall -c check.c -o  check.o

inc_nsets.o: inc_nsets.c
	gcc -g -Wall -c inc_nsets.c -o inc_nsets.o
	
clean:
	rm -f *.o ex15
	
run: ex15
	./ex15