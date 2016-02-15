
all: main

main:	main.o String.o
	g++ -g main.o  String.o -o main 
	
main.o: main.cpp String.o
	g++ -c main.cpp -o main.o --std=c++11 -g
	

String.o: String.cpp String.h
	g++ -c String.cpp -Wall -Wextra -o String.o --std=c++11 -g
		
clean:
	rm -f *.o
