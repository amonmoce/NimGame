#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include "Computer.h"
//#include "Pile.h"

class NimUI{
private:
  GameManager myGame;
  int done;
public:
  NimUI();
  NimUI(GameManager theGame);
  void update (GameManager game);
  int askPlayerForSticks( int max);
  void start ();
  void askPlayAgain ();
  void askSticks ();
  //void reportWinner (string winner);
  //void reportPlay (string player,int taken, int left);
  void reportNoGame ();
  void dessineJeuDeNim( int stick );
};

class GameManager{

  private:
    Player firstPlayer, secondPlayer;
    // nextPlayer, previousPlayer;
    //Pile thePile;
    //NimUI ui;

  public:
    //static int maximum_to_remove = 3;
    GameManager();
    GameManager(Player player1, Player player2);
    int sticksLeft();
    int sticksTaken();
    //Player nextPlayer();
  //  Player previousPlayer();
    //boolean gameOver();
    Player winner();
    void register(NimUI observer);
    void play();
    //void setPileSize (int number);
    void setNextPlayer(Player player);

};



#endif
