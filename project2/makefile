all: 
	gcc -g program2.c -o project2
defuseTheBomb:
	gcc bomb.c defuseMe.c hidden.o -o defuseTheBomb -g

checkmem: 
	gcc program2.c -o program2.o
	chmod a+x ./program2.o	
	valgrind -v ./program2.o
clean:	
	find ./ -name "*.o" -not -name "hidden.o" -delete
	find defuseTheBomb -delete 
	find project2 -delete

