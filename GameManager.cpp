#include "GameManager.h"
#include <iostream>
using namespace std;

GameManager::GameManager(){}

GameManager::GameManager(Player player1, Player player2){

}

void GameManager::registration(NimUI *observer){
  if( observer == NULL ){
    cout<<"You have to set an observer."<<endl;
    exit(0);
  }
  this->ui = observer;
}

int GameManager::gameOver(){
  if(this->thePile->numberofSticks() == 0)
    return 0;
  else return 1;

}

void GameManager::play(){


}
