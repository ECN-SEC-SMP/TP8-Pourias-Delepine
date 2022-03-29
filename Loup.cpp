#include <stdio.h>
#include "Loup.hpp"
#include <string>

using namespace std;

#define PIERRE 0
#define FEUILLE 1
#define CISEAUX 2
//############################################
//  CLASSE LOUP
//############################################
Loup::Loup(int a, int b):Animal(a,b){
  
}
void Loup::setAttaque(){
  Attaque att;
  this->typeAttaque = att;
}
void Loup::deplace(int maxX, int maxY){
  
}

