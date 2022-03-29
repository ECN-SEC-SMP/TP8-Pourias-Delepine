#pragma once
#include <string>

#include "stdlib.h"
#include "Attaque.hpp"
#include "Animal.hpp"

#include <random>

using namespace std;
//############################################
//  PIERRE
//############################################
class Pierre : public Animal{
 
public:
  Pierre(int,int);
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};
