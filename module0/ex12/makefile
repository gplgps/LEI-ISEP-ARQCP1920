str_check: size_string.o main.o
	gcc size_string.o main.o -o str_check
	
size_string.o: size_string.c
	gcc -g -Wall -c size_string.c -o size_string.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o  main.o
	
clean:
	rm -f *.o str_check
	
run: str_check
	./str_check
