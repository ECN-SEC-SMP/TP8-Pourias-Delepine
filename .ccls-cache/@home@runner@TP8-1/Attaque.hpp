#pragma once
#include <string>
#pragma once
#include "stdlib.h"
#pragma once
#include <random>
#pragma once
using namespace std;

//############################################
//  CLASSE ATTAQUE
//############################################

class Attaque{

private:
  int type = 0; // 0 :pierre, 1: Feuille, 2:Ciseaux
public:
  Attaque(); //crée une attaque 
  //random
  Attaque(int a); //crée une attaque 
  //spécifique
  int getTypeAttaque() const;
  bool resoudreAttaque(Attaque &a) const;
  string getNomAttaque() const;
};