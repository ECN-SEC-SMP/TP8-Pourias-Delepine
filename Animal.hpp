#pragma once
#include "Attaque.hpp"

#pragma once
#include <string>
#pragma once
#include "stdlib.h"
#pragma once
#include <random>

#pragma once
using namespace std;

//############################################
//  ANIMAL
//############################################

class Animal{

  protected:
    //virtuelle pure donc =0
    string nom;
    int x; //abscisse de l'animal
    int y; //ordonnée de l'animal
    bool vivant;
    Attaque typeAttaque;

  public :
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque()const;
    void setVivant(bool v);
    bool attaque(Animal &a);
    virtual void setAttaque() = 0; //virtuelle pure
    virtual void deplace(int maxX, int maxY) = 0; //virtuelle pure
};