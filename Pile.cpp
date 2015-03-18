#include "Pile.h"
#include <iostream>
using namespace std;

Pile::Pile(){
  numberSticks = 0;
}

Pile::Pile(int number){
  if( number < 0 ){
    cout<<"The number of sticks cannot be negative "<<endl;
    exit(0);
  }
  this->numberSticks = number;
}

int Pile::numberofSticks(){
  return this->numberSticks;
}

void Pile::setSize(int number){
  if( number < 0 ){
    cout<<"The number of sticks cannot be negative "<<endl;
    exit(0);
  }
  this->numberSticks = number;
}

void Pile::remove (int number){
  if(number < 0)
    cout<<"The number to remove cannot be negative "<<endl;
  else if(number <= this->numberSticks)
    this->numberSticks -= number;
  else
    this->numberSticks = 0;
}
