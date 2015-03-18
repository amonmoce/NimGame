all: compile link clean

compile:
	g++ -c NimGame.cpp
	g++ -c implementation/Computer.cpp
	g++ -c implementation/GameManager.cpp
	g++ -c implementation/NimUI.cpp
	g++ -c implementation/Pile.cpp
	g++ -c implementation/Player.cpp

link:
	g++ NimGame.o Computer.o GameManager.o NimUI.o Pile.o Player.o -o NimGame

clean:
	rm *.o
