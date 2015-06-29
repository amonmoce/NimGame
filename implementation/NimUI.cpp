#include "../library/NimUI.h"
#include <iostream>
#include <cstdlib>
using namespace std;

NimUI::NimUI(){}

NimUI::NimUI(GameManager *theGame){
  if(theGame == NULL){
    cout<<"The game cannot be null";
    exit(0);
  }
  myGame = theGame;
  done = 0;
  cout<<"New game with "
  <<myGame->firstPlayer->playerName
  <<" and "
  <<myGame->secondPlayer->playerName<<endl;
}

void NimUI::start(){
  myGame->registration(this);
  while (!this->done) {
    system("clear");
    askSticks();
    system("clear");
    myGame->play();
    askPlayAgain();
  }
}

void NimUI::askSticks(){
  int number;
  cout<<"How many sticks do you want ? :  ";
  cin>>number;
  myGame->thePile = new Pile(number);
}

int NimUI::askPlayerForSticks(int max){
  int sticksNumber;
  cout<<"How many sticks do you remove ? : ";
  cin >> sticksNumber;
  if(sticksNumber <= max)
    return sticksNumber;
  else return 0;
}

void NimUI::askPlayAgain(){
  char response;
  cout<<"Another game ? (Y/N): ";
  cin>>response;
  if(response == 'N'){
    done = 1;
    cout<<"Thanks for playing"<<endl
        <<"See you next time"<<endl;
  }

}
