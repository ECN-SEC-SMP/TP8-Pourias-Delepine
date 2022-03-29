#include <stdio.h>
#include "Lion.hpp"
#include <string>

using namespace std;

#define PIERRE 0
#define FEUILLE 1
#define CISEAUX 2

//############################################
//  CLASSE LION
//############################################
Lion::Lion(int a, int b):Animal(a,b)
{
  
}
void Lion::setAttaque(){
  
  Attaque att;
  att.setAttaque((rand() % 2 )+1);

  this->typeAttaque = att;
}
void Lion::deplace(int maxX, int maxY){

  switch((rand() % 2)){
    case 0: this->x = -1;
    case 1: this->x = 1;
  }
  switch((rand() % 2)){
    case 0: this->y = -1;
    case 1: this->y = 1;
  }
}
