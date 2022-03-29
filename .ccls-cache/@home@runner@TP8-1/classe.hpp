#include <iostream>
using namespace std;

//############################################
//  CLASSE ATTAQUE
//############################################

class Attaque{

private:
  int type; // 0 :pierre, 1: Feuille, 2:Ciseaux
public:
  Attaque(); //crée une attaque 
  //random
  Attaque(int a); //crée une attaque 
  //spécifique
  int getAttaque() const;
  bool resoudreAttaque(Attaque &a) const;
  string getNomAttaque() const;
};

//############################################
//  CLASSE ANIMAL
//############################################

class Animal{

  private:
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

//############################################
//  CLASSE FILLE LION
//############################################

class Lion : public Animal{

public:
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};

//############################################
//  CLASSE FILLE OURS
//############################################

class Ours : public Animal{

public:
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};

//############################################
//  CLASSE FILLE PIERRE
//############################################
class Pierre : public Animal{

public:
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};

//############################################
//  CLASSE LOUP
//############################################
class Loup : public Animal{

public:
  virtual void setAttaque(); 
  virtual void deplace(int maxX, int maxY); 
};