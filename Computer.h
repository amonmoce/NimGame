#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player{
  public:
    Computer() : Player(){}
    Computer(const char *name);
    //void makeMove (Pile pile, int maximum);
};



#endif
