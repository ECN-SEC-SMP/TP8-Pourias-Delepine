
#include <stdio.h>
#include "classe.hpp"
#include <string>

using namespace std;

//############################################
//  CLASSE ATTAQUE
//############################################

Attaque::Attaque()
{
}
Attaque::Attaque(int a)
{
}
int Attaque::getAttaque() const
{
	return 0;
}
bool Attaque::resoudreAttaque(Attaque& a) const
{
	return false;
}

string Attaque::getNomAttaque() const
{
	return string();
}

//############################################
//  CLASSE ANIMAL
//############################################

Animal::Animal(int maxX, int maxY)
{
  int M1[maxX][maxY];
}

Animal::Animal(int maxX, int maxY, int a, int b)
{
}

string Animal::getNom() const
{
	return 0;
}

int Animal::getX() const
{
	return 0;
}

int Animal::getY() const
{
	return 0;
}

bool Animal::getVivant() const
{
	return false;
}

Attaque Animal::getAttaque() const
{
	return Attaque();
}

void Animal::setVivant(bool v)
{
}

bool Animal::attaque(Animal& a)
{
	return false;
}
//############################################
//  CLASSE LION
//############################################
void Lion::setAttaque(){
  
}
void Lion::deplace(int maxX, int maxY){
  
}

//############################################
//  CLASSE OURS
//############################################
void Ours::setAttaque(){
  
}
void Ours::deplace(int maxX, int maxY){
  
}

//############################################
//  CLASSE PIERRE
//############################################
void Pierre::setAttaque(){
  
}
void Pierre::deplace(int maxX, int maxY){
  
}

//############################################
//  CLASSE LOUP
//############################################
void Loup::setAttaque(){
  
}
void Loup::deplace(int maxX, int maxY){
  
}