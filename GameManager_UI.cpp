#include "GameManager_UI.h"
#include <iostream>
using namespace std;

GameManager::GameManager(){}

GameManager::GameManager(Player player1, Player player2){

}

NimUI::NimUI(){}

NimUI::NimUI(GameManager theGame){

}

void NimUI::register(NimUI observer){

}

void NimUI::start(){
  myGame.register(this);

}
