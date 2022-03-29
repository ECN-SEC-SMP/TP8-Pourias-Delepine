//#pragma once
#include "Animal.hpp"


//############################################
//  CLASSE ANIMAL
//############################################


Animal::Animal(int maxX, int maxY)
{
	this->x = rand() % maxX; // maxX non inclus	
	this->y = rand() % maxY; // maxY non inclus
}

Animal::Animal(int maxX, int maxY, int a, int b)
{
	if (a < maxX){
		this->x = a;
	}
	if (b < maxY) {
		this->y = b;
	}
}

string Animal::getNom() const
{
	return this->nom;
}

int Animal::getX() const
{
	return this->x;
}

int Animal::getY() const
{
	return this->y;
}

bool Animal::getVivant() const
{
	return vivant;
}

Attaque Animal::getAttaque() const
{
	return typeAttaque.getTypeAttaque(); 
}

void Animal::setVivant(bool v)
{
	vivant = v;
}

bool Animal::attaque(Animal& a)
{
	return false; //a definir
}
