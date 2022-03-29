//#pragma once
#include "Animal.hpp"


//############################################
//  CLASSE ANIMAL
//############################################


Animal::Animal(int maxX, int maxY)
{
	random_device rd;   // non-deterministic generator
	mt19937 gen(rd());  // to seed mersenne twister

	uniform_int_distribution<> dist(0, maxX-1); // distribute results between 1 and 6 inclusive.
	this->x = dist(gen);

	//uniform_int_distribution<> dist(0, maxY-1); // distribute results between 1 and 6 inclusive.
	this->y = dist(gen);

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
	return Attaque(); //a difinir
}

void Animal::setVivant(bool v)
{
	vivant = v;
}

bool Animal::attaque(Animal& a)
{
	return false; //a definir
}
