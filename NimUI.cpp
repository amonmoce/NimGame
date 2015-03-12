#include "NimUI.h"
#include<iostream>
using namespace std;

NimUI::NimUI(){}

NimUI::NimUI(GameManager theGame){
  myGame = &theGame;
  done = 0;
}

void NimUI::start(){
  myGame->registration(this);
  while (!this->done) {
    askSticks();
    myGame->play();
      //askPlayAgain();
    }
}

void NimUI::askSticks(){
  //A completer
  int number;
  cout<<"How many sticks do you want ? :  ";
  cin>>number;
  myGame->thePile->setSize(number);
}
