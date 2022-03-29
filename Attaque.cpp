#include <stdio.h>
#include "Attaque.hpp"
#include <string>

using namespace std;

#define PIERRE 0
#define FEUILLE 0
#define CISEAUX 0
//############################################
//  METHODE ATTAQUE
//############################################

Attaque::Attaque()
{
  type = rand() % 3; //val aléatoire [0;2]
}
Attaque::Attaque(int a)
{
  type = a;
}
int Attaque::getTypeAttaque() const
{
	return type;
}
bool Attaque::resoudreAttaque(Attaque& a) const
{
	return false;
}

string Attaque::getNomAttaque() const
{
	return string();
}

void Attaque::setAttaque(int a){
  type = a;
}