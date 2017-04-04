lab3: main.o
	g++ -o lab3 main.o

main.o: main.cpp
	g++ -c main.cpp
