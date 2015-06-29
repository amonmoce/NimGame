#include "library/GameManager.h"
#include <iostream>
using namespace std;

int main(){
  char p1[1024], p2[1024];
  cout<<"Please, enter the name of the first player: ";
  cin>>p1;
  cout<<"Please, enter the name of the second player: ";
  cin>>p2;

  Player player1(p1);

  Computer player2(p2);

  GameManager theGame( &player1, &player2);

  NimUI theInterface(&theGame);

  theInterface.start();

  return 0;

}
