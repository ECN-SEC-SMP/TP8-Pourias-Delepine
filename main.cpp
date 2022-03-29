#include <stdio.h>
#include <iostream>
#include "Animal.hpp"
#include "Attaque.hpp"
#include "Lion.hpp"
#include "Loup.hpp"
#include "Pierre.hpp"
#include "Ours.hpp"
using namespace std;

void afficherPlateau();

int main(){
  int maxX = 10;
  int maxY = 10;
  srand(time(NULL));
  
  Lion Lion1(10,10);
  cout << "Lion1 x = "<<Lion1.getX()<<" y = "<<Lion1.getY() << endl;
  //cout << "attaque lion = "<< Lion1.getAttaque() << endl;

  Pierre Pierre1(10,10);
  cout << "Pierre1 x = "<<Pierre1.getX()<<" y = "<<Pierre1.getY() << endl;
  Pierre1.setAttaque();
  cout << "attaque pierre = "<< (Pierre1.getAttaque()).getTypeAttaque() << endl;

  afficherPlateau();
  return 0;
}


void afficherPlateau(void){
  int maxX = 10;
  int maxY = 10;
  
  for(int i = 0; i < maxX; i++ ){
    for(int i = 0; i < maxX-1; i++ ){
      cout << "+---";
    }
    cout << "+";
    cout<<endl;
    for(int i = 0; i < maxX-1; i++ ){
      cout << "|";
      cout << "A";//modifier ici la lettre
      cout << "  ";
    }
    cout << "|";
    cout<<endl;
  }
  for(int i = 0; i < maxX-1; i++ ){
      cout << "+---";
    }
    cout << "+";
}