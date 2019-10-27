ex22: fs.o asm.o main.o
	gcc fs.o asm.o main.o -o ex22

asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o

fs.o: fs.c
	gcc -g -Wall -c fs.c -o fs.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o  main.o
	
clean:
	rm -f *.o ex22
	
run: ex22
	./ex22