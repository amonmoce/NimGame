#ifndef NIMUI_H
#define NIMUI_H

#include "GameManager.h"

class GameManager;

class NimUI{
private:
  GameManager* myGame;
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



#endif
