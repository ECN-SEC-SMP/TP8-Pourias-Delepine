run: main
	./main

main: classe.o main.o 
	g++ -o main  main.o classe.o

classe1.o: classe.cpp
	g++ -c classe.cpp

main.o: main.cpp
	g++ -c main.cpp