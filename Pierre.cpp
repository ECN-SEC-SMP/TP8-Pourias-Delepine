#include <stdio.h>
#include "Pierre.hpp"
#include <string>

using namespace std;

#define PIERRE 0
#define FEUILLE 1
#define CISEAUX 2
//############################################
//  CLASSE PIERRE
//############################################
Pierre::Pierre(int a,int b):Animal(a,b){
  
}
void Pierre::setAttaque(){
  Attaque att(PIERRE);
  this->typeAttaque = att;
}
void Pierre::deplace(int maxX, int maxY){
  
}
