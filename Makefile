all: compile link clean

compile:
	g++ -c NimGame.cpp
	g++ -c Computer.cpp
	g++ -c GameManager.cpp
	g++ -c NimUI.cpp
	g++ -c Pile.cpp
	g++ -c Player.cpp
	
link:
	g++ NimGame.o Computer.o GameManager.o NimUI.o Pile.o Player.o -o NimGame

clean:
	rm *.o
