run: main
	./main

main: Animal.o Attaque.o Lion.o Loup.o Ours.o Pierre.o main.o 
	g++ -o main  main.o Animal.o Attaque.o Lion.o Loup.o Ours.o Pierre.o

Animal.o: Animal.cpp
	g++ -c Animal.cpp

Attaque.o: Attaque.cpp
	g++ -c Attaque.cpp

Lion.o: Lion.cpp
	g++ -c Lion.cpp

Loup.o: Loup.cpp
	g++ -c Loup.cpp

Pierre.o: Pierre.cpp
	g++ -c Pierre.cpp

main.o: main.cpp
	g++ -c main.cpp