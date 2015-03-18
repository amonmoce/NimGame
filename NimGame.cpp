#include "library/GameManager.h"

int main(){

  Player player1("Human");

  Computer player2("Computer");

  GameManager theGame( &player1, &player2);

  NimUI theInterface(&theGame);

  theInterface.start();

  return 0;

}
