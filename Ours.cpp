#include <stdio.h>
#include "Ours.hpp"
#include <string>

using namespace std;

#define PIERRE 0
#define FEUILLE 1
#define CISEAUX 2
//############################################
//  CLASSE OURS
//############################################
Ours::Ours(int a, int b):Animal(a,b){
  
}
void Ours::setAttaque(){
  Attaque att(FEUILLE);
  this->typeAttaque = att;
}
void Ours::deplace(int maxX, int maxY){
  int direction = rand() % 8; //val aléatoire [0;7]
  if(direction == 0){
    x+=1;
    y-=2;
  }else if(direction == 1){
    x+=2;
    y-=1;
  }else if(direction == 2){
    x+=2;
    y+=1;
  }else if(direction == 3){
    x+=1;
    y+=2;
  }else if(direction == 4){
    x-=1;
    y+=2;
  }else if(direction == 5){
    x-=2;
    y+=1;
  }else if(direction == 6){
    x-=2;
    y-=1;
  }else if(direction == 7){
    x-=1;
    y-=2;
  }
  
  
}
