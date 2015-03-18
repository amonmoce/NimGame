#include "../library/Player.h"
#include <iostream>
using namespace std;

Player::Player(){}

Player::Player(const char *name){
  playerName = name;
  cout<<"New player "<<playerName<<endl;
}
