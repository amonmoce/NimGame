#include "Computer.h"
#include<iostream>
using namespace std;

Computer::Computer(){}

Computer::Computer(const char *name){
  playerName = name;
  cout<<"New player "<<name<<endl;
}
