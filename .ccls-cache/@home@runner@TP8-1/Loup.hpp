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
// LOUP
//############################################
class Loup : public Animal{

public:
  Loup(int,int);
  virtual void setAttaque()=0; 
  virtual void deplace(int maxX, int maxY)=0; 
};