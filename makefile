all: compile run

compile:
	g++ -I ./include/ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -I ./include/ -o ./lib/Doku.o -c ./src/Doku.cpp
	g++ -I ./include/ -o ./lib/Hucre.o -c ./src/Hucre.cpp
	g++ -I ./include/ -o ./lib/Kontrol.o -c ./src/Kontrol.cpp
	g++ -I ./include/ -o ./lib/Organ.o -c ./src/Organ.cpp
	g++ -I ./include/ -o ./lib/Organizma.o -c ./src/Organizma.cpp
	g++ -I ./include/ -o ./lib/OrganVector.o -c ./src/OrganVector.cpp
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Sistem.o -c ./src/Sistem.cpp
	
	g++ -I ./include/ -o ./bin/main ./lib/BST.o ./lib/Doku.o ./lib/Hucre.o ./lib/Kontrol.o ./lib/Organ.o ./lib/Organizma.o ./lib/OrganVector.o ./lib/Queue.o ./lib/Radix.o ./lib/Sistem.o ./src/main.cpp

run:
	./bin/main