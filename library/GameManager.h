#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Player.h"
#include "Computer.h"
#include "NimUI.h"
#include "Pile.h"

class NimUI;

class Pile;

class Player;

class GameManager{

  friend class NimUI;

  private:
    int maximum_to_remove;
    Player *firstPlayer, *secondPlayer, *nextPlayer, *previousPlayer;
    Pile *thePile;
    NimUI *ui;

  public:
    GameManager();
    GameManager(Player *player1, Player *player2);
    int sticksLeft();
    //int sticksTaken();
    //Player nextPlayer();
  //  Player previousPlayer();
    int gameOver();
    Player winner();
    void registration(NimUI *observer);
    void play();
    //void setPileSize (int number);
    void setNextPlayer(Player *player);

};


#endif
