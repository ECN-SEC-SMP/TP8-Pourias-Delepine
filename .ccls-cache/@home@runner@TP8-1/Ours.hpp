#pragma once
#include <string>
#pragma once
#include "stdlib.h"
#include "Attaque.hpp"
#include "Animal.hpp"
#pragma once
#include <random>
#pragma once
using namespace std;
//############################################
//  OURS
//############################################

class Ours : public Animal{

public:
  Ours(int,int);
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};
