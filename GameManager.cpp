#include "GameManager.h"
#include <iostream>
using namespace std;

GameManager::GameManager(){
}

GameManager::GameManager(Player *player1, Player *player2){
  if(player1 == NULL || player2 == NULL)
    cout<<"The players cannot be null"<<endl;
  this->firstPlayer = player1;
  this->secondPlayer = player2;
}

void GameManager::registration(NimUI *observer){
  if( observer == NULL ){
    cout<<"You have to set an observer."<<endl;
    exit(0);
  }
  this->ui = observer;
  maximum_to_remove = 3;
  cout<<"The observer is ready"<<endl;
}

int GameManager::gameOver(){
  if(this->thePile->numberofSticks() == 0){
    cout<<"GAME OVER"<<endl;
    return 1;
  }
  else return 0;
}

int GameManager::sticksLeft(){
  return this->thePile->numberofSticks();
}

void GameManager::play(){
  cout<<"Let's start the game now"<<endl;
  while (!gameOver()){
      if(typeid(*nextPlayer) == typeid(Computer)){
        cout<<"Computer plays"<<endl;
      }
      else{
        int number;
        int max = maximum_to_remove < sticksLeft() ? maximum_to_remove : sticksLeft();
        
        while((number = this->ui->askPlayerForSticks(max)) == 0)
          cout<<"You have to pick between 1 and "<<max<<endl;
        thePile->remove(number);
      }



  }
}
